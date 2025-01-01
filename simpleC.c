#include <stdio.h>
#include <math.H>
int main()

{
    int choice;
    do{
    printf("\nWelcome to simple Calculator\n");
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

        case 2: {
            int N1, N2, result; 
        printf("Enter Number 1: ");
        scanf("%d", &N1);
        printf("Enter Number 2: ");
        scanf("%d", &N2);
        printf("The Answer is %d", N1-N2);
        break; 

        }

        case 3: {
            int i;
    int n;
        printf("Enter no of numbers you want to add : ");
        scanf("%d", &n);
    int array[n]; // number of number you want to add
    int product = 1;
        
        for(i=1; i<= n; i++){
            printf("Enter the number %d: ", i);
            scanf("%d",  &array[i]);
            
            
        
        }
        for(int i = 1; i <= n; i++) {
        product = product* array[i];}

            printf("The Addition of the given numbers is : %d\n", product);
             break;
        

        }

        case 4:{//division
         float N1, N2, result; 
        printf("Enter Number 1: ");
        scanf("%lf", &N1);
        printf("Enter Number 2: ");
        scanf("%lf", &N2);
        printf("The Answer is %lf", N1/N2);
        
            break; 
        }
        case 5:{//modulus
        int N1, N2, result; 
        printf("Enter Number 1: ");
        scanf("%d", &N1);
        printf("Enter Number 2: ");
        scanf("%d", &N2);
        printf("The Answer is %d", N1%N2);
        
    
            break;
        }
        case 6:{
            //power
            float N1, N2, a; 
            printf("Enter Number 1: ");
            scanf("%lf", &N1);
            printf("Enter Number 2: ");
            scanf("%lf", &N2);
a = pow(N1, N2);
printf("The Answer is %lf", a);
            break;
        }
    
    
}
if(choice > 7){
        printf("Please enter a valid option!\n");
    
    }
    }
    while(choice != 7);
 return 0; 
}clea