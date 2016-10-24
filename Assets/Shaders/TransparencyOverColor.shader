Shader "Custom/TransparencyOverColor"
{
	Properties
	{
		//Background Color
		_Color("Main Color", Color) = (1,1,1,1)

		//Intensity Of the Transparent Texture (Emission/Glow)
		_Intensity("intensity", Float) = .5

		//transparent Texture
		_MainTex("Base (RGBA)", 2D) = "white" {}
	}

	Subshader
	{
		LOD 200

		CGPROGRAM
		#pragma surface surf Lambert

		sampler2D _MainTex;
		fixed4 	  _Color;
		float     _Intensity;

		struct Input
		{
			float2 uv_MainTex;
		};

		void surf(Input IN, inout SurfaceOutput o)
		{
			fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
			o.Albedo = lerp(_Color, c.rgb, c.a);
			o.Emission = tex2D(_MainTex, IN.uv_MainTex).rgb * _Intensity;
		}
		ENDCG
	}
	Fallback "Diffuse"
}
