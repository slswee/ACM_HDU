//2005.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
  
	const int each_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year=0, month=0, date=0, days=0;	
  
	while (scanf("%d/%d/%d", &year, &month, &date) != EOF) {
    days = 0;
    
    for (int i=1; i<=month; i++) {
      days += each_month[i-1];
    }
    days += date;
    
		//check if the year is a leap year
    if(((year%4==0)&&(year%100!=0))||(year%400==0)) {
      if (month>2) {
        days++;
      }
    }
    
    printf("%d\n", days);
    
	} //end of outer while
  return 0;
}
