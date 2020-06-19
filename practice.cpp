#include <stdio.h>
#include <math.h>
#include "Dot.h"
#define pi 3.14


int main() {
	int N, angle;
	float dot;
	float point[2] = { 0 };

	printf("Enter number of points: ");
	scanf_s("%d", &N);
	printf("Enter angle of turn: ");
	scanf_s("%d", &angle);

	for (int i = 0; i < N; i++) {
		printf("Enter coordinates of x: ");
		scanf_s("%f", &point[0]);
		printf("Enter coordinates of y: ");
		scanf_s("%f", &point[1]);
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