#include <stdio.h>
#include <string.h>
void upperLowerStr(char a[]);
void main()
{
	char name[10];
	printf("Enter the upper case string\n");
	fflush(stdin);
	scanf("%[^\n]s", &name); 
	upperLowerStr(name);
}
void upperLowerStr(char a[]){
	int i=0;
	while(a[i] != '\0'){
		if( a[i] != 32)
		a[i]+=32;
		i++;
	
	}
	a[i]='\0';
	printf("%s\n", a);
}

