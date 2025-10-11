// Hecho por Lian Alexei Araiza Sahagun
// 10 de octubre del 2025
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    printf("La direccion de la variable a es: %d\n", &a);

    int b[3];
    printf("La direccion del arreglo b es: %d\n", &b);
    printf("La direccion de b[0] es: %d\n", &b[0]);
    printf("La direccion de b[1] es: %d\n", &b[1]);
    printf("La direccion de b[2] es: %d\n", &b[2]);
    printf("\n");

    int g[3][3] = {
        {0, 1, 2},
        {10, 11, 12},
        {20, 21, 22}
    };
    printf("La direccion del arreglo g es: %d\n", &g);
    printf("La direccion de g[0][0] es: %d\n", &g[0][0]);
    printf("\n");


    printf("La matriz completa como gato es asi:\n");

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }

    return 0;
}
