#include "Çì´õ.h"

void hevc(){
	extern struct CoreData TempAllocData[];
	//2017_03_24 HJROH
	int temp_tile = 0;

	for (int tile_id = 0; tile_id < TILES; tile_id++){
		for (int i = 0; i < TILES; i++){
			if (TempAllocData[i].tileNum == tile_id){
				temp_tile = i;
			}
		}
		printf("TempAllocData[%d].coreNum= %d\n", temp_tile,TempAllocData[temp_tile].coreNum);
		//CPU_SET(TempAllocData[temp_tile].coreNum, &CpuMask);
		//sched_setaffinity(0, sizeof(cpu_set_t), &CpuMask);
	}
	printf("\n\n");
}