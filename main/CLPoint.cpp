#include "CLPoint.h"
#include <string>

int CLPoint::nBPoints = 0;

CLPoint::CLPoint() {
	this->x = 0;
	this->y = 0;
	this->type = 2;
	this->ID = this->nBPoints;
	this->nBPoints += 1;
}

CLPoint::CLPoint(float tx, float ty) : CLPoint(){
	this->x = tx;
	this->y = ty;
}

float CLPoint::getx(void) {
	return this->x;
}

void CLPoint::setx(float tx) {
	this->x = tx;
}


float CLPoint::gety(void) {
	return this->y;
}

void CLPoint::sety(float ty) {
	this->y = ty;
}


int CLPoint::getID(void) {
	return this->ID;
}
int CLPoint::getType(void) {
	return this->type;
}
int CLPoint::getNBPoints(void) {
	return this->type;
}

std::string CLPoint::afficherCoordo(void) {
	std::string res = "Abscisse : " + std::to_string(this->x) + "Ordonnée : " + std::to_string(this->y);
	return res;
}