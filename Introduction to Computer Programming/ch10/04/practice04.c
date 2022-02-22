/*
만든이: 성호림
파일명: practice04.c
프로그램 내용: 3명의 이름, 나이, 성별을 키보드로 입력 받고 나이 혹은 성별로 오름차순 정렬하기
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct { // typedef로 구조체 human 정의
	int age;
	char sex;
	char name[64];
}human;

void change(human* human1, human* human2) { // 두 구조체를 맞바꿔주는 함수
	human temp; // 임시로 활용할 빈 구조체
	temp=*human1;
	*human1=*human2;
	*human2=temp;
}

int main(void) {
	int i, what;
	human human[3];
	for (i = 0; i < 3; i++) { // 나이가 0이상 120이하일 경우 패스

		printf("%d번째 사람: ", i + 1);
			scanf("%s %d %c", &human[i].name, &human[i].age, &human[i].sex);
		while ((human[i].age < 0) || (human[i].age > 120)) {

			printf("입력된 나이 확인 \n");
			printf("%d번째 사람: ", i + 1);

			scanf("%s %d %c", &human[i].name, &human[i].age, &human[i].sex);
		}
	}
	
	printf("1. 나이순  2. 이름순? ");
	scanf("%d", &what);

	if (what== 1) { // 나이순 정렬일 경우
		if ((human[0].age) > (human[1].age)) 
			change(&human[0], &human[1]);

		if ((human[1].age) > (human[2].age)) 
			change(&human[1], &human[2]);

		if ((human[0].age) > (human[1].age))
			change(&human[0], &human[1]);
}
	else { // 이름순 정렬일 경우, strcmp를 이용한다. 
		if (strcmp(human[0].name, human[1].name) == 1) 
			change(&human[0], &human[1]);

		if (strcmp(human[1].name, human[2].name) == 1) 
			change(&human[1], &human[2]);

		if (strcmp(human[0].name, human[1].name) == 1) 
			change(&human[0], &human[1]);
}

	   	for (i = 0; i <= 2; i++) {

		if ((human[i].sex == 'm') || (human[i].sex == 'M')) 
			printf("%s는 남자이고 %d살이다. \n", human[i].name, human[i].age);

		else
			printf("%s는 여자이고 %d살이다. \n", human[i].name, human[i].age);

		}
	system("pause");
	return 0;
}
