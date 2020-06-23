#include <stdio.h>
#include <math.h>
#include "Dot.h"
#define pi 3.14


int main() {
	int N, angle, res;
	float dot;
	float point[2] = { 0 };
	
	do {
		printf("Enter number of points: ");
		res = scanf_s("%d", &N);
		while (getchar() != '\n');
		if (res == 1) continue;
		else printf("%s", "Invalid input\n");
	} while (res != 1);
	
	do {
		printf("Enter angle of turn: ");
		res = scanf_s("%d", & angle);
		while (getchar() != '\n');
		if (res == 1) continue;
		else printf("%s", "Invalid input\n");
	} while (res != 1);

	for (int i = 0; i < N; i++) {
		do {
			printf("Enter coordinates of x: ");
			res = scanf_s("%f", &point[0]);
			while (getchar() != '\n');
			if (res == 1) continue;
			else printf("%s", "Invalid input\n");
		} while (res != 1);
		
		do {
			printf("Enter coordinates of y: ");
			res = scanf_s("%f", &point[1]);
			while (getchar() != '\n');
			if (res == 1) continue;
			else printf("%s", "Invalid input\n");
		} while (res != 1);


		dot = turn_of_point(angle, N, point);
	}
	return 0;
}

int turn_of_point(int angle, int N, float point[]) {
	float fi;
	float x, y;

	fi = angle * pi / 180;
	x = (cos(fi) * point[0]) + (-sin(fi) * point[1]);
	y = (sin(fi) * point[0]) + (cos(fi) * point[1]);

	printf("x' = %f\ny' = %f\n", x, y);
	
	return 0;
}