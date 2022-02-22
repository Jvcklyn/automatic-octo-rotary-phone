#include <stdio.h>
#include <stdlib.h>

void main() {

	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	int i;
	
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		printf("%0.1lf ", *(ary + 4-i));
	}


	system("pause");
}