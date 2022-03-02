#pragma once
#include "client.h"
#include "mad.h"
class compte
{
private:
	int num_compte;
	client prop;
	mad solde;
	static int mt;
	
	
public : 
	compte();
	compte( client prop, mad solde);
	compte(const compte& c);
	virtual void deposer(mad s,compte c);
	virtual bool retirer(mad montant_tirer);
	virtual bool verser(mad montant_verser);
	virtual void consulter();
	~compte();
};

