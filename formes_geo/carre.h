#ifndef carreH
#define carreH
#include "figure.h"

class Carre:public Figure
{
  protected:
    int cote;
  public:
	Carre();
	Carre(int x, int y, int cote);
	Carre(const Carre&);
	virtual ~Carre();
    virtual void setCote(int);
	virtual int getCote() const;
	virtual float calculerPerimetre();
	virtual float calculerAire();
	virtual void selectionner(int, int);
	virtual void modifier(int, int, int,int);
	virtual string getType();
};
#endif
