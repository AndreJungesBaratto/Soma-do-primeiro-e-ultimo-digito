//Aluno: Andr� Junges Baratto
//N� USP: 13731107

#include <stdio.h>  //usaremos a biblioteca stdio.h para ler e escrever dados

void main(){    //usarei o void para n�o precisar do "return 0"
    int n, u, p, soma;  //aqui s�o definidas as vari�veis inteiras: n�mero "n", �ltimo d�gito "u", primeiro d�gito "p" e soma "soma"

    printf("Digite um numero:\n");  //essas duas linhas serve, para que o usu�rio defina o n�mero que deseja utilizar
    scanf("%d", &n);

        u= n-(n/10)*10;     // aqui encontra-se o �ltimo d�gito do n�mero.
        //Como n � inteiro, ao diviridmos por 10 obteremos um valor tamb�m inteiro, dessa forma, o �ltimo d�gito � exclu�do ao multiplicarmos novamente por 10.

        do{     //aqui encontraremos o primeiro d�gito
            n=n/10;     //dividiremos n por 10 e continuaremos o loop enquanto o resultado for maior que 10.
        }while(n>10);   //Pelo fato de "n" ser inteiro, as v�rgulas ser�o desconsideradas, nos dando como resposta apenas o primeiro d�gito.
        p=n;    //o primeiro d�gito ser� o valor de n ap�s sair do loop

        soma=u+p;   //aqui, somamos o primeiro com o �ltimo d�gito.
        printf("a soma do primeiro com o ultimo digito eh: %d\n", soma);    //finalmente, printamos o valor pedido.
}
