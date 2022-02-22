#include <stdio.h>
#include <stdlib.h>

void main() {

	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	int i;
	double average, sum=0;

	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		sum += *(ary + i);
		average = sum / (sizeof(ary) / sizeof(ary[0]));
	}
	

	printf("Æò±Õ°ª: %.2lf", average);




	system("pause");
}