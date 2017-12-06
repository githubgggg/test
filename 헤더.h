//2017_03_23 HJROH
//�ʿ��� ����� ����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//������ �ʿ��� ���õ�///////////////////////////////////////////

//�ھ� ����
#define Bcore0 4
#define Bcore1 5
#define Lcore0 0
#define Lcore1 1
#define Lcore2 2
#define Lcore3 3

//���� ������
#define BcoreNum 2 //�� �ھ��� ��
#define LcoreNum 4 //��Ʋ �ھ��� ��
#define BcoreCap 2 //�� �ھ��� �ɷ�
#define LcoreCap 1 //��Ʋ �ھ��� �ɷ�

#define FRAMES 150
#define TILES 12
#define FILENAME "sample.csv" //PU���� ��ϵ� csv����


//BOOL ���� ����
typedef int BOOL;
#define TRUE 1
#define FALSE 0



//����ü�� �� ����
struct PuData {
	int tileNum;
	int puCount;
};
struct PuData Data[FRAMES][TILES]; //�� ������, Ÿ�Ϻ� Pu���� �����

struct CoreData {
	int tileNum;
	int coreNum;
};
struct CoreData TempAllocData[TILES];

typedef struct{
	int tileNum;
	int puCount;
	double tileComplexity;
}tileInformation;
tileInformation tileInfo[TILES];