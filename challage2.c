#include <stdio.h>

int main() {
    int nombre;
    int multipe;

    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nombre); // <-- read user input

    for (int i = 1; i <= 10; i++) {
        multipe = nombre * i;
        printf("%d * %d = %d\n", nombre, i, multipe); // <-- add \n for new line
    }

    return 0;
}
