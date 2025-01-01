#include <stdio.h>
int main()
{
    int choice;
    do{
    printf("Welcome to simple Calculator\n");
    printf("Choose any one of the Operation given below\n");
    printf("\n1. Addition");
    printf("\n2. Substration");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");//it will keep on asking you till you enter exit and leave 
    
    printf("\nPlease enter your choice i.e the number : ");
    scanf("%d", &choice);

switch(choice){
    
        case 1: {
    int i;
    int n;
        printf("Enter no of numbers you want to add : ");
        scanf("%d", &n);
    int array[n]; // number of number you want to add
    int sum = 0;
        
        for(i=1; i<= n; i++){
            printf("Enter the number %d: ", i);
            scanf("%d",  &array[i]);
            
            
        
        }
        for(int i = 1; i <= n; i++) {
        sum += array[i];}

            printf("The Addition of the given numbers is : %d\n", sum);
             break;
        
        }
    }
    

    }
    while(choice != 7);

    

        
    
    return 0; 
}