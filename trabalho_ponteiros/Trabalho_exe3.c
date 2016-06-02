#include<stdio.h>
#include<stdlib.h>

char * my_strstr(char * str, char * ubstr){

	while (*str != '\0')
	{
		if(*str == ch){
			return str;

		}
		++str;
	}
	return NULL;
}

int main(){

	char a[] = "alexandre@email.com";
	char b[] = "dre";
	printf("%s\n", my_strstr(a,b));


}