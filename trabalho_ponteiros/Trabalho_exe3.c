#include<stdio.h>
#include<stdlib.h>

char * my_strstr(char * str, char * substr){

	int soma_a = 0;
	int soma_b = 0;
	int i = 0;
	int flag = 0;

	while (*str != '\0')
	{
		flag = 0;

		if(*str == *substr){

			while(*substr != '\0'){

				if(*str != *substr){
					//printf("%s\n",str);

					flag = 1;
					break;
				}

				++str;
				++substr;
				soma_a++;
				soma_b++;

			}

			while (i < soma_a){
				--str;
				i++;
			}

			while (i < soma_b){
				--substr;
				i++;
			}

			if(flag == 0){
				return str;
			}

		}
		++str;
	}
	return NULL;
}

int main(){

	char a[] = "testando_outra_vez";
	char b[] = "_o";
	printf("%s\n", my_strstr(a,b));


}