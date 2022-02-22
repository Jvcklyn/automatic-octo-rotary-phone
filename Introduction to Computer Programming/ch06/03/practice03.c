/*
���ϸ�: practice03.c
������: ��ȣ��
���α׷� ����: ��ǥ ����� �Է� �޾Ƽ� �缱���� ����ϱ�
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int vote[10], count[8] = { 0 }; // �Է��� �����ϴ� vote�� �ĺ��� ��ǥ�� �����ϴ� count
	int i, j; // �ݺ��� ���� 
	int winner; // �缱�ڸ� ������ ����
		
	for (i = 0; i < 10; i++) { // 10���� ��ǥ �ޱ�
		printf("%02d. ��ǥ�ϼ���.", i + 1);
		scanf("%d", &vote[i]);
		for (j = 1; j <= 8; j++) { // ���� vote�迭�� ����� ����� ��ȣ�� ���ٸ�
			if (vote[i] == j)
			{
				count[j - 1]++; // ��ǥ�� +1
				break;
			}
		}
	}
	winner = 0;
	for (j = 0; j < 8; j++) { // �缱�� ���ϱ�
		if (count[j] > count[winner]) // ��ǥ�� �ִ� ���� �� ������ �缱�� ����
			winner = j;
	}
	if (count[winner] < 5) // ��ǥ�� ������ �ƴ� ��� 
		printf("There's no winner.\n"); // �缱�� ����
	else 
		printf("Number %d is the winner \n", winner + 1); // ��ǥ ������ ��� �缱�� ���

	system("pause");
}

