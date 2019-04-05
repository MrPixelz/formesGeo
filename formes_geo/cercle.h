#ifndef cercleH
#define cercleH
#include "figure.h"
//---------------------------------------------------------------------------
class Cercle:public Figure
{
  protected:
    int rayon;
  public:
	Cercle();
	Cercle(int x, int y, int rayon);
	Cercle(const Cercle&);
	virtual ~Cercle();
    void setRayon(int);
	int getRayon() const;
	virtual float calculerPerimetre();
	virtual float calculerAire();
	virtual void selectionner(int, int);
	virtual void modifier(int, int, int,int);
	virtual string getType() const;
};
#endif
