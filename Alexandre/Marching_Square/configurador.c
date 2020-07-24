/*
"mat" é matriz polarizada que servirá de parâmetro para checar qual das 16
possibilidades de configuracao o quadrado receberá.
"linha" é literalmente a linha da matriz que a funcao irá olhar.
Essa funcao está sendo feita pensando que ela será chamada toda vez para
configurar 1 (um) único quadrado por vez, possibilitando que outras etapas
ocorram posteriormente e que no programa final seja feita somente uma única
varredura na matriz.
Em suma ela recebe como parâmetro a matriz de saída da funcao polarizadora e
a linha a qual o quadrado será visto.
Eu pensei na etapa que chama essa funçao em algo como isso:
for(int i=0;i<linha*coluna;i++){
  configura(polarizada[i][0]);
}
*linha * coluna é exatamente a quantidade de quadrados da matriz.
*/
configura(float ** mat,int linha){

  /*Aqui eu usei essa lógica para transformar os indices da matriz em um valor inteiro
que possa ser utilizado em switch case, acredito que a execução e leitura(nossa) de 16 ifs
seria cansativa demais.
basicamente os vertices do quadrado possuem valores que somados formam sua contagem binaria
e ao msm tempo sua configuração.
  1-------1000
  |         |
  |         |
  |         |
  10-------100
então cada case possui um valor inteiro que se lido em binário ou hexadecimal se traduz a uma
contagem de 0 a 15.|         |
ex
na matriz polarizada possui :
polarizada
[0,0,0,0]
[0,1,0,0]
...
[1,0,0,1]
o programa irá fazer o calculo e irá encontra os valores :
0
10
...
1001
que se encaixará em nos cases
a imagem formada se encontra no trello, irei adicionar uma nova, a imagem fornecida pela
professora contava de forma diferente da abordagem que criamos inicialmente, as imagens
permanescem as mesmas com apenas uma rotação, abaixo uma ilustração da alteracao:
Nossa ordem de leitura              Ordem da imagem proposta pela professora
  1-------4                          4-------3
  |       |                          |       |
  |       |                          |       |
  |       |                          |       |
  2-------3                          1-------2
  O formato de saída dessa função foi pensado para ser da seguinte maneira:
  [Numero da configuração,arestas intersectadas em ordem fixa (1,2,3,4)...]
                    4
              o----------o
              |          |
            1 |          | 3
              |          |
              o----------o
                    2
  portanto
  ["D1200"] significa que
  é a configuração D  (13 em decimal e 1011 em binario)
  onde apenas as arestas 1 e 2 foram intersectadas.Uma vez que o vetor que armazena a
  configuração em binário armazena na ordem contrária da orientada para leitura dos
  vértices.
  A principio eu acho que a saída deve ser gerada através de um arquivo  composto
  dessas informações, mas isso ainda será discutido e abordado posteriormente, por
  enquanto será um printf e nao um fprintf.
  */
  int var = mat[linha][0]*1+mat[linha][1]*10+mat[linha][2]*100+mat[linha][3]*1000;

  switch var:
  case 0{
    printf("00000");
  }case 1{
    printf("11004"); //configuracao 1, arestas intersectadas 1 e 4 (as que não são valem 0)
  }case 10{
    printf("21200");
  }case 11{
    printf("30204");
  }case 100{
    printf("40230");
  }case 101{
    printf("51234");
  }case 110{
    printf("61030");
  }case 111{
    printf("70034");
  }case 1000{
    printf("80034");
  }case 1001{
    printf("91030");
  }case 1010{
    printf("A1234");
  }case 1011{
    printf("B0230");
  }case 1100{
    printf("C0204");
  }case 1101{
    printf("D1200");
  }case 1110{
    printf("E1004");
  }case 1111{
    printf("F0000");
  }
}
