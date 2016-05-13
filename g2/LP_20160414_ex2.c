#include<stdio.h>
#include<stdlib.h>

int teste(int v[], int s){
    printf("%d \n",sizeof(v));
    int soma = 0;
    s--;
    for(;s >= 0; s--){
        soma += v[s];
    }
    return soma;
}

int main(){

    int v[] = {1,1,1,1,2,1,1,1};
    printf("%d \n",sizeof(v));
    printf("%d \n", teste(v, 8));
}
