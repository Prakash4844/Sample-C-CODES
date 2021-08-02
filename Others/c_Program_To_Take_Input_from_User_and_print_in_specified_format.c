//Write a program that formats product information entered by the user. A session with the program should look like this:
//Enter item number:_ 583
//Enter unit price: 13.5
//Enter purchase date (mm/dd/yyyy): 10/24/2010

//Item            Unit            Purchase
//                Price           Date
//583             $  13.50        10/24/2010

#include<stdio.h>
 void main()
  {
    int dd, mm, yyyy, item_no;
    float unit_price;

    printf("Enter Item No.:  ");
    scanf("%d", &item_no);

    printf("Enter Unit Price:  ");
     scanf("%f", &unit_price);

    printf("Enter Purchase date in mm/dd/yyyy format: ");
    scanf("%d/%d/%d", &mm,&dd,&yyyy); 

    printf("Item \t\t Unit \t\t Purchase \n        \t Price \t\t Date\n%d\t\t $  %.2f  \t %d/%d/%d", item_no, unit_price, mm,dd,yyyy);

  }