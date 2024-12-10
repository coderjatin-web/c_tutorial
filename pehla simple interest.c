#include <stdio.h>

int main()
{
    float P,R,T;
    printf("Principle is :");// jatin
    scanf("%f",&P);
    printf("\nRate is :");// ne banaya ha
    scanf("%f",&R);
    printf("\n Time is :");// kesa ha
    scanf("%f",&T);
    float SI=P*R*T/100;
    printf("\nSIMPLE INTEREST IS :%f",SI);
    return 0;
}