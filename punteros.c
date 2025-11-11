/*
Estadisticas de calificacion con punteros
Lian Alexei Araiza Sahagun Ing. Informatica 11/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

void calcularEstadisticas(float v[], int n, float *min, float *max, float *prom) {

    *min = v[0];
    *max = v[0];

    float suma = 0.0;

    for (int i = 0; i < n; i++) {

        suma += v[i];

        if (v[i] < *min) {
            *min = v[i];
        }

            if (v[i] > *max) {
                *max = v[i];
            }
        }

    *prom = suma / (float)n;
}

int main() {
    int n;
    float califs[10];
    float min, max, prom;

    printf("Proporciona cuantas calificaciones quieres (3-10): ");
    scanf("%d", &n);

        if (n < 3 || n > 10) {
            printf("Numero no valido, usare 3 \n");
            n = 3;
        }


        for (int i = 0; i < n; i++) {
        printf("Calificacion %d: ", i + 1);
        scanf("%f", &califs[i]);
    }

    calcularEstadisticas(califs, n, &min, &max, &prom);

    printf("Resultados\n");
    printf("Minima: %.2f\n", min);
    printf("Maxima: %.2f\n", max);
    printf("Promedio: %.2f\n", prom);

    return 0;
}
