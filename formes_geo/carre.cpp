#include "carre.h"

Carre::Carre():Figure()
{
	cote=0;
}

Carre::Carre(int inX, int inY, int inCote) : Figure(inX, inY)
{
	cote = inCote;
}

Carre::Carre(const Carre& inCarre):Figure(inCarre)
{
	cote=inCarre.cote;
}
Carre::~Carre() 
{

}

void Carre::setCote(int inCote)
{
  cote = inCote;
}

int Carre::getCote() const
{
	return cote;
}
float Carre::calculerPerimetre()
{
	return (cote*4);
}
float Carre::calculerAire() 
{
	return (cote * cote);
}
void Carre::selectionner(int inX, int inY) 
{
	
	if (inX >= x && inX <= (x + cote)) 
	{
		if (inY >= y && inY <= (y+ cote))
		{
			estSelectionne = true;
		}
		else 
		{
			estSelectionne = false;
		}
	}
	else 
	{
		estSelectionne = false;
	}
	
}
  void Carre::modifier(int inX, int inY, int inCote,int inRayon) 
 {
	  if (estSelectionne == true)
	  {
		  cote = inCote;
		  x = inX;
		  y = inY;
		 
	  }
 }
   string Carre::getType() 
  {
	   return "carre";
  }