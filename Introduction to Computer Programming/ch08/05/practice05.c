/*
파일명: practice05.c
만든이: 성호림
프로그램 내용: 배열의 값을 직접 입력하여 배열을 출력하고 다시 배열을 서로 바꾸어 출력하기 
*/

#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr1, int *arr2) { // 배열을 출력하는 함수
	int i;
	printf("first: ");
	for (i = 0; i < 5; i++) { // 배열 1 반복문으로 출력
		printf("%d ", arr1[i]);
		}
	printf("\nsecond: ");
	for (i = 0; i < 5; i++) { // 배열 2 반복문으로 출력
		printf("%d ", arr2[i]);
	}
}

void swap_array(int* arr1, int* arr2) { // 배열을 서로 바꾸는 함수
	int i, temp[5]; // 임시로 배열 값을 저장할 temp 배열
	for (i = 0; i < 5; i++) { 
		temp[i] = arr1[i]; // arr1 값을 temp에 저장
		arr1[i] = arr2[i]; // arr2 값을 arr1에 저장
		arr2[i] = temp[i]; // temp 값을 arr2에 저장, 결과적으로 arr1과 arr2 배열이 바뀜
	}
	
}

void main() {
	int arr1[5], arr2[5], i;

	printf("Enter the contents of first array.\n");
	for (i = 0; i < 5; i++) { // 배열 1 입력받기
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter the contents of second array.\n");
	for (i = 0; i < 5; i++) { // 배열 2 입력받기
		scanf("%d", &arr2[i]);
	}

	printf("Before swapping,\n");
	print_array(arr1, arr2); // 배열 출력
	printf("\n");

	printf("After swapping,\n");
	swap_array(arr1, arr2); // 배열 서로 바꾸기
	print_array(arr1, arr2); // 배열 출력
	printf("\n");

	system("pause");
}