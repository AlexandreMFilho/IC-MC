#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

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

    //le o vetor já pree
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
     vertices[1]=verticenchido
     for(int k=0;k<4;k++){
       fprintf(fp,"%f\t",vertices[k]);
     }
       fprintf(fp,"\n");
   }
}


void num_vertices(int* n){
	*n=rand()%4;
}


float asymptotic_decider(float* v,float a){
  float q1,q2,r,alfa;
  alfa = (a-v[0])/(v[1]-v[0]);
  q1 = (v[0]+(alfa*(v[1]-v[0])));
  q2 = (v[3]+(alfa*(v[2]-v[3])));
  r = (q1+(alfa*(q2-q1)));
  return r;
}
float marching_square(float* v){
  return ((v[0]+v[1]+v[2]+v[3])/4);
}
