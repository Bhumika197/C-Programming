#include <stdio.h>
#include <time.h>

int main(){

    time_t raw_time; //time
    struct tm *current_time; // pointer current_time
    char buffer[50]; //to save the timein the string buffer; 


    time(&raw_time);
    current_time = localtime(raw_time);
   strftime(buffer, sizeof(buffer), "%I:%M:%S %p", current_time );//string format time function inside <time.h> 
/* %I for international time , %M for min , %S for sec, %p for am and pm */


printf("Current time: %s", buffer);

return 0; 
}