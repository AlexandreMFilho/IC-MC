#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

//Prototipos das Funcoes
void cria_arq(FILE *, char *);
void preencher(FILE *,char *);
void num_vertices(int*);

//--------------------------------------------------------


//Main
int main(){
  int i = 0;
  FILE * fp;
  char nome[80];
  char numero[10];
  printf("Digite o nome do arquivo a ser gerado:\n");
  scanf("%s",nome);
  cria_arq(fp,nome);
  preencher(fp,nome);
}
//--------------------------------------------------------


//Funcao que cria o arquivo
void cria_arq(FILE * fp, char * a){
  fp = fopen(a,"w");
  fflush(fp);
  fclose(fp);
}

//Funcao que preenche o arquivo com os valores dos vertices
void preencher(FILE * fp,char * nome){
  int num;
  float val, vertices[4];
  srand(time(NULL));
  fp = fopen(nome,"a");
  fprintf(fp,"\nGerando 50 sequencias de 4  valores aleatorios:\n\n V1\tV2\tV3\tv4\n\n");
  for(int i=0;i<50;i++){
    num_vertices(&num);

    //preenche um vetor com os valores(todos positivos) dos vertices
    for(int j=0;j<4;j++){
       val=rand()%1000000;
       vertices[j]=val/1000000;
     }

     //Apenas os vertices de indice impar (1 e 3) serão negativos
     vertices[1]=vertices[1]*-1;
     vertices[3]=vertices[3]*-1;

    //le o vetor já preenchido
     for(int k=0;k<4;k++){
       fprintf(fp,"%f\t",vertices[k]);
     }
       fprintf(fp,"\n");
   }
}


void num_vertices(int* n){
	*n=rand()%4;
}
