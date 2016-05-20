#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int my_strcmp(char *lhs,char *rhs){


	while (*rhs != '\0' || *lhs != '\0')
	{
		if(*lhs > *rhs){
			return 1;

		}else if(*lhs < *rhs){

			return -1;
		}
		++rhs;
		++lhs;
	}


	
	return 0;

}

int main(){

	char a[] = "aa";
	char b[] = "azz";

	printf("%d\n",my_strcmp(a,b));


}