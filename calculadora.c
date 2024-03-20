#include <stdio.h>
#include <stdlib.h>

void menu();

void soma()
{
float valor1, valor2, result;
printf("Digite o primeiro valor:");
scanf("%f",&valor1);
printf("Digite o segundo valor: ");
scanf("%f",&valor2);
result = valor1 + valor2;
printf("%f",result);
system("pause");
system("cls");
menu();
}

//subtração
void subtracao(){
float valor1, valor2, result;
printf("Digite o primeiro valor:");
scanf("%f",&valor1);
printf("Digite o segundo valor: ");
scanf("%f",&valor2);
result = valor1 - valor2;
printf("%f",result);
system("pause");
system("cls");
menu();
}

void menu(){

    int escolha;

    printf("\nEscolha qual conta vc ira usar");
    printf("\tAdição");
    printf("\tSubtracao");
    printf("\nOperacao: ");
    scanf("%d",&escolha);

    switch (escolha)
    {
    case 1:
        soma();
        break;
    
    case 2:
        subtracao();
        break;

     default: // caso nao se digite nenhum do case disponoveis execute
            printf("\nComando invalido, tente novamente!\n\n"); //msg
            system ("pause"); //pausa
            system ("cls"); //limpa
            menu(); //volta pro menu inicial
            break; //termina funcao
    }

}

int main()
{
    menu();
    system("pause");
    return 0;
}
