/* 
파일명: practice01.c
만든이: 성호림
프로그램 내용: 국어 영어 수학 점수의 합 구하기
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int korean = 70; // 국어 점수를 저장할 int형 변수
	int english = 80; // 영어 점수를 저장할 int형 변수
	int math = 90; // 수학 점수를 저장할 int형 변수

	int result=korean+english+math; // 과목 점수들의 합을 저장할 int형 변수

	printf("국어 : %d, 영어 : %d, 수학 : %d \n", korean, english, math); // 각 과목의 점수 출력
	printf("총점 : %d\n", result); // 과목 점수들의 합 출력
	
	system("pause");

	return 0;
}