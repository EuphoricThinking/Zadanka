#include <stdio.h>

int main(void) {
//	char wzor[8] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'a'};
//	int dopasowania[8];
//	char wzor[9] = {'a', 'a', 'b', 'a', 'a', 'b', 'a', 'a', 'a'};
//	int dopasowania[9];
	char wzor[6] = {'a', 'b', 'c', 'a', 'b', 'y'};
	int dopasowania[6];
	char tekst[12] = {'a', 'b', 'x', 'a', 'b', 'c', 'a', 'b', 'c', 'a', 'b', 'y'};
	dopasowania[0] = 0;
	int i = 0;
	int j = 1;
	while (j<6) {
		if (wzor[i] == wzor[j]) {
		//	printf("j %d / i%d", j, i);
			dopasowania[j] = i+1;
			i++;
			j++;
		} else {
			if (i!=0) {
				i = dopasowania[i-1];
			} else {
				dopasowania[j] = 0;
				j++;
			}
		}
	}
	for (int i = 0; i<6; i++) {
		printf("%d\n", dopasowania[i]);
	}
	i = 0;
	j = 0;
	while ((i<12) || (j != 6)) {
		if (tekst[i] == wzor[j]) {
			i++;
			j++;
		} else {
			if (j != 0) {
				j = dopasowania[j - 1];
			} else {
				i++;
			}
		}
	}
	if (j == 6) {
		printf("sukces\n");
	} else {
		printf("jeszcze nie\n");
	}
	return 0;
}
