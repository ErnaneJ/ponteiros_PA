# Questão 11

- `aloha[2] = value;` Válido, atribui ao terceiro elemento do array de float aloha o valor presente em value;
- `scanf("%f", &aloha);` Válido, armazena na primeira posição de aloha o float digitado pelo usuário;
- `aloha = value";` Inválido, erro de sintaxe ("). Desconsiderando o erro de sintaxe ainda seria inválido pois aloha é um vetor;
- `printf("%f", aloha);` Inválido, pois aloha retornará a posição na memória do 1o elemento do vetor e o printf espera que seja um dado do tipo float;
- `coisas[4][4] = aloha[3];` Válido, armazena quarto item (posição 3) do vetor aloha na quarta linha e quarta coluna da matriz bidimencional coisas;
- `coisas[5] = aloha;` Válido, o ponteiro coisas[5] receberá a o endereço do primeiro elemento do vetor aloha; 
- `pf = value;` Inválido, pf é um ponteiro e espera receber um endereço e não um dado do tipo float;
- `pf = aloha;` Válido, pf receberá o endereço do primeiro elemento do vetor aloha.