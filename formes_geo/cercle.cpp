#include "cercle.h"

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}
Cercle::~Cercle() 
{

}

void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}
 float Cercle::calculerPerimetre() 
{
	 return (2 * Pi*rayon);
}

 float Cercle::calculerAire() 
 {
	 return (Pi * (rayon ^ 2));
 }
 void Cercle::selectionner(int inX, int inY) 
 {
	 float leRayon = rayon;
	 int a = x + leRayon;

	 int b = y + leRayon;

	 if (((((inX - a)*(inX - a)) + ((inY - b)*(inY - b)))) / (leRayon * leRayon) <= 1)
{
		 estSelectionne = true;
}
	 else {
		 estSelectionne = false;
	 }

 }

  void Cercle::modifier(int inX, int inY, int inCote, int inRayon)
  {
	  if (estSelectionne == true)
	  {
		  rayon = inRayon;
		  x = inX;
		  y = inY;

	  }
  }
  string Cercle::getType() const
  {
	  return "Cercle";
  }