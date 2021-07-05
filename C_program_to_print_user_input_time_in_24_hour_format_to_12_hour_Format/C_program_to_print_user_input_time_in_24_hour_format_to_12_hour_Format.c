//C_program_to_print_user_input_time_in_24_hour_format_to_12_hour_Format
//Created by Prakash


#include <stdio.h>

int main()
{
    int hh,mm;
    
	//Taking User input in 24 hour Time Format
    printf("Enter Time in 24-hours Time format: ");
    scanf("%d %d", &hh, &mm);
    
	//For 12PM afternoon
    if(hh==12)
    { 
	//Here 00 minutes is taken in Raw format 
        if(mm==00)
        {
            printf("Time in 12 hour Format: %d:00 PM", hh);
        }
        
        printf("Time in 12 hour Format: %d:%d PM", hh, mm);
            
    }   
    	//if hh>12 meaning PM Time 12:01-24:00
    else if(hh > 12)
    {
        hh = hh-12;
        
        printf("Time in 12 hour Format: %d:%d PM", hh, mm);
    }
    else //AM time b/w 0:00AM to 11:59AM
    {
        printf("Time in 12 hour Format: %d:%d AM", hh, mm);  
    }

    return 0;
}
