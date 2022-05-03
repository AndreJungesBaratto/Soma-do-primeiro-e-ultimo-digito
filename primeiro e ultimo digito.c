//Aluno: André Junges Baratto
//Nº USP: 13731107

#include <stdio.h>  //usaremos a biblioteca stdio.h para ler e escrever dados

void main(){    //usarei o void para não precisar do "return 0"
    int n, u, p, soma;  //aqui são definidas as variáveis inteiras: número "n", último dígito "u", primeiro dígito "p" e soma "soma"

    printf("Digite um numero:\n");  //essas duas linhas serve, para que o usuário defina o número que deseja utilizar
    scanf("%d", &n);

        u= n-(n/10)*10;     // aqui encontra-se o último dígito do número.
        //Como n é inteiro, ao diviridmos por 10 obteremos um valor também inteiro, dessa forma, o último dígito é excluído ao multiplicarmos novamente por 10.

        do{     //aqui encontraremos o primeiro dígito
            n=n/10;     //dividiremos n por 10 e continuaremos o loop enquanto o resultado for maior que 10.
        }while(n>10);   //Pelo fato de "n" ser inteiro, as vírgulas serão desconsideradas, nos dando como resposta apenas o primeiro dígito.
        p=n;    //o primeiro dígito será o valor de n após sair do loop

        soma=u+p;   //aqui, somamos o primeiro com o último dígito.
        printf("a soma do primeiro com o ultimo digito eh: %d\n", soma);    //finalmente, printamos o valor pedido.
}
