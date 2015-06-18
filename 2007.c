#include<stdio.h>

int main(int argc, char* argv[]){
	
	int m = 0;
	int n = 0;
	while(scanf("%d", &m) != EOF) {
		scanf("%d", &n);
		int square_sum = 0;
		int cube_sum = 0;
    
    int s = 0;
    int g = 0;
    if (m<=n) {
      s = m;
      g = n;
    } else {
      s = n;
      g = m;
    }
    
    
		for (int i=s; i<=g; i++) {
			if (i%2 == 0) {
				square_sum += i*i;
			} else {
				cube_sum += i*i*i; 
			}
		}
		printf("%d %d\n", square_sum, cube_sum);
	}
	return 0;
}
