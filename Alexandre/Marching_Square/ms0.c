#include<stdio.h>
#include<string.h>
#include<stdlib.h>
##include "lib.h"
int main(){
  int dimensao[2];
  //função que Lê um arquivo texto e armazena em arrays a dimensão e a matriz.
  //Asssumido que houve a leitura e todos os dados foram obtidos sem problemas
  //float * = Pega_dados(fp);

  float larg = dimensão[0],alt = dimensao[1],matriz[larg][alt],polarizada[larg][alt], *pmatriz,*ppol;

  pmatriz = matriz;
  ppol = polariza;

  for(i=0;i<dimensão[0]*dimensão[1];i++){

    polariza(dimensão[1],i,alfa,*pmatriz,**ppol);
    configura(float *matriz,i);
  }

}
