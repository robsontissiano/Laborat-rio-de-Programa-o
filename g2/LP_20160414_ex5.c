#include<stdio.h>
#include<stdlib.h>

int teste(int i){
    printf("A -> %d \n", i);
    if(i > 0){
        teste(i - 1);
    }
    printf("D -> %d \n", i);
}

int main(){
    int v = 5;
    int soma = teste(v);
    printf("%d \n", soma);
}
