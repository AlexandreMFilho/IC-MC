/*
Essa versão foi pensada para tratar quadrado a quadrado um a um, possibilitando
a execução em serie das funções quadrado a quadrado.

precisaremos das dimensoes da matriz(apenas a coluna), o quadrado que vamos
 mexer, o valor alfa e as matrizes(a ser lida e a ser preenchida).

 Agora o programa que chama a função polariza (E AS DEMAIS TBM) deve iterar
 linhas*colunas(QUANTIDADE DE QUADRADOS) vezes. [TODOS NO MSM FOR QUE BELO PADRÃO]

  Com a quantidade de colunas e o quadrado atual conseguimos saber onde ele está localizado.
  Tome uma matriz 10x5 como exemplo. (Não vou desenhar n kkkkk)
  e estamos no quadrado 17

  se pegarmos 17 e dividirmos pelo numero de colunas (5) -> 17/5 = 3 essa ainda não é o indice correto pois
   essa conta leva que o primeiro elemento é o 1, mas nossa matriz é o 0. Entao é só subtrairmos 1 que achamos
    o indice correto.

  e agora se pegarmos o resto -> 17%5 = 2 esse ainda não é o indice correto pois essa conta leva que o primeiro
  elemento é o 1, mas nossa matriz é o 0. Entao é só subtrairmos 1 que achamos o indice correto.
  MAS CUIDADO, SE O RESTO FOR 0(ZERO) AO SUBTRAIR VAI FICAR -1 E NÃO PODEMOS DEIXAR Q ISSO ACONTEÇA,
  ENTÃO CRIEI UMA CONDIÇÃO PARA QUANDO O VALOR DO RESTO FOR MAIOR QUE 0(ZERO) ELE SUBTRAIA 1 DA VARIAVEL.

  O MESMO VALE PRA LINHA.

  Por fim, numa matriz 10x5 o quadrado de numero 17(ordem esquerda pra direita e de cima para baixo) está na
  linha índice 2 coluna índice 1
*/
//---------------------------------------------------------------------------------------------------------
/* leitura de quadrado por quadrado
   void polariza(int nline,int ncol, float alfa,float **matriz){
      float aux[4];
      for(int i =0;i<nline;i++){
                for(int j=0;j<ncol;j++){

                    aux[0]=matriz[i][j];
                    aux[1]=matriz[i+1][j];
                    aux[2]=matriz[i+1][j+1];
                    aux[3]=matriz[i][j+1];
                    printf("%f\t%f\t%f\t%f\n",aux[0],aux[1],aux[2],aux[3]);

                 }

      }
}
*/
 //---------------------------------------------------------------------------------------------------------

//Prototipo
void polariza(int,int,float,float *,float **);

//Main

//Itera quantidade de quadrados da matriz apenas
for(int i =0;i<linha*coluna;i++){
  polariza(coluna,i,alfa,vertices,polarizada);
  //pode chamar as outras funções também
}

//implementacao

void polariza(int qtcoluna,int nquadrado,float alfa,float *matriz,float **ppol){
      int lin,col,;
      lin = nquadrado/qtcoluna;
      col = nquadrado%qtcoluna;

      //Correção do cálculo para achar os índices.
      if(lin > 0){
        lin=lin-1;
      }
      if(col > 0){
        col=col-1;
      }

      //Polarizaçao dos vertices         (ordem)
      //----------------------------00    1
      if(matriz[lin][col] < alfa){
        *ppol[nquadrado][0] = 0;
      }else{
        *ppol[nquadrado][0] = 1;
      }
      //----------------------------10    2
      if(matriz[lin+1][col] < alfa){             //   1-------4
        *ppol[nquadrado][1] = 0;                 //   |       |
      }else{                                     //   |       |
        *ppol[nquadrado][1] = 1;                 //   2-------3
      }
      //----------------------------11   3
      if(matriz[lin+1][col+1] < alfa){
        *ppol[nquadrado][2] = 0;
      }else{
        *ppol[nquadrado][2] = 1;
      }
      //----------------------------01   4
      if(matriz[lin][col+1] < alfa){
        *ppol[nquadrado][3] = 0;
      }else{
        *ppol[nquadrado][3] = 1;
      }
}
