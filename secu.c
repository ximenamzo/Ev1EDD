// Universidad de Colima - Facultad de Ingeniería Electromecánica
// Ingeniería en Software 3er Semestre
// Ximena Manzo Castrejón
// Evaluación Primera Parcial: Problema II. Secuencia Geométrica.

#include<stdio.h>

long int pot(long int a, long int b){
    if(b==0){
        return 1;
    }else{
        return (a * pot(a, b-1));
    }
}

int elementos(int n){
    if(n==1){
        return 5;
    }else{
        return (5 * pot(3, n-1));
    }
}

void main(){
    printf("\n");
    long int n=0;

    printf("        n  1  2   3   4      \n");
    printf("Secuencia {5, 15, 45, 135...}\n");
    printf("Ingresa la cantidad de elementos que quieres imprimir: ");
    scanf("%ld", &n);
    for(int i=1; i<=n; i++){
        printf("%ld ", elementos(i));
    }

    printf("\n\n");
}