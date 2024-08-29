#version 330 core
out vec4 FragColor;

in vec2 TexCoord;
in vec3 Position;

uniform sampler2D texture1;
uniform sampler2D texture2;

uniform float time;
uniform int screenWidth;

uniform vec3 objectColor;
uniform vec3 lightColor;

void main()
{
    //FragColor = mix(texture(texture1, TexCoord), texture(texture2, TexCoord), 0.2f);
    FragColor = vec4(lightColor * objectColor, 1.0);
}