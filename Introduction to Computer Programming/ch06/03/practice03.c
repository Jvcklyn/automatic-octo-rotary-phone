/*
파일명: practice03.c
만든이: 성호림
프로그램 내용: 투표 결과를 입력 받아서 당선인을 출력하기
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int vote[10], count[8] = { 0 }; // 입력을 저장하는 vote와 후보별 득표수 저장하는 count
	int i, j; // 반복문 변수 
	int winner; // 당선자를 저장할 변수
		
	for (i = 0; i < 10; i++) { // 10명의 투표 받기
		printf("%02d. 투표하세요.", i + 1);
		scanf("%d", &vote[i]);
		for (j = 1; j <= 8; j++) { // 만약 vote배열에 저장된 결과와 번호가 같다면
			if (vote[i] == j)
			{
				count[j - 1]++; // 득표수 +1
				break;
			}
		}
	}
	winner = 0;
	for (j = 0; j < 8; j++) { // 당선자 정하기
		if (count[j] > count[winner]) // 득표의 최댓값 갱신 될 떄마다 당선자 갱신
			winner = j;
	}
	if (count[winner] < 5) // 득표가 과반이 아닐 경우 
		printf("There's no winner.\n"); // 당선자 없음
	else 
		printf("Number %d is the winner \n", winner + 1); // 득표 과반인 경우 당선자 출력

	system("pause");
}

