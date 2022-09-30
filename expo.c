// Universidad de Colima - Facultad de Ingeniería Electromecánica
// Ingeniería en Software 3er Semestre
// Ximena Manzo Castrejón
// Evaluación Primera Parcial: Problema I. Exponenciación Entera.

#include<stdio.h>

long int potencia(long int a, long int b){
    if(b==0){
        return 1;
    }else{
        return (a * potencia(a, b-1));
    }
}

void main(){
    printf("\n");
    long int a=0, b=0;

    printf("Ingresa un numero: ");
    scanf("%ld", &a);
    printf("Ingresa su potencia: ");
    scanf("%ld", &b);

    printf("%ld elevado a %ld es = %ld",a,b,potencia(a,b));

    

    printf("\n\n");
}