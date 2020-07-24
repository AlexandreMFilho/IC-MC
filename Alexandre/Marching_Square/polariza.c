/*"vetores" é a matriz com os valores gerados.
"polarizada" é a matriz com os vertices polarizados.
"ppol" é a passagem por referencia de "polarizada" na funcao.
*/
/*
polarizada[i*j][4];
cada linha será um quadrado da matriz e as colunas seus valores seguindo a ordem 00->10->11->01;
ex:
polarizada[4][4]
[00,10,11,01] primeiro quadrado
[01,11,12,02] segundo     ''
[10,20,21,11] terceiro    ''
[11,21,22,12] quarto      ''

(Mas os valores serão apenas 1 ou 0[positivo ou negativo])

00-------01-------02
|         |         |
|         |         |
|         |         |
10-------11--------12
|         |         |
|         |         |
|         |         |
20-------21--------22
*/


//Prototipo
void polariza(int,int,float,float **, float **);

//corpo da main
float *vetores[x+1][y+1],,polarizada[i*j][4], **ppol, alfa;
ppol = polarizada[0][0];
polariza(linha,coluna,alfa,vetores,ppol);

//implementacao da funcao
void polariza(int linha,int coluna,float alfa,float *vetores,float **ppol){
  int i,j;

  for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
      /*
          00-------01
          |         |
          |         |
          |         |
          10-------11
      */
      //----------------------------00
      if(matriz[i][j] < alfa){
        *ppol[i][j] = 0;
      }else{
        *ppol[i][j] = 1;
      }
      //----------------------------10
      if(matriz[i+1][j] < alfa){
        *ppol[i+1][j] = 0;
      }else{
        *ppol[i+1][j] = 1;
      }
      //----------------------------11
      if(matriz[i+1][j+1] < alfa){
        *ppol[i+1][j+1] = 0;
      }else{
        *ppol[i+1][j+1] = 1;
      }
      //----------------------------01
      if(matriz[i][j+1] < alfa){
        *ppol[i][j+1] = 0;
      }else{
        *ppol[i][j+1] = 1;
      }
    }
  }
}
