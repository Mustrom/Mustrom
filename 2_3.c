#include <stdio.h>

int main(void) 
{ 	
	int Day,Month,Swap;
	Day=05;
	Month=03;
	Swap=Day;
	Day=Month;
	Month=Swap;
	printf("%d.%d",Day,Month);
	return 0;
}