# Questãk 20

Com base no programa-exemplo da questão anterior (19), foi desenvolvido, com o mesmo garbage collector (libGc), uma aplicação que permite comparar o desempenho das funções tradicionais de alocação/liberação de memória da linguagem c (malloc/free) com as funções de gerenciamento de memória da biblioteca utilizada.

- Exemplo de saída ao executar:
  ```bash
  $ gcc ./questao_20/main.c -o ./questao_20/main -lgc && ./questao_20/main

  # Relatório de desempenho com alocação/liberação tradicional: 
  # - Clocks: 2.
  # - Tempo de execução: 0.000002s.
  # 
  # 
  # Relatório de desempenho com alocação/liberação utilizando libGC: 
  # - Clocks: 628.
  # - Tempo de execução: 0.000628s.
  ```