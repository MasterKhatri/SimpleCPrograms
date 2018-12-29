#include <stdio.h>
void main()
{
	int i = 0;
	char name1[20], name2[20];
	printf("Enter string ");
	gets(name1);
	while (name1[i] != '\0') {
		name2[i]=name1[i];
		i++;
	}
	name2[i]='\0';
	printf("%s",name2);
}


