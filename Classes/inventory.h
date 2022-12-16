#include "General.h"

struct power
{
	int type;
	int qte;
};


class inventory
{
public:
	inventory();
	virtual ~inventory();
	void affichage();
	void ajout(power obj);

	int inv_obj[10];
	int inv_qte[10];

private:

};