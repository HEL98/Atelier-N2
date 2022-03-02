#include "client.h"
using namespace std;
#include<iostream>
int client::cmpt=0;
client::client(string nom, string prenom)
{
	this->nom = nom;
	this->prenom = prenom;
}

void client::afficher()
{
	cout << "le nom est " << this->nom << endl;
	cout << "le prenom est " << this->prenom << endl;
}

client::client() : matricule(++client::cmpt)
{

}



client::~client()
{
	cout << "le destructeur de client " << endl;
}
