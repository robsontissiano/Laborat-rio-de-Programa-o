# Laboratório de Programação

### Requisitos do trabalho_ponteiros

1. int my_strcmp( char *lhs, char *rhs ); 

  Essa função compara duas strings segundo sua ordem alfabética e retorna um inteiro. Se esse inteiro for negativo, é
porque a primeira string é menor que a segunda. Se retornar um inteiro positivo, é porque a segunda string é maior que a segunda. Se retornar 0, é porque as strings são idênticas.


2. char * my_strchr( char *str, char ch );

    Retorna um ponteiro para a localização em que o caractere 'ch' aparece pela primeira vez na string apontada por *str,
ou NULL se não encontrar.


3. char * my_strstr( char* str, char* substr ); 

   Retorna um ponteiro que indica a primeira ocorrência da string 'substr' na string 'str'.

4. char * my_strcat( char *dest, char *src );

    Concatena a string 'src' ao final da string 'dest'.


5. Desenvolver uma função para realizar a quebra de uma String em diversas Strings menores, de acordo com um caractere separador (token) fornecido. Esta função deverá receber uma string e um token e deverá retornar para a main um vetor de ponteiros contendo em cada ponteiro a parte da string quebrada.


Exemplo:


String de entrada: Hoje#o#dia#esta#chuvoso!


Vetor de ponteiros retornado: 


vet[0] -> Hoje


vet[1] -> o


vet[2] -> dia


vet[3] -> esta 


vet[4] -> chuvoso!


A função deve ser sem retorno (void), ou seja, alguns dos parâmetros deverão utilizar passagem por referência.


Ex. de protótipo:


void my_str_token(token, frase, palavras, ... );


onde:

> token - é o caractere a ser utilizado para a quebra;


> frase - é a frase a ser quebrada;


> palavras - é o parâmetro que terá todas as palavras "quebradas"/encontradas na frase; 
