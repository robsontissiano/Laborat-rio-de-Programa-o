#include<stdio.h>
#include<stdlib.h>

//Definicao da arvore
typedef struct elemento{
	int codigo;
	char descricao;
	float valor;
	struct elemento * esq; 
	struct elemento * dir;

}elemento;


 //Inclusao de um nodo na arvore
void inserir_elemento(nodo ** raiz, nodo * novo){
   if (*raiz == NULL){
     *raiz = novo;
   }else{
     if(novo->info < (*raiz)->info){
        inserir_elemento(&(*raiz)->esquerda, novo);
     }else if (novo->info > (*raiz)->info){
        inserir_elemento(&(*raiz)->direita, novo);
     }
   }
}

void monta_menu(){

   printf("\t#######################################################\n");
   printf("\t##               Operacoes sobre Arvores             ##\n");
   printf("\t#######################################################\n");
   printf("\t##    1 # Incluir Elemento                           ##\n");
   printf("\t##    2 # Exibir                                     ##\n");
   printf("\t##    3 # Pesquisar                                  ##\n");
   printf("\t##    4 # Exibir os filhos do elemento               ##\n");
   printf("\t##    5 # Exibir valor total dos filhos do elemento  ##\n");
   printf("\t#######################################################\n\n\n");
   printf("\tInforme a sua opcao: ");
}


int main(int argc, char const *argv[])
{

	int op = 1;
  	char info;

  	nodo * arv = NULL;
  	nodo * pesquisa = NULL;
  	int altura_nivel;
  	char tp_elemento;


  	do{

  		monta_menu();
		scanf("%d", &op);
    	system("clear");
    	fflush(stdin);

  		switch(op){

  			case 1:

  					


  			break;

  			case 2:




  			break;



  		}

  	}while(op != 0)
  	




}


