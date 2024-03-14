#include "Mesh.h"
#include <iostream>
Mesh::Mesh()
{
}


Mesh::~Mesh()
{
}


void Mesh::AddVertexData(const Vector3f  pos, float u, float v, const Color color /* = Color::white */)
{
	Vertex p(pos, color, Vector2(u,v));
	vertexBuffer.push_back(p);
}

void Mesh::AddVertexData(float posx, float posy, float posz, float u, float v, const Color color /* = Color::white */)
{
	AddVertexData(Vector3f(posx, posy, posz), u, v, color);
}

void Mesh::AddVertexData(float posx, float posy, float posz, float u, float v, Vector3f  nor, const Color  color)
{
	Vertex p(Vector3f(posx, posy, posz), color, nor,Vector2(u,v));
	vertexBuffer.push_back(p);
}
