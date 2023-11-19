#pragma once
#include "CLParcours2D.h"
#include <vector>
#include "CLPoint3D.h"

class CLParcours3D : public CLParcours2D
{
private:
	std::vector<CLPoint3D*> listePoints;

public:
	CLParcours3D();
	CLParcours3D(int tTailleVector);
	void ajouterPoint(CLPoint* tPoint) override;
	void ajouterPoint(CLPoint3D* tPoint);
	virtual float calculDistance(void) const override;
	virtual void message(void) const override;
};

