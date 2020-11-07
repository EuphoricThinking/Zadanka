#include <stdio.h>

int main(void) {
	char wzorek[8] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'a'};
	int dopasowania[8];
	int j = 0;
	for (int i = 1; i < 8; i++)  {
		if (wzorek[j] == wzorek[i]) {
			printf("tak j = %d i = %d\n", j, i); 
			dopasowania[i] = j+1;
			j++;
		} else {
			printf("nie j = %d i = %d\n", j, i);
			if (j != 0 ) {
				j = dopasowania[i-1];
				if (i != 7) {
					i--;
				}
			} else {
				dopasowania[i] = 0;
			}
		}
	}
	for (int i = 0; i<8; i++) {
		printf("%d", dopasowania[i]);
	}
	printf("\n");
	return 0;
}
