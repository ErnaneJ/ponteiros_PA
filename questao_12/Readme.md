# Questão 12

Normalmente utilizamos os ponteiros para guardar endereço da memória onde está alocada determinada informação, como por exemplo de uma variável comum ou combinada, que ficam na memória virtual no segmento de dados. Porém, podemos utilizar os ponteiros para armazenar todo tipo de informação. Um dos tipos, nesse caso, é **onde determinada função está localizada na memória virtual**, dessa vez, no segmento de texto/código. Isso é conhecido como **ponteiros para funções**.

Para exemplificar, foi desenvolvido um programa que calcula a **Sequência de Fibonacci** a partir da entrada de um inteiro `N` que representa a quantidade de elementos da sequência que se deseja calcular e imprimir.