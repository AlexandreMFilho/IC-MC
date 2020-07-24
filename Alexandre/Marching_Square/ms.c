#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  int i = 0, j=0;
  FILE *matriz,*saida;
  char name_matriz[100],linha[1024], *separador = NULL;
  int dimensao[2];

  //Confere a abertura do arquivo, possibilitando outra tentativa caso caminho Invalido.
  do{
  printf("Digite o nome da matriz a ser lida:");
  scanf("%s", name_matriz);
  if(!(matriz = fopen(name_matriz,"r"))){
    printf("Nome de arquivo inválido...\nTente novamente.\n");
  }
}while(matriz == NULL);

  //Pegar dimensao
  fgets(linha,100,matriz);
  separador = strtok(linha,"x");
  while (separador != NULL){
    dimensao[i]= atoi(separador);
    separador = strtok(NULL," ");
    i++;
  }
  //cria a matriz que ele leu do arquivo
  float new_matriz[dimensao[0]][dimensao[1]];

  //itera quantidade de linhas
  for(i=0;i<dimensao[0];i++){
    fgets(linha,100,matriz);

    separador = strtok(linha," ,\t");
    //itera quantidade de colunas
    for(j=0;j<dimensao[1] && separador ==NULL;j++){
      new_matriz[i][j]= atof(separador);
      separador = strtok(NULL," ,#\t");
      j++;
    }
  }
  printf("%dx%d\n", dimensao[0],dimensao[1]);
  //Debug, printar a matriz pra comparar
  for(i=0;i<dimensao[0]+1;i++){
    for(int j=0;j<dimensao[1]+1;j++){
      printf("%f\t",new_matriz[i][j]);
    }
    printf("\n");
  }

  // fflush(matriz);
	// fclose(matriz);
}
