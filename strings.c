/*
Registro de usuario y validacion de contraseña
Lian Alexei Araiza Sahagun 11/11/2025 Ing. Informatica
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char usuario[30];
    char pass1[20], pass2[20];

        printf("Usuario: ");
        scanf("%s", usuario);

        printf("Contrase%ca: ", 164);
        scanf("%s", pass1);

        printf("Confirmar contrase%ca: ", 164);
        scanf("%s", pass2);

    if(strcmp(pass1, pass2) == 0 && strlen(pass1) >= 5)
        printf("Registro exitoso, bienvenido %s!\n", usuario);
    else if(strlen(pass1) < 5)
        printf("Error: la contrase%ca debe tener al menos 5 caracteres.\n", 164);
    else
        printf("Error: las contrase%cas no coinciden.\n", 164);

    return 0;
}
