#include <stdio.h>
void main()
{
	int i = 0;
	char str1[20], str2[20];
	printf("Enter string 1\n");
	gets(str1);
	printf("Enter string 2\n");
	gets(str2);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		printf("Strings are equal\n");
	else 
		printf("Not equal");
}
