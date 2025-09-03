#include <stdio.h>
#include <stdlib.h>


int main(){
int n ;
 
int max;
printf("give me how many element u want\n");
scanf("%d",&n);



int element  [n];
printf("give me the elements\n");
for(int i = 0; i < n; i++){
    scanf("%d", &element[i]);
}
 max = element[0];
for(int i = 1; i < n ; i++){
if(element[i] > max){
      max = element[i]; 
}
}
printf("the larget element is\n%d", max);


   return 0;
}