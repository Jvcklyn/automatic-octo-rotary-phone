/* 
���ϸ�: practice01.c
������: ��ȣ��
���α׷� ����: ���� ���� ���� ������ �� ���ϱ�
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int korean = 70; // ���� ������ ������ int�� ����
	int english = 80; // ���� ������ ������ int�� ����
	int math = 90; // ���� ������ ������ int�� ����

	int result=korean+english+math; // ���� �������� ���� ������ int�� ����

	printf("���� : %d, ���� : %d, ���� : %d \n", korean, english, math); // �� ������ ���� ���
	printf("���� : %d\n", result); // ���� �������� �� ���
	
	system("pause");

	return 0;
}