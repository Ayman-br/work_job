#include <stdio.h>

int main() {
    int nombre ;
    int multipe ;
       printf("vous vueller enter un nombre\n" );
       scanf("%d",&nombre);
    for(int i = 1; i <= 10; i++){
        multipe = nombre * i ;


        printf("%d * %d = %d\n", nombre, i, multipe );
    }
    return 0;
}
