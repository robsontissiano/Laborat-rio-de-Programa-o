#include<stdio.h>
#include<stdlib.h>

char * my_strcat( char *dest, char *src ){

	char *retorno = (char *) malloc(21 * sizeof(*dest));

	int soma = 0;
	int i = 0;
	while (*dest != '\0')
	{
		*retorno = *dest;
		++dest;
		++retorno;
		soma++;
	}

	while (*src != '\0')
	{
		*retorno = *src;
		++src;
		++retorno;
		soma++;
	}

	while (i < soma)
	{
		--retorno;
		i++;
	}


	return retorno;
}

int main(){

	char a[] = "amanda";
	char b[] = " almeira";

	printf("%s\n", my_strcat(a,b));


}