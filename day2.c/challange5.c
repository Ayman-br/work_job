#include <stdio.h>
#include <stdlib.h>


int main(){
int n ;
 
int min;
printf("give me how many element u want\n");
scanf("%d",&n);



int element[n];
printf("give me the elements\n");
for(int i = 0; i < n; i++){
    scanf("%d", &element[i]);
}
 min = element[0];
for(int i = 1; i < n ; i++){
if(element[i] < min){
      min = element[i]; 
}
}
printf("the minimum element is\n%d", min);


   return 0;
}