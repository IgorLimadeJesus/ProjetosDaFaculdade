#include <stdio.h>

int main(){

//Variaveis
float nota1, nota2, media;
int Freq;

printf("Digite uma nota: "); //recebe o valor e armazena na variavel nota1
scanf("%f",&nota1);

printf("Digite outra nota: "); //recebe o valor e armazena na variavel nota2
scanf("%f",&nota2);

printf("Digite sua frequencia");
scanf("%i",&Freq);

media = (nota1+nota2)/2; //faz o calculo da media

if (media >= 5.5 && Freq >= 75) //faz a verificação se está aprovado ou não
{
    printf("\nAprovado"); //mostra o resultado
    printf("\nSua media: %f",media);
    printf("Sua Frequencia e: %i", Freq);
}
else
{
    printf("\nReprovado");
    printf("\nSua media e: %f",media);
    printf("Sua Frequencia e: %i",Freq);
}


}