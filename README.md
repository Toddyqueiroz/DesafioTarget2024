# Desafio Técnico - Resolução de Questões em C

Este projeto contém a resolução de cinco questões técnicas, abordando conceitos de lógica, manipulação de strings, sequência de Fibonacci, entre outros. Cada questão foi organizada em uma pasta específica, contendo seu próprio `main.c` ou arquivos de resposta para facilitar a execução e compreensão individual do código.

## Questoes

Técnica:

1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?

4) Descubra a lógica e complete o próximo elemento:
a) 1, 3, 5, 7, ___
b) 2, 4, 8, 16, 32, 64, ____
c) 0, 1, 4, 9, 16, 25, 36, ____
d) 4, 16, 36, 64, ____
e) 1, 1, 2, 3, 5, 8, ____
f) 2,10, 12, 16, 17, 18, 19, ____


5) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada? 

## Estrutura do Projeto

### Questões e Resoluções

1. **Questão 1 - Fibonacci**  
   - Diretório: `questao1/`
   - Arquivo: `questao1/main.c`
   - Entrada: Número informado no código ou via `scanf`.
   - Saída: Indica se o número está na sequência de Fibonacci.

2. **Questão 2 - Contagem de Letras em String**  
   - Diretório: `questao2/`
   - Arquivo: `questao2/main.c`
   - Entrada: String informada no código ou via `scanf`.
   - Saída: Quantidade de vezes que "a" aparece na string.

3. **Questão 3 - Somatório**  
   - Resposta: `questao3.txt`

4. **Questão 4 - Sequências Lógicas**  
   - Resposta: `questao4.txt`

5. **Questão 5 - Interruptores e Lâmpadas**  
   - Resposta: `questao5.txt`

## Como Executar

Para compilar e executar as questões 1 e 2 em Code::Blocks:

1. Clone o repositório:
    ```bash
    git clone https://github.com/Toddyqueiroz/DesafioTarget2024
    ```
   
2. No Code::Blocks, vá em **File > Open** e selecione o arquivo `main.c` da questão que deseja compilar, dentro do diretório respectivo (por exemplo, `questao1/main.c`).

3. Compile e execute o arquivo diretamente pelo Code::Blocks ou, caso prefira o terminal, use:
    ```bash
    cd questao1
    gcc main.c -o questao1
    ./questao1
    ```

## Resultados e Considerações

- **Questão 1**: Verifica se o número está na sequência de Fibonacci.
- **Questão 2**: Conta a letra "a" em uma string.
- **Questão 3**: Resposta disponível no arquivo `questao3.txt`.
- **Questão 4**: Resposta disponível no arquivo `questao4.txt`.
- **Questão 5**: Resposta disponível no arquivo `questao5.txt`.

