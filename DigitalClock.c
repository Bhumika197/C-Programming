#include <stdio.h>
#include <time.h>

void fill_time(char*, int);
int input_format(); 

int main(){
char time[100];
int format = input_format(); 
fill_time(time, format);
printf("Current time: %s", time);
return 0; 
}

int input_format(){
int format; 
printf("Choose thetime format: ");
printf("\n1. 24 hour format");
printf("\n2. 12 hour format");
printf("\n Choose a input(1/2): "); 
scanf("%d", &format);

return format; 
}
void fill_time(char* buffer, int format){
    time_t raw_time; //time

    struct tm *current_time; // pointer current_time, struc to store time information;
     //to save the timein the string buffer; 


    time(&raw_time);//TIME function is called the reference of rawtime is passed through it, the default current time of the system will be filled in raw_time;  

    current_time = localtime(&raw_time);  //localtime will convert rawtime into normal time; 
    if(format == 1){
        strftime(buffer, 50, "%H:%M:%S", current_time );//string format time (strf) function inside <time.h>
    }else{
   strftime(buffer, 50, "%I:%M:%S %p", current_time );//string format time (strf) function inside <time.h> 
/* %I for international time , #%M for min , %S for sec, %p for am and pm */
    }
}