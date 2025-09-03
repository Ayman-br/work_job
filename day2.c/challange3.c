#include <stdio.h>
#include <stdlib.h>


int main(){

int element[7]={};
int somme = 0;
printf("vous vueler enter les element ");

for(int i = 0; i < 7; i++){
    scanf("%d", &element[i]);
}
for (int i = 0; i < 7 ; i++)
{
    somme += element[i] ;
}

printf("la somme de c'est element et:%d", somme);

    return 0 ;
}