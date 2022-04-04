# Questão 09

- Suposições:
  - `x` é um **vetor** de **4 elementos**;
  - Declarado da forma `TIPO x[4];`;
  - `x` está armazenado no endereço de memória `4092` (ou seja, o endereço de `x[0]`);
  - Sobre os tipos na máquina em questão:
    - `char` ocupa **1 byte**;
    - `int` ocupa **2 bytes**;
    - `float` ocupa **4 bytes**;
    - `double` ocupa **8 bytes**;

1. Qual valor de `x+1` se:
   - `x` for declarado como `char`? **4093**
   - `x` for declarado como `int`? **4092**
   - `x` for declarado como `float`? **4096**
   - `x` for declarado como `double`? **4100**

2. Qual valor de `x+2` se:
   - `x` for declarado como `char`? **4094**
   - `x` for declarado como `int`? **4096**
   - `x` for declarado como `float`? **4100**
   - `x` for declarado como `double`? **4108**

3. Qual valor de `x+3` se:
   - `x` for declarado como `char`? **4095**
   - `x` for declarado como `int`? **4098**
   - `x` for declarado como `float`? **4104**
   - `x` for declarado como `double`? **4116**