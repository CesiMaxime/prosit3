#include "CLParcours2D.h"
#include <cmath>
#include <vector>
#include <iostream>

CLParcours2D::CLParcours2D() : CLParcours(){

}

CLParcours2D::CLParcours2D(int tTailleVector) : CLParcours(tTailleVector) {

}

void CLParcours2D::ajouterPoint(CLPoint3D* tPoint)
{

}

void CLParcours2D::ajouterPoint(CLPoint* tPoint) {
	listePoints.push_back(tPoint);
}

float CLParcours2D::calculDistance() const {
    std::cout << "Taille de listePoints : " << listePoints.size() << std::endl;
    float distanceTotale = 0.0;
    // Itérer jusqu'à this->listePoints.size() - 1
    for (size_t i = 0; i < this->listePoints.size() - 1; ++i) {
        if (listePoints[i] && listePoints[i + 1]) {
            float deltaX = listePoints[i + 1]->getx() - listePoints[i]->getx();
            float deltaY = listePoints[i + 1]->gety() - listePoints[i]->gety();
            float distancePartielle = std::sqrt(deltaX * deltaX + deltaY * deltaY);
            distanceTotale += distancePartielle;
        }
        else {
            std::cout << "error  ptr null ";
        }
    }

    return distanceTotale;
}

void CLParcours2D::message(void) const {

    std::cout << "Parcours de type 2D";
}

