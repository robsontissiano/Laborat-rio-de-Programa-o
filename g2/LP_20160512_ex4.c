#include<stdio.h>
#include<stdlib.h>
int main(){
    char nome[100];
    int i;

    printf("Informe um nome: \n");
    gets(nome);

    for (i = 0; i < 100; i++){
        if(nome[i] != '\0'){
            printf("%c\n", nome[i]);
        }else{
            break;
        }
    }

}
