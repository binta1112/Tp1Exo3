#pragma once
#include<iostream>

using namespace std;

typedef enum
{
	cheque,
	epargne
}TypeCompte;
class Compte
{
private:
	static int uniq_id;
	int id_compte;//Id du compte
	double solde;//solde du compte
	TypeCompte type_compte;//type de compte
	string client;//proprietaire du compte
	

	Compte(const Compte& account) = delete;
	Compte() = delete;
	Compte operator = (const Compte& account) = delete;
public:
	Compte(string client,TypeCompte type);
	void Effectuer_depot(double somme);
	void Effectuer_retrait(double somme);
	void Transferer(double somme, Compte& recever);
	void consulter()const;
	~Compte();
};

