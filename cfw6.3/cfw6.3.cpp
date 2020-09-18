#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x, a, d[2];
void sqa() {
	printf("Input Width : ");
	scanf("%d", &d[0]);
	printf("Input Length  : ");
	scanf("%d", &d[1]);
	x = d[1] * d[0];
	printf("Area is : %d", x);
}
void sq() {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			if ((i == 0 || i == x - 1) || (j == 0 || j == x - 1))printf("*");
			else printf(" ");
		}printf("\n");
	}

}

int main() {
	sqa();
	printf("\n");
	sq();
	return 0;
}
