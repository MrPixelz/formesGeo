#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.1416;

class Figure
{
protected:
	int x;	//coin supérieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	virtual int getX() const;
	virtual int getY() const;
	virtual void setPoint(int X, int Y);
	virtual void setX(int);
	virtual void setY(int);
	virtual bool EstSelectionne();
	virtual void Deselectionner();
	virtual void setCote(int);
	virtual int getCote() const;
	virtual void setRayon(int);
	virtual int getRayon() const;
	virtual float calculerPerimetre();
	virtual float calculerAire();
};

#endif