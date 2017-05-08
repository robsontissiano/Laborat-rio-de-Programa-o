#include<stdio.h>
#include<stdlib.h>
void alterar(int ** y, int ** x){

int a=30; 
int b=50;

**y = a;
**x = b;

//Nesta função, modificar o valor de a para 30 e o de b para 50;
//Logo após, modificar os apontamentos de ptr_1 e ptr_2, para que os mesmos passem a
//apontar para b e a, respectivamente.
}

int main(){

int a = 10;
int b = 20;

int * ptr_1 = &a;
int * ptr_2 = &b;

alterar(&ptr_1, &ptr_2);

printf ("O valor de A e': %d \n", a);
printf ("O valor de B e': %d \n", b);


//Aqui, chamar a funcao alterar
//Aqui, imprimir os valores de a e b usando os ponteiros
}