// Write a program that accepts a date from the user in the form mm/dd/yyy and then displays it in the form yyymmdd:
#include<stdio.h>
 void main()
  {
    int dd, mm, yyyy, item_no;
    float unit_price;

    printf("Enter Item No.-  ");
    scanf("%d", &item_no);

    printf("Enter Unit Price:  ");
     scanf("%.1f", &unit_price);

    printf("Enter Purchase date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &dd,&mm,&yyyy);

    //printf("Item \t Unit \t Purchase \n        Price \t Date");

  }