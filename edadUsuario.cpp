#include <stdio.h>
#include <time.h>

time_t t = time(NULL);
struct tm tm = *localtime(&t);

int diaActual = tm.tm_mday;
int mesActual = tm.tm_mon + 1;
int añoActual = tm.tm_year + 1900;

int diaNacimiento;
int mesNacimiento;
int añoNacimiento;
int edad;

int main()
{
    printf("EDAD DEL USUARIO \n\n");

    printf("Ingresa tu día de nacimiento: ");
    scanf("%d", &diaNacimiento);
    
    printf("Ingresa tu mes de nacimiento: ");
    scanf("%d", &mesNacimiento);
    
    printf("Ingresa tu año de nacimiento: ");
    scanf("%d", &añoNacimiento);

    edad = añoActual - añoNacimiento;
    
    if(mesNacimiento > mesActual || (mesNacimiento == mesActual && diaNacimiento > diaActual))
    {
        edad--;
    }

    printf("Tu edad es: %d", edad);

    return 0;
}