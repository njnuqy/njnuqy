#include<stdio.h>

int DaysOfAYear(int y) {
	return(y % 4 == 0 && y % 400 != 0 || y % 100 == 0) ? 366 : 365;
}

int DaysOfAMonth(int y, int m) {
	int f[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) { 
		f[1] = 29; 
	}
	return f[m - 1];
}

int main() {
	int y0, m0, d0, y1, m1, d1;
	scanf("%d%d%d%d%d%d", &y0, &m0, &d0, &y1, &m1, &d1);
	int res = 0;
	for (int i = y0; i < y1; i++) {
		res += DaysOfAYear(i);
		}
	for (int i = 1; i < m0; i++) {
		d0 += DaysOfAMonth(y0,i);
	}
	for (int i = 1; i < m1; i++) {
		d1 += DaysOfAMonth(y1,i);
	}
	printf("%d", res + d1 - d0);
}