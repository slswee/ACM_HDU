#include <stdio.h>

int main(int argc, char *argv[]) {

	double n;
	double output;
	while (scanf("%lf", &n) != EOF) {
		if (n>= 0) {
			output = n;
		} else {
			output = -n;
		}

		printf("%.2f\n", output);
	}


}
