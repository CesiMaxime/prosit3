#pragma once
#include "CLParcours.h"
#include <vector>
#include "CLPoint.h"

	class CLParcours2D : public CLParcours
{
protected:
	std::vector<CLPoint*> listePoints;

public:
	CLParcours2D();
	CLParcours2D(int tTailleVector);
	virtual void ajouterPoint(CLPoint* tPoint);
	virtual void ajouterPoint(CLPoint3D* tPoint);
	virtual float calculDistance(void) const;
	virtual void message(void) const;

};

