#include <stdio.h>

int main()
{
    int Idade;

    printf("Digite sua Idade: ");
    scanf("%i",&Idade);


    if (Idade >= 18)
    {
        printf("Voce esta apto para tirar habilitacao");
    }
    else
    {
        printf("Voce precisar ser ter 18 anos ou mais para tirar habilitacao");
    }
}