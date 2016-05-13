#include<stdio.h>
#include<stdlib.h>


///Tornar Recursivo
void print_vet(int v[], int s){
    int i;
    for(i = 0;i < s; i++){
        printf("%d \n", v[i]);
    }
}

///Tornar Recursivo
int teste(int v[], int s){
    int soma = 0;
    s--;
    for(;s >= 0; s--){
        soma += v[s];
    }
    return soma;
}


int main(){
    int v[] = {1,1,1,1,2,1,1,1};
    printf("%d \n\n\n", teste(v, 8));
    print_vet(v, 8);
}

