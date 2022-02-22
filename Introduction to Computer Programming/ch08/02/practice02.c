/*
파일명: practice02.c
만든이: 성호림
프로그램 내용: 배열의 평균을 구하도록 선언된 두 함수
*/

#include <stdio.h>
#include <stdlib.h>

double average_by_array(int p[], int length); // 배열 기호를 이용한 평균
double average_by_pointer(int *p, int length); // 포인터 산술 연산을 이용한 평균

int main() {
	int arr[5] = { 10, 40, 50, 20, 15 };

	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
	system("pause");
	return 0;
}

double average_by_array(int p[], int length) {
	int sum = 0;
	int i;
	for (i = 0; i < length; i++) 
		sum += p[i]; // 배열 기호를 이용하여 sum에 합 저장
	
	return sum / length; // 평균을 return
}


double average_by_pointer(int *p, int length) {
	int sum = 0;
	int i;
	for (i = 0; i < length; i++)
		sum += *(p + i); // 포인터 산술 연산을 이용하여 sum에 합 저장

	return sum / length; // 평균을 return
}