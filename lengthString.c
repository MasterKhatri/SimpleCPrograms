#include <stdio.h>
void main() 
{
	int count = 0, i = 0;
	char name[20];
	printf("Enter string\n");
	gets(name);
	while (name[i] != '\0') {
		count++;
		i++;
	}
	printf("%d", count);
}
	
