/*
파일명: practice06.c
만든이: 성호림
프로그램 내용: 음수를 입력 받기 이전까지의 데이터를 배열에 저장하고 함수를 호출하여 입력받은 정수의 최대, 최소 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

void min_max(int* arr, int* min, int* max, int length) { // 함수 정의
	int i;
	*min = *(arr); // 최대 최소에 배열의 첫 값 저장
	*max = *(arr); 

	for (i = 0; i < length; i++) {
		if (*min > * (arr + i)) // 최솟값보다 배열의 값이 더 작으면
			*min = *(arr + i); // 배열의 값을 최솟값에 저장
		if (*max < *(arr + i)) // 최댓값보다 배열의 값이 더 크면
			*max = *(arr + i); // 배열의 값을 최댓값에 저장
	}
}
void main() {
	int arr[100] = { 0 }, i = 0, min = 0, max = 0, length, num; // 100개 이상의 수는 입력받지 않는다고 가정한다. 
	
	printf("Enter a sequence of positive integers.\n");
	while(1) { // 음수를 받을 때까지 반복
		scanf("%d", &num);
		if (num < 0)
			break;
		else
			arr[i++] = num; // 음수가 아니라면 받은 수를 배열에 저장 후 i에 1을 더함
	}
	length = i - 1; // min_max 함수의 반복 횟수를 정하는 length
	min_max(arr, &min, &max, length); // 함수 호출
	printf("Minimum is %d, Maximum is %d.\n", min, max);
	
	system("pause");
}