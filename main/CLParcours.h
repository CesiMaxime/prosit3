#pragma once
#include "CLPoint.h"
#include "CLPoint3D.h"
class CLParcours
{
protected:
	int tailleVector;

public:
	CLParcours();
	CLParcours(int tTailleVector);
	virtual void ajouterPoint(CLPoint * tPoint) = 0;
	virtual void ajouterPoint(CLPoint3D* tPoint) = 0;
	virtual float calculDistance(void) const = 0;
	virtual void message(void) const = 0;

};

