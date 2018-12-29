#include <stdio.h>
void main()
{
	int count = 0, i = 0, j=0;
	char name1[20], name2[20];
	printf("Enter string\n");
	gets(name1);
	while (name1[i] != '\0') {
		count++;
		i++;
	}
	count--;
	while (count>=0){
		name2[j] = name1[count];
		count--;
		j++;
		

	}
	name2[j] = '\0';
	printf("%s", name2);
}
