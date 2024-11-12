/*Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro media aritmetica.*/

#include <stdio.h>


int main(){
    int num1, num2;
    float media;

    printf("Calcoliamo la media di due numeri\n");

    printf("Inserisci un numero: "); 
    scanf("%d", &num1);
    printf("Inserisci un numero:");
    scanf("%d", &num2);

    media = (float)(num1 + num2) / 2;

    printf("La media dei due numeri è: %.2f\n", media);
}