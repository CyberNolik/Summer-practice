#include "Dot.h"

int turn_of_point(int angle, int N, float point[]) {
	float fi;
	float x, y;

	fi = angle * pi / 180;
	x = (cos(fi) * point[0]) + (-sin(fi) * point[1]);
	y = (sin(fi) * point[0]) + (cos(fi) * point[1]);

	printf("x' = %f\ny' = %f\n", x, y);
	
	return 0;
}
