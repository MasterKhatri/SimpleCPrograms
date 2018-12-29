#include <stdio.h>
#include <malloc.h>
#include <string.h>
char* removeExtraSpaces(char *str);
int countWords(char *str);
void main()
{
	char a[100];
	int noOfWords;
	printf("Enter a string\n");
	gets(a);
	//This function prints the length of a string
	printf("String length: %d\n", strlen(a));
	strcpy(a, removeExtraSpaces(a)); //copy space free string
	//display length of space free string
	printf("String length without extra spaces: %d\n", strlen(a));
	noOfWords = countWords(a); //return value of counted words in new var
	printf("Number of Words: %d\n", noOfWords);
}
char* removeExtraSpaces(char *str) {
	char *p; //This string will be used to copy new string
	int i=0, j=0;
	p = malloc(strlen(str)+1);
	while( *(str+i) ) {
	//This loop removes extra spaces from start and back
		while( *(str+i) == ' ' )
	       		i++;
		while( *(str+i) != ' ' && *(str+i) != '\0' ) {
			*(p+j) = *(str+i);
			i++;
			j++;
		 }
		if( *(str+i) == '\0' && *(p+j-1) == ' ' )
	       		j--;
		*(p+j) = *(str+i);
		j++;	
		
	}
	return p;

}
int countWords(char *str) {
	int i=0, count=0;
	while( *(str+i) ) {
		if( *(str+i)  == ' ')
			count++; //here count is used to count spaces in the sentence after removing extra spaces in the string
		i++;
	}
	return (count+1);
}
