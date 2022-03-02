#include "compte.h"
#include "mad.h"
#include "client.h"
#include<iostream>
using namespace std;
int compte::mt = 0;

compte::compte()
{
}

compte::compte(client prop, mad solde)
{
	compte::mt++;
	this->num_compte = compte::mt;
	this->prop = prop;
	this->solde = solde;

}

compte::compte(const compte& c)
{
	this->num_compte = c.num_compte;
	this->prop = c.prop;
	this->solde = c.solde;
}

 void compte::deposer(mad s,compte c)
{
	
	 if ( c.solde > s)
	 {
		 this->solde = this->solde + s;
	 }
	 else
	 {
		 cout << "ne peut pas " << endl; 
	 }
}

bool compte::retirer(mad montant_tirer )
{
	if ( solde >= montant_tirer )
		return true;
	else
		return false;
}

bool compte::verser(mad montant_verser)
{
	if (solde >= montant_verser)
		return true;
	else
		return false; 
}

void compte::consulter()
{
	cout << "le solde est ";
	this->solde.afficher();
}

compte::~compte()
{
	cout << "destructeur de compte " << endl ;
}
