#pragma once
#include <string>

class CLPoint
{
protected:
	float x;
	float y;
	int ID;
	int type;
	static int nBPoints;

public:
	CLPoint();
	CLPoint(float tx, float ty);

	float getx(void);
	void setx(float tx);

	float gety(void);
	void sety(float ty);

	int getID(void);
	int getType(void);
	int getNBPoints(void);

	virtual std::string afficherCoordo(void);
};

