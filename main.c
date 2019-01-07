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
	printf("�׽�Ʈ ���� �߰�\n");
	printf("����� ������ �Է��� ���Դϱ�?\n");
	scanf_s("%d", &dPeoNum);
	if ((dPeoNum<1) || (dPeoNum>100)){
		goto start;
	}
	for (int i = 0; i < dPeoNum; i++){
		printf("[%3d]��° ����� ������ �Է����ּ���.\n", i+1);
		printf("�̸�: ");
		scanf_s("%s", PeoInfo[i].name, sizeof(PeoInfo[i].name)+1);
		printf("��ȭ��ȣ: ");
		scanf_s("%s", PeoInfo[i].number, sizeof(PeoInfo[i].number)+1);
		printf("����: ");
		scanf_s("%d", &(PeoInfo[i].age), sizeof(PeoInfo[i].age));
	}

	phone_sort(PeoInfo, dPeoNum);

	printf("-----------------------------------\n");
	printf("     �̸�          ��ȭ��ȣ  ����\n");
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
