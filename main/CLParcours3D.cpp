#include "CLParcours3D.h"
#include <cmath>
#include <vector>
#include <iostream>
#include "CLPoint.h"

CLParcours3D::CLParcours3D() : CLParcours2D() {

}

CLParcours3D::CLParcours3D(int tTailleVector) : CLParcours2D(tTailleVector) {

}

void CLParcours3D::ajouterPoint(CLPoint* tPoint) {
    CLPoint3D* point3D = dynamic_cast<CLPoint3D*>(tPoint);
    if (point3D) {
        listePoints.push_back(point3D);
    }
    else {
        std::cerr << "Erreur : Tentative d'ajout d'un point non-3D dans CLParcours3D." << std::endl;
    }
}

void CLParcours3D::ajouterPoint(CLPoint3D* tPoint) {
    listePoints.push_back(tPoint);
}

float CLParcours3D::calculDistance() const {
    std::cout << "Taille de listePoints : " << listePoints.size() << std::endl;
    float distanceTotale = 0.0;
    // Itérer jusqu'à this->listePoints.size() - 1
    for (size_t i = 0; i < this->listePoints.size() - 1; ++i) {
        if (listePoints[i] && listePoints[i + 1]) {
            float deltaX = listePoints[i + 1]->getx() - listePoints[i]->getx();
            float deltaY = listePoints[i + 1]->gety() - listePoints[i]->gety();
            float deltaZ = listePoints[i + 1]->getz() - listePoints[i]->getz();

            float distancePartielle = std::sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
            distanceTotale += distancePartielle;
        }
        else {
            std::cout << "error  ptr null ";
        }
    }
    return distanceTotale;
}


void CLParcours3D::message(void) const{
    std::cout << "Parcours de type 3D";
}