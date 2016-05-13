#include<stdio.h>
#include<stdlib.h>

void teste(int * a){
    *a = *a + 2;
    printf("%d \n", *a);
}


int main(){
    int a = 2;
    teste(&a);
    printf("%d \n", a);
}
