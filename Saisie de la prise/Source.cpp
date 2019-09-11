#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

bool lePreneur;
string NomPreneur;
int NbPoints;
int NbBouts;

int Contrat;

int prise = 1;
int garde = 2;
int garde_sans = 3;
int garde_contre = 4;
int passe = 5;



int main()
{
	if (lePreneur = 1)
	{
		cout << "Entrez le nom du Preneur : ";
		cin >> NomPreneur;

		cout << "1 : prise\n";
		cout << "2 : garde\n";
		cout << "3 : garde sans\n";
		cout << "4 : garde contre\n";
		cout << "5 : passe\n";
		cout << "Entrez le Contrat : ";
		cin >> Contrat;

		if (Contrat < 5)
		{
			cout << "La partie commence !!!\n";
			cout << NomPreneur;
			cout << " a pris une ";
			switch (Contrat)
			{
			case 1:
				cout << "prise\n";
				break;
			case 2:
				cout << "garde\n";
				break;
			case 3:
				cout << "garde sans\n";
				break;
			case 4:
				cout << "garde contre\n";
				break;
			}
			cout << "La partie ce passe...\n";
			cout << "Nombre de point de ";
			cout << NomPreneur;
			cout << " : ";
			cin >> NbPoints;
			cout << "Nombre de bout : ";
			cin >> NbBouts;
		}
		else 
		{
			cout << "Personne n'a pris... Redistribution\n";

		}
	}
	else
	{
		//on revien sur la distribution
	}
	return(0);
}