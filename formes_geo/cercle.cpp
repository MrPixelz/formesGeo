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