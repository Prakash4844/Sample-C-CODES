//_ in the form (xxx) xxx-xxxx 
//then displays the number in the form xxx.xxx.xxxx:

//Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
//You entered 404.817.6900

#include<stdio.h>
 void main()
  {
    int begin, mid, last;

    printf("Enter phone no in  [(xxx) xxx-xxxx] format: ");
    scanf("(%d) %d -%d", &begin, &mid, &last);

     printf("Phone no: %d.%d.%d ", begin,mid,last);

  }