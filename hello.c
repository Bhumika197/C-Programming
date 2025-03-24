#include <stdio.h>
int main(){
    int n; 

    printf("Hello worldy");
    scanf("%d",&n);
    printf("%d\n", n );
    if(n>= 0){
        printf("the number is a Whole Number!\n");

    }else{
        printf("The Number is not a whole number");
    }
    return 0; 
}