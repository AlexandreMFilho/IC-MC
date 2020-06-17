# IC-MC

O algoritmo marching cubes ele leva em consideração os valores de cada aresta 
Por exemplo

Com um cubo, com suas arestas ja analisadas e polarizadas, temos as 14 possibilidades. Mas essa possibilidade ao meu ver é intermediária, pois  a imagem formada por ela será sempre a mesma (a menos que eu tenha entendido errado).
Meu questionamento é se os valores das arestas são levados em consideração além de ser positivo ou negativo, pois digamos que queremos o valor 7 e que em uma das arestas (A1) do cubo esteja o valor 10 e na outra (A2) o valor 2, sabemos que no intermediário existe um valor 7, mas em outro cubo na mesma configuração o valor de A1 seja 15 e de A2 seja 5, logo a configuração da imagem formada será a mesma com uma diferença de onde a intersecção está.

Olhando em apenas 1dimensão
(Ex 1 (A1) x--i----x (A2)
(Ex 2 (A1) x-----i-x (A2)

Olhando em 2 dimensões

Ex (
(A1) X-------i--X (A2)
        -----------i
        i-----------
(A3) X-------i--X (A4)

A1 = 16
A2 = 6
A3 = 4
A4 = 10
Valor desejado  8

Perceba que apenas de em um dimensão so termos 2 possibilidades ( ou tem intersecção ou não) essas possibilidade possuem variação de acordo com os valores das arestas, pois a posição da intersecção varia no eixo x.
No exemplo bidimensional, se analisarmos as arestas unidimensionalmente (isto é, uma linha entre duas arestas, observarmos  um pouco dessa variação. 
)

*Estudar Interpolação.

