//Lian Alexei Araiza Sahagun
//3 de Octubre de 2025
#include <stdio.h>
#include <stdlib.h>

// Declarar el arreglo de partidos como global para poder modificarlo
int a[6] = {1, 2, 0, 0, 3, 2};

// Prototipos de las funciones
void ver_todos_resultados();
void ver_partido_especifico();
void modificar_todos_resultados();
void modificar_un_resultado();
void calcular_promedio();

int main()
{
    int opc;
    do {
        printf("\n--- MENU DE PARTIDOS ---\n");
        printf("1. Ver todos los resultados de los partidos\n");
        printf("2. Ver resultado de un partido especifico\n");
        printf("3. Modificar todos los resultados\n");
        printf("4. Modificar un resultado especifico\n");
        printf("5. Ver el promedio de los partidos\n");
        printf("6. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opc);

        switch(opc) {
            case 1:
                ver_todos_resultados();
                break;
            case 2:
                ver_partido_especifico();
                break;
            case 3:
                modificar_todos_resultados();
                break;
            case 4:
                modificar_un_resultado();
                break;
            case 5:
                calcular_promedio();
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida, intentalo de nuevo\n");
        }
    } while (opc != 6);

    return 0;
}

//Funcion para ver todos los resultados
void ver_todos_resultados()
{
    printf("\nResultados de todos los partidos\n");
    for (int i = 0; i < 6; ++i) {
        printf("El marcador del juego %d es %d\n", i+1, a[i]);
    }
}

//Funcion para ver un partido especifico
void ver_partido_especifico()
{
    int partido;
    printf("\nQue numero de partido quieres ver? (1-6): ");
    scanf("%d", &partido);

    if (partido > 0 && partido <= 6) {
        printf("El marcador del juego %d es %d\n", partido, a[partido - 1]);
    } else {
        printf("Numero de partido invalido.\n");
    }
}

//Funcion para modificar todos los resultados
void modificar_todos_resultados()
{
    printf("\nModificar todos los resultados\n");
    for (int i = 0; i < 6; i++) {
        printf("Ingresa el nuevo marcador para el partido %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Resultados actualizados.\n");
    ver_todos_resultados(); // Muestra los resultados actualizados
}

//Funcion para modificar un resultado especifico
void modificar_un_resultado()
{
    int partido;
    printf("\nQue numero de partido quieres modificar? (1-6): ");
    scanf("%d", &partido);

    if (partido > 0 && partido <= 6) {
        printf("El resultado actual del partido %d es %d\n", partido, a[partido - 1]);
        printf("Ingresa el nuevo marcador para el partido %d: ", partido);
        scanf("%d", &a[partido - 1]);
        printf("Resultado actualizado.\n");
        ver_todos_resultados();
    } else {
        printf("Numero de partido invalido.\n");
    }
}

//Funcion para calcular y mostrar el promedio
void calcular_promedio()
{
    int suma = 0;
    float promedio;
    for (int i = 0; i < 6; ++i) {
        suma += a[i];
    }
    promedio = (float)suma / 6;
    printf("\nEl promedio de los marcadores es: %.2f\n", promedio);
}
