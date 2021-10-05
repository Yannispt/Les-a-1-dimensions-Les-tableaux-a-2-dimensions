#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
int main()
{
	int i, nbr, somme;
	int tab[10];

	printf("entrez le nombre d'elements dans le tableau: ");
	scanf("%d", &nbr);

	printf("entrez les elements du tableau: ");
	for (i = 0; i < nbr; i++)
		scanf("%d", &tab[i]);

	somme = 0;
	for (i = 0; i < nbr; i++)
		somme = somme + tab[1];
	
	printf("la somme = %d", somme);

	return (0);
}