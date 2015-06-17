#include <stdio.h>
#include <math.h>
int main (int argc, char *argv[]) {
	
	double x1, y1, x2, y2;
	double distance;	
	while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF ) {
		distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		printf("%.2f\n", distance);

	}
  return 0;
}
