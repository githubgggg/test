#include <stdio.h>

struct phone {
	char name[20];
	char number[20];
	int age;
};

void phone_sort(struct phone table[], int size);

void main(void)
{
	struct phone PeoInfo[100];
	int dPeoNum = 0;
start:
	printf("테스트 내용 추가\n");
	printf("몇명의 정보를 입력할 것입니까?\n");
	scanf_s("%d", &dPeoNum);
	if ((dPeoNum<1) || (dPeoNum>100)){
		goto start;
	}
	for (int i = 0; i < dPeoNum; i++){
		printf("[%3d]번째 사람의 정보를 입력해주세요.\n", i+1);
		printf("이름: ");
		scanf_s("%s", PeoInfo[i].name, sizeof(PeoInfo[i].name)+1);
		printf("전화번호: ");
		scanf_s("%s", PeoInfo[i].number, sizeof(PeoInfo[i].number)+1);
		printf("나이: ");
		scanf_s("%d", &(PeoInfo[i].age), sizeof(PeoInfo[i].age));
	}

	phone_sort(PeoInfo, dPeoNum);

	printf("-----------------------------------\n");
	printf("     이름          전화번호  나이\n");
	printf("-----------------------------------\n");
	for (int i = 0; i < dPeoNum; i++){
		printf("%10s %15s %5d\n", PeoInfo[i].name, PeoInfo[i].number, PeoInfo[i].age);
	}
	printf("-----------------------------------\n");
}

void phone_sort(struct phone table[], int size)
{
	struct phone temp;
	int i, j, k=0;
	for (i = 0; i < size - 1; i++){
		for (j = i + 1; j < size; j++){
			if (strcmp(table[i].name, table[j].name)>0){
							temp = table[i];
							table[i] = table[j];
							table[j] = temp;
			}
		}
	}
}
