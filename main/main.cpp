	#include <iostream>
	#include "CLParcours.h"
	#include "CLParcours2D.h"
	#include "CLParcours3D.h"
	#include "CLPoint.h"
	#include "CLPoint3D.h"


	int main() {


	
	CLPoint* p1;
	CLPoint* p2;
	CLPoint* p3;
	CLParcours* parcours;

	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint(1.0, 1.0);
	p3 = new CLPoint(2.0, 2.0);
	parcours = new CLParcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	std::cout << parcours->calculDistance();
	parcours->message();

	delete p1;
	delete p2;
	delete p3;
	delete parcours;



	p1 = new CLPoint3D(0.0, 0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);
	p3 = new CLPoint3D(2.0, 2.0, 2.0);
	parcours = new CLParcours3D(3);

	std::cout << "\n test";

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	std::cout << parcours->calculDistance();
	parcours->message();

	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficherCoordo();
		
}

