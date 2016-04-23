#include <stdio.h>

int main(void)
{
	int Number,Days,Years,Months;
	printf("Vvedite kolichestvo dnei\n");
	scanf("%d", &Number);
	Years=Number/365;
	Months=(Number-365*Years)/30.416666667;
	Days=Number-365*Years-30.416666667*Months;
	printf("V vvedennih %d dnyah sodergitsya %d let, %d mesyacev, %d dnei\n",Number,Years,Months,Days);
	return 0;
}