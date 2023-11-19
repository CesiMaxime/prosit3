#include <iostream>
#include "CLParcours.h"
#include "CLParcours2D.h"
#include "CLParcours3D.h"
#include "CLPoint.h"
#include "CLPoint3D.h"


int main() {
	
	CLPoint3D point2d(2, 2, 2);
	CLPoint3D point(3, 5, 3);
	std::cout << point2d.afficherCoordo()<< "\n";
	std::cout << point.getNBPoints() << "\n";
	std::cout << point.afficherCoordo() << "\n";
	std::cout << point.getID();

	/*
	CLPoint* p1;
	CLPoint* p2;
	CLPoint* p3;
	CLParcours* parcours;

	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint(1.0, 1.0);
	p1 = new CLPoint(2.0, 2.0);
	parcours = new CLparcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();

	p1 = new CLPoint3D(0.0, 0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);
	p3 = new CLPoint3D(2.0, 2.0, 2.0);
	parcours = new CLparcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();

	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficherCoordo();
	*/
}

