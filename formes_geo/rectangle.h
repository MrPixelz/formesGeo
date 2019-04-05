#ifndef rectangleH
#define rectangleH
#include "figure.h"

class FormeRectangle:public Figure
{
  protected:
    int largeur;
	int hauteur;
  public:
	FormeRectangle();
	FormeRectangle(int x, int y, int largeu, int hauteur);
	FormeRectangle(const FormeRectangle&);
	~FormeRectangle();

	virtual string getType() const;

	virtual void setLargeur(int);
	virtual void setHauteur(int);
	virtual int getLargeur() const;
	virtual int getHauteur() const;
	float calculerAire();
	float calculerPerimetre();
	void selectionner(int,int);
};
#endif
