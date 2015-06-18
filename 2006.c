#include <stdio.h>

int main(int argc, char* argv[]) {
	
	int n = 0;
	int number = 0;
	int odd_product = 1;
	
	while (scanf("%d",&n) != EOF) {
		number = n;
		odd_product = 1;
		for (int i=0; i<number; i++){
			scanf("%d",&n);
			if (n%2 == 1) {
				odd_product *= n;
			}
		} //end of for		
			
	printf("%d\n", odd_product);

	}
}
