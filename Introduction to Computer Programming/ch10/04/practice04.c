/*
������: ��ȣ��
���ϸ�: practice04.c
���α׷� ����: 3���� �̸�, ����, ������ Ű����� �Է� �ް� ���� Ȥ�� ������ �������� �����ϱ�
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct { // typedef�� ����ü human ����
	int age;
	char sex;
	char name[64];
}human;

void change(human* human1, human* human2) { // �� ����ü�� �¹ٲ��ִ� �Լ�
	human temp; // �ӽ÷� Ȱ���� �� ����ü
	temp=*human1;
	*human1=*human2;
	*human2=temp;
}

int main(void) {
	int i, what;
	human human[3];
	for (i = 0; i < 3; i++) { // ���̰� 0�̻� 120������ ��� �н�

		printf("%d��° ���: ", i + 1);
			scanf("%s %d %c", &human[i].name, &human[i].age, &human[i].sex);
		while ((human[i].age < 0) || (human[i].age > 120)) {

			printf("�Էµ� ���� Ȯ�� \n");
			printf("%d��° ���: ", i + 1);

			scanf("%s %d %c", &human[i].name, &human[i].age, &human[i].sex);
		}
	}
	
	printf("1. ���̼�  2. �̸���? ");
	scanf("%d", &what);

	if (what== 1) { // ���̼� ������ ���
		if ((human[0].age) > (human[1].age)) 
			change(&human[0], &human[1]);

		if ((human[1].age) > (human[2].age)) 
			change(&human[1], &human[2]);

		if ((human[0].age) > (human[1].age))
			change(&human[0], &human[1]);
}
	else { // �̸��� ������ ���, strcmp�� �̿��Ѵ�. 
		if (strcmp(human[0].name, human[1].name) == 1) 
			change(&human[0], &human[1]);

		if (strcmp(human[1].name, human[2].name) == 1) 
			change(&human[1], &human[2]);

		if (strcmp(human[0].name, human[1].name) == 1) 
			change(&human[0], &human[1]);
}

	   	for (i = 0; i <= 2; i++) {

		if ((human[i].sex == 'm') || (human[i].sex == 'M')) 
			printf("%s�� �����̰� %d���̴�. \n", human[i].name, human[i].age);

		else
			printf("%s�� �����̰� %d���̴�. \n", human[i].name, human[i].age);

		}
	system("pause");
	return 0;
}
