#include "Compte.h"
int Compte::uniq_id = 0;
/*
* Nom_methode:Compte
* Parametres:le type du compte a creer 
* Description:Constructeur de la classe Compte,cree un compte nouveau avec le type donné
*/
Compte::Compte(string client, TypeCompte type) :id_compte(uniq_id++), solde(0.0),type_compte(type), client(client)
{}
/*
* Nom_methode:Effectuer_depot
* Parametres:somme:type double
* Description:Incremente le solde du compte par la somme donnée
*/
void Compte::Effectuer_depot(double somme)
{
	this->solde += somme;	
	
}

void Compte::Effectuer_retrait(double somme)
{
	if (somme <= this->solde)
	{
		this->solde -= somme;
		
	}

}

void Compte::Transferer(double somme, Compte& recever)
{
	if (this->solde >= somme)
	{
		this->solde -= somme;
		recever.solde += somme;		
	}
}

void Compte::consulter() const
{
	cout << "Account_id:" << this->id_compte << endl;
	cout << "Costumer_name: " << this->client << endl;
	cout << "Solde: " << this->solde << endl;
}

Compte::~Compte()
{
}
