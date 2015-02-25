#include <stdio.h>

int main(int argc, const char * argv[]) {

		int case_number=0;
		char a[1000]={'\0'};
		char b[1000]={'\0'};
		char sum[1001]={'\0'};
		char output[1001]={'\0'};
		int carry=0;
		int j=0;

		scanf("%d", &case_number);

		int i;
		for ( i=1; i<=case_number; i++) {
				scanf("%s %s", a, b); 

				int length_a = 0;

				while (a[length_a] != '\0') {
						++length_a;
				}

				int length_b = 0;

				while (b[length_b] != '\0') {
						++length_b;
				}

				int m=0;
				int n=0;

				while (length_a > 0 || length_b > 0 || carry == 1) {

						if(length_a > 0) {
								m = a[length_a-1] - '0'; 
						} else {
								m = 0;
                        }

						if (length_b > 0) {
								n = b[length_b-1] - '0';
						} else {
								n = 0;
						}

						int sum_bit = m + n + carry;

						if (sum_bit >= 10) {
								carry = 1;
                                sum_bit = sum_bit - 10;
						} else {
								carry = 0;
						}

						sum[j]=sum_bit + '0';

						if(length_a == 1 && length_b == 1 && carry == 1) {
								j++;
								sum[j] = 1;
						}

						j++;
						length_a--;
						length_b--;
				} 

			
				int k, d;
				for (k=j, d=0; k>=0; k--, d++){
						output[d]=sum[k-1];
				}

            if(i < case_number) {
                printf("Case %d:\n", i);
                printf("%s + %s = %s\n", a, b, output);
                printf("\n");
            } else {
                
                printf("Case %d:\n", i);
                printf("%s + %s = %s\n", a, b, output);
            }
            
				j=0;
		} 

		return 0;
}

