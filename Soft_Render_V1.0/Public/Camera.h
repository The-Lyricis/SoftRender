#pragma once
#include "Transform.h"
class Camera
{
public:

	Transform transform;
	Matrix v;
	Matrix p;

public:
	Camera(Transform t) : transform(t){}
	Camera() {}
	Matrix LookAt(const Vector3f& eyePos, const Vector3f& lookat, const Vector3f& upAxis);
	Matrix Perspective(float fov, float aspect, float nearPanel, float farPanel);
	Matrix Perspective(float l, float r, float n, float f, float t, float b);
	Matrix Orthographic(float l, float r, float n, float f, float t, float b);
};

