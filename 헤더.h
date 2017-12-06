//2017_03_23 HJROH
//필요한 헤더들 모음
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//변경이 필요한 셋팅들///////////////////////////////////////////

//코어 셋팅
#define Bcore0 4
#define Bcore1 5
#define Lcore0 0
#define Lcore1 1
#define Lcore2 2
#define Lcore3 3

//각종 설정들
#define BcoreNum 2 //빅 코어의 수
#define LcoreNum 4 //리틀 코어의 수
#define BcoreCap 2 //빅 코어의 능력
#define LcoreCap 1 //리틀 코어의 능력

#define FRAMES 150
#define TILES 12
#define FILENAME "sample.csv" //PU값이 기록된 csv파일


//BOOL 관련 설정
typedef int BOOL;
#define TRUE 1
#define FALSE 0



//구조체들 및 선언
struct PuData {
	int tileNum;
	int puCount;
};
struct PuData Data[FRAMES][TILES]; //각 프레임, 타일별 Pu정보 저장소

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