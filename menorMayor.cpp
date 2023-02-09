#include <stdio.h>

int primerN;
int segundoN;
int tercerN;
int comodin;
    
void primerCMP();
void segundoCMP();
void tercerCMP();

int main()
{
    printf("MENOR - MAYOR \n\n");
    
    printf("Ingresa el primer número \n");
    scanf("%d", &primerN);
    
    printf("Ingresa el segundo número \n");
    scanf("%d", &segundoN);
    
    printf("Ingresa el tercerN número \n");
    scanf("%d", &tercerN);
    
    
    primerCMP();
    segundoCMP();
    tercerCMP();
    
    
    printf("Número más bajo: %d \n", primerN);
    printf("Número más alto: %d \n", tercerN);
    
    return 0;
}

void primerCMP()
{
    if(primerN >= segundoN)
    {
        comodin = primerN;
        primerN = segundoN;
        segundoN = comodin;
    }
    else
    {
        comodin = 0;
    }
}

void segundoCMP()
{
    if(segundoN >= tercerN)
    {
       comodin = segundoN;
       segundoN = tercerN;
       tercerN = comodin;
    }
    else
    {
        comodin = 0;
    }
}

void tercerCMP()
{
    if(primerN >= segundoN)
    {
        comodin = primerN;
        primerN = segundoN;
        segundoN = comodin;
    }
    else
    {
        comodin = 0;
    }
}