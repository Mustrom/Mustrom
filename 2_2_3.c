#include <stdio.h>
#include <string.h>

int main() 
{
	char string[254];
	printf("Vvedite stroku: \n");
	gets(string);
	printf("V stroke %zd baitov\n",strlen(string));
	return 0;
}