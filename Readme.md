<h1 align="center">
   Programação Avançada - DCA1202 | Lista de Ponteiros em C.
</h1>

<div align="center">
  <a href="#-Projeto">Projeto</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-Execute">Execute</a>&nbsp;&nbsp;&nbsp;
</div>

<br>

## 💻 Projeto

Resolução das questões referentes à lista de exercício "`lista de ponteiros`" da primeira unidade do curso de **Programação Avançada** do Departamento de Engenharia de Computação (DCA) na Universidade Federal do Rio Grande do Norte (UFRN) no semestre de 2022.1. O objetivo da resoluição dessas questões é fixar os conteúdos ministrados na primeira unidade sobre a linguagem. Dentre eles: 
  - Introdução aos Ponteiros em C;
  - Caminhando na Memória;
  - Caminhando em Arrays;
  - Alocação dinamica de memória:
    - Vetores;
    - Matrizes;
  - Structs;
  - Ponteiros para funções;
  - Garbage Collector;
  - Análise de desempenho.  

  Acesse [aqui](https://github.com/ErnaneJ/ponteiros_PA/blob/master/docs/lista_ponteiros.pdf) o enunciado das questões.

  <details>
    <summary>📝 Resolução das questões:</summary>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_01">Questão 1;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_02">Questão 2;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_03">Questão 3;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_04">Questão 4;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_05">Questão 5;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_06">Questão 6;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_07">Questão 7;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_08">Questão 8;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_09">Questão 9;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_10">Questão10;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_11">Questão11;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_12">Questão12;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_13">Questão13;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_14">Questão14;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_15">Questão15;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_16">Questão16;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_17">Questão17;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_18">Questão18;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_19">Questão19;</a><br>
    📌 <a href="https://github.com/ErnaneJ/ponteiros_PA/tree/master/questao_20">Questão20.</a><br>
  </details>

### ⚙️ Execute

Para desenvolver as questões foi utilizado o compilador gcc:

```bash
$ gcc --version

# gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
# Copyright (C) 2019 Free Software Foundation, Inc.
# This is free software; see the source for copying conditions.  There is NO
# warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

- Seguindo essa linha de raciocíno, se estiver utilizando esse compilador apenas execute:
  ```bash
  $ gcc ./questao_x/main.c -o ./questao_x/main && ./questao_x/main
  ```
  no diretório principal do projeto para observar a saída do programa.

- Lembre-se de que para as questões que utilizam-se do garbage collector (libGc), questões 19 e 20, é necessário ter préviamente instalada a `libgc` em sua máquina.
  - No linux ubuntu, será tão simples quanto:
    ```
    $ sudo apt install libgc-dev
    ```
  - Ao executar, passe a flag -lgc corretamente:
    ```bash
    $ gcc ./questao_x/main.c -o ./questao_x/main -lgc && ./questao_x/main
    ```
---

<div align="center">
  Desenvolvido com ❤ por <a href="https://www.ernane.dev/">Ernane Ferreira</a>. 👋🏻<br/> Insentivado e idealizado no semestre 2022.1 pelo professor <a href="https://agostinhobritojr.github.io/">Agostinho Brito Junior</a>. <br> Universidade Federal do Rio Grande do Norte - Departamento de Engennharia da Computação.
</div>
