#include <stdio.h>
#include <math.h>
#define MAX 30

int main() {
	int map[MAX][MAX] = {0,};
	double start[2] = {2, 1}, end[2] = {29, 7};
	
	for(int i = 0, x = start[0], y = start[1]; !(x == end[0] && y == end[1]); i++, x = start[0] + (end[0] - start[0]) * (0.01 * i), y = start[1] + (end[1] - start[1]) * (0.01 * i)) {
		map[y][x] = 1; // 원점 평행이동 좌표 찍기 
		printf("(%d, %d)\n", x, y);
	} 
	
	for(int i = MAX - 1; i >= 0; i--) {
		for(int j = 0; j < MAX - 1; j++)
			if( map[i][j] == 0) 
				printf("□"); 
			else if( map[i][j] == 1) 
				printf("■");

		printf("\n");
	}
	
	return 0;
}
