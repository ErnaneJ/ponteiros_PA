# Questão 19

Ao pesquisar sobre o uso da biblioteca `libGC`, que implementa um coletor de lixo em C foi encontrado o [site](https://guix.gnu.org/packages/libgc-8.0.4/) do próprio [distribuidor](https://www.hboehm.info/gc/) onde demonstra um [exemplo de utilização](https://www.hboehm.info/gc/simple_example.html). O mesmo exemplo que utlizaremos para essa questão.

Antes de tudo verifique se existe alguma versão de compilador instalada em sua máquina. No meu caso utilizo a gcc. Portanto, execute:

```bash
$ gcc --version
# => gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
```

Após validar a existência do compilador, instale a **libgc**. Nos sistema linux isso é tão simples quanto:
```
$ sudo apt install libgc-dev
```

Agora sim estamos prontos para utiliza-lo. O exemplo dado em [hboehm](https://www.hboehm.info/gc/simple_example.html) está reescrito em [main.c](./main.c) com algumas simples alterações. Mas antes de executarmos podemos entender alguns pontos:

- É necessário, para utilização, o `gc.h` no inicio do programa que irá alocar memória por meio do coletor de lixo. Com ele obtemos algumas vantagens e mudanças de padrão como por exemplo:
  - Chamar `GC_MALLOC` onde chamaria `malloc`, isso inicializa a memória para zero como `calloc`;
  - E o principal ponto, não há necessidade de limpar explicitamente o resultado.
- Se um objeto não conterá ponteiros para o `heap` coletado como lixo e não precisar que ele seja inicializado, pode-se utilizar do `GC_MALLOC_ATOMIC`.
- Uma função `GC_FREE` é fornecida, mas não precisa ser utilizada. Para objetos muito pequenos, o programa terá um desempenho melhor se essa função não for utilizada, deixando assim o coletor realizar o seu trabalho.
- Uma função `GC_REALLOC` se comporta como a `realloc` padrão. Ela aloca memória livre de ponteiro não inicializado se o objeto original foi alocado dessa forma.

Outro ponto a se considerar é a necessidade de utilização da `GC_INIT` em algumas outras plataformas, como `Linux/x86`. Mesmo que não seja o caso é bom adicionar como boa prática já que não acarretará prejuízo algum.

Para executarmos o programa utilizando o garbage collector precisamos passar uma flag (`-lgc`) informando sua utilização:

```bash
$ gcc ./program_path.c -o ./program_path -lgc && ./program_path
```
Bom, com base no programa presente em [main.c](./main.c), obtemos o seguinte resultado de execução: 

```bash
Heap size = 65536
Heap size = 131072
Heap size = 131072
Heap size = 131072
Heap size = 131072
Heap size = 131072
Heap size = 131072
Heap size = 131072
Heap size = 131072
...
Heap size = 131072
```

Veja que o `heap`, retorna ao seu tamanho original após o coletor realizar o seu trabalho.