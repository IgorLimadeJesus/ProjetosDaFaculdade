#include <stdio.h>

int main(){

float nota1, nota2, media;

printf("Digite uma nota: ");
scanf("%f",&nota1);

printf("Digite outra nota: ");
scanf("%f",&nota2);

media = (nota1+nota2)/2;

if (media >= 5.5)
{
    printf("\nAprovado");
    printf("\nSua media: %f",media);
}
else
{
    printf("\nReprovado");
    printf("\nSua media e: %f",media);
}


}