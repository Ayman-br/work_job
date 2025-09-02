#include <stdio.h>


int main(){
       int n ;
       int counter = 0;
       printf("vous veuler entrer un nombre:\n");
       scanf("%d", &n);
       
       
       
       while (n >0)
       {
        n = n / 10 ;
        counter++;
       }

       printf("la count de ce nombre c'est : %d ", counter); 





    return 0;
}



