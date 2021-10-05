#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <tchar.h>

int main()
{
	int s = 0;
	int i = 0;
	float t1[9];
	float t2[9];

	t1[0] = 0;
	t1[1] = 0;
	t1[2] = 0;
	t1[3] = 0;
	t1[4] = 0;
	t1[5] = 0;
	t1[6] = 0;
	t1[7] = 0;
	t1[8] = 0;
	t1[9] = 0;

	for (i = 0; i < 10; i = i + 1) {

		printf("[t2] quelle valeur pour la case d ?\n", i);
		scanf("%f", &t2[i]);
		
		if (t2[i] >= 0) {
			t1[i] = t2[i];
		}
	}

	for (i = 0; i < 10; i = i + 1) {

		printf("%.2f ", t2[i]);
		printf("%.2f ", t1[i]);
	}
	_getch();
}