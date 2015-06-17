#include <stdio.h>
#include <math.h>

#define PI 3.1415927

int main (int argc, char *argv[]) {
	
	double radius, volume;
	while (scanf("%lf", &radius) != EOF) {
 //   printf("4/3 is %.3f\n", 4.0/3.0);
    volume = 4.0*1000/3.0*PI*pow(radius, 3)/1000;
		printf ("%.3f\n", volume);
	}
	return 0;
}
