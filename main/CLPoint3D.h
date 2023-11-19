#pragma once
#include "CLPoint.h"

class CLPoint3D : public CLPoint
{
protected:
	float z;

public:
	CLPoint3D();
	CLPoint3D(float tx, float ty, float tz);

	float getz(void);
	void setz(float tz);

	virtual std::string afficherCoordo(void);
};

