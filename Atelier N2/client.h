#pragma once
#include<iostream>
using namespace std;
class client
{
private :

	int matricule;
	string nom;
	string prenom;
	static int cmpt;

public :
	client();
	client(string nom, string prenom);
	void afficher();
	~client();
};

