#include <stdio.h>

int difficulty; 
int  main()
{
    while(1){
    printf("\nSelect difficulty level ");
    printf("\n1.Human");
    printf("\n2.God (Imposible to win)");
    printf("\n Enter your choice:");
    scanf("%d", &difficulty); 


if(difficulty!= 1 && difficulty!= 2){
    printf("\nIncorrect choice enter (1/2)!!");

}else{
    break; 
}
}

}
