#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;

void Leer (char Num [], const int Tam)
{
	int i;
	for (i=1; i<=Tam; i++)
	{
		cout << "Dame una letra  " << endl;
		cin >> Num[i];
		system ("cls");
	}
}

void Imprime (char Num [], const int Tam)
{
	int i;
	for (i=1; i<=Tam; i++)
	{
		cout << Num[i] << endl;
	}
}

void Ordenamiento (char CB [], const int Tam)
{ 
 int e, i, auxiliar,intercambio; 
 for(e = 0; e <= Tam; e++)
 { 
 intercambio = 0; 
 for(i = 0; i <= Tam-1-e; i++)
 { 
 if(CB[i] > CB[i+1])
 { 
 auxiliar = CB[i+1]; 
 CB[i+1] = CB[i]; 
 CB[i] = auxiliar; 
 intercambio =1; 
 } 
 } 
 if (intercambio==0)
 { 
 cout << endl << "Para en la iteracion   " << e << endl << endl;
 break; 
 } 
 } 
}


main ()
{
	const int Tam = 10;
	char Num[Tam];
	Leer (Num, Tam);
	cout << "Letras Ingresadas  " << endl;;
	Imprime (Num, Tam);
	Ordenamiento (Num, Tam);
	cout << "Letras Ordenadas" << endl;
	Imprime (Num, Tam);
}
