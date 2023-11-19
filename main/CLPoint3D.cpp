#include "CLPoint3D.h"
#include <string>

CLPoint3D::CLPoint3D() : CLPoint() {
	this->z = 0;
}

CLPoint3D::CLPoint3D(float tx, float ty, float tz) : CLPoint(tx, ty) {
	this->z = tz;
}

float CLPoint3D::getz(void) {
	return this->z;
}

void CLPoint3D::setz(float tz) {
	this->z = tz;
}

std::string CLPoint3D::afficherCoordo(void) {
	std::string res = "Abscisse : " + std::to_string(this->x) + " Ordonnée : " + std::to_string(this->y) + " Profondeur : " + std::to_string(this->z);
	return res;
}