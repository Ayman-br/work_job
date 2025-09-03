#include <stdio.h>
#include <stdlib.h>


int main(){
int n ;
int moyyene ;
int somme;
printf("give me how many element u want");
scanf("%d",&n);
int element[n];
printf("give me the elements");
for(int i = 0; i < n; i++){
    scanf("%d", &element[i]);
}
for (int i = 0; i < n; i++)
{
    somme += element[i] ;
}

moyyene = somme / element[n];

printf("%d",moyyene);


    return 0;
}
