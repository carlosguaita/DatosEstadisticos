#include <stdio.h>

void ordenarArreglo(float numeros[], float numordenados[], 
                    float *min, float *max, float *mediana, 
                    int tamano) {
    // Copiamos los elementos del arreglo original a numordenados
    for (int i = 0; i < tamano; i++) {
        numordenados[i] = numeros[i];
    }

    // Ordenamos el arreglo numordenados usando el algoritmo de burbuja
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (numordenados[j] > numordenados[j + 1]) {
                // Intercambiamos los valores si están en el orden incorrecto
                float temp = numordenados[j];
                numordenados[j] = numordenados[j + 1];
                numordenados[j + 1] = temp;
            }
        }
    }
    *min=numordenados[0];
    *max=numordenados[tamano];
    *mediana=numordenados[5];
}

void mediaymoda(float numeros[], float *media, int *moda){
    float suma=0;
    int c=0, m=0;
    for (int i = 0; i < 10; i++)
    {
        suma=suma+numeros[i];
        for (int j = 0; j < 10; j++)
        {
            if(numeros[i]==numeros[j]){
                c++;
            }
        }
        if(c>m){
            m=c;
        }
        c=0;
    }
    *media=suma/10;
    *moda=m;
}