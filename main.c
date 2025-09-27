#include <stdio.h>

int main() {
    // Aqui declaro mis 2 variables
    int calificacion, edad;

    // Solicitar la calificacion al usuario
    printf("Introduce la calificacion del alumno (0-100): ");
    scanf("%d", &calificacion);

    if (calificacion >= 0 && calificacion <= 100) {
        // Si la calificación es valida, solicitar la edad
        printf("Introduce la edad del alumno: ");
        scanf("%d", &edad);

        if (calificacion >= 60) {
            printf("\nFelicidades! El alumno ha aprobado con %d\n", calificacion);
            // Anidamiento para un mensaje extra segun la edad
            if (edad < 12) {
                printf("Es un alumno muy joven y prometedor.\n");
            } else if (edad >= 12 && edad <= 18) {
                printf("El estudiante esta en una excelente etapa de aprendizaje\n");
            } else {
                printf("Nunca es tarde para seguir aprendiendo.\n");
            }
        } else {
            printf("\nEl alumno ha reprobado con %d\n", calificacion);
            // Anidamiento para un mensaje de animo según la edad (para motivacion)
            if (edad < 18) {
                printf("Debe esforzarse mas en sus estudios\n");
            } else {
                printf("Aun hay oportunidades para mejorar\n");
            }
        }
    } else {
        // Mensaje de error
        printf("\nError: La calificacion introducida (%d) no es valida\n", calificacion);
        printf("Por favor, introduce un valor entre 0 y 100\n");
    }

    return 0;
}
