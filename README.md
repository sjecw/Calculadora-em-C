# Calculadora em C

Trata-se de uma calculadora simples, escrita na linguagem C, que dispõe das quatro operações matemáticas básicas como adição, subtração, multiplicação e divisão entre dois números. O programa é executado em terminal e conta com um menu interativo. 
Feita com base no projeto do Neps Academy [Calculadora-Baseada-em-Texto-C](https://neps.academy/br/course/introducao-a-programacao/lesson/calculadora-baseada-em-texto-em-c).

## Pré-requisitos e Instalação
É preciso que o compilador `gcc` ou outro do tipo esteja instalado no sistema. Para instalar, siga as instruções resumidas abaixo (para Windows):

- Baixe o MinGW-w64 acessando a página oficial [MinGW-w64](https://www.mingw-w64.org). Instale de acordo com seu sistema.
- Abra o prompt de comando e digite `gcc --version` para verificar se o compilador foi instalado corretamente.

## Exemplo de uso e Demonstração
![menu_principal.png](https://github.com/sjecw/Calculadora-em-C/blob/main/images/menu_principal.png)

O menu principal da calculadora conta com uma interface simples que numera opções de 1 a 5. Caso o usuário escolha uma operação, será pedido os primeiro e segundo números para a execução do cálculo. 

![exemplo_operacao.png](https://github.com/sjecw/Calculadora-em-C/blob/main/images/exemplo_operacao.png)

Após imprimir o resultado, o programa perguntará se deseja-se fazer uma nova operação, caso sim, o usuário deve responder com 's' ou 'S' para prosseguir e o menu principal será mostrado novamente. Caso contrário, o programa imprimirá uma mensagem de despedida e será encerrado.

![opcao_sair.png](https://github.com/sjecw/Calculadora-em-C/blob/main/images/opcao_sair.png)

Se o usuário optar pela opção 5, "Sair", a mensagem irá aparecer novamente e o programa se encerrará.

![divisão_por_zero.png](https://github.com/sjecw/Calculadora-em-C/blob/main/images/divisao_por_zero.png)

O programa trata a divisão por zero como erro e solicitará os números novamente.


Outras observações importantes:
- O programa trata entradas inválidas como caracteres ou números fora das opções.
- A calculadora é capaz de realizar todas operações com números decimais, arredondando a resposta em até 6 casas.


## Estrutura

```
    Calculadora-em-C/  
    │── calculadora.c  
    │── LICENSE 
    │── README.md  
    │── images/  
    │   └── menu_principal.png
    │   └── exemplo_operacao.png
    │   └── opcao_sair.png
    |   └── divisao_por_zero.png
    
```

* `calculadora.c` contém todo o código do programa;
* `LICENSE` contém a licença do projeto;
* `README.md` contém informações sobre o projeto;
* `images` contém as mídias do projeto.

## Licença
O projeto sob a licença MIT, acesse o arquivo [LICENSE](https://github.com/sjecw/Calculadora-em-C/blob/main/LICENSE) desse repositório para saber mais.