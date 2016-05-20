#include<stdio.h>
#include<stdlib.h>

char * my_strchr( char *str, char ch ){

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

	printf("%s\n", my_strchr(a,'@'));


}