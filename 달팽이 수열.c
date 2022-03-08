#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	// Write your code here
	int arr[15][15] = {0,};
	int num = 1, x = 0, y = 0;
	int i,j,k;
	int z = 1;

	for (k = 0; k < input; k++) {
		arr[x][y] = num++;
		y += z;	
	}
	y -= 1;

	for (i = input - 1; i > 0; i--) {
		for (j = 0; j < i; ++j) {
			x += z;
			arr[x][y] = num++;		
		}
		z *= -1;
		for (k = 0; k < i; k++) {
			y += z;
			arr[x][y] = num++;
			
		}
	}

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

