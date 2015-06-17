#include <stdio.h>

int main(int argc, char *argv[]) {

	int grade = 0;
	while (scanf("%d", &grade) != EOF) {
	
	if (grade >= 90 && grade <= 100) {
		printf ("A\n");
	} 
	else if (grade >= 80 && grade <= 89) {
		printf ("B\n");
	}
	else if (grade >= 70 && grade <= 79) {
		printf ("C\n");
	}
	else if (grade >= 60 && grade <= 69) {
		printf ("D\n");
	}
	else if (grade >= 0 && grade <= 59) {
		printf ("E\n");
	}
	else {
		printf ("Score is error!\n");
	}
	}

	return 0;

}
