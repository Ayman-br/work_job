#include <stdio.h>

int main() {
  int nombre ;
  int somme = 0;
  printf("vous veuler enter un nombre\n");
  scanf("%d", &nombre);
  for (int i = 1; i <= nombre; i++)
  {
    somme += i;
  }
  
printf("la somme de se nombre  %d et %d\n", nombre, somme);
    return 0;
}
