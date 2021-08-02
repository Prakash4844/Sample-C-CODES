//Enter ISBN: 978-0-393-97950-3
//GSI prefix: 978
//Group identifier: 0
//Publisher code: 393
//Item number: 97950
//Check digit: 3
#include<stdio.h>
 void main()
  {
    int gsi, group_identifier, pub_code, item_no, check_digit;

    printf("Enter ISBN no: ");
    scanf("%d -%d -%d -%d -%d", &gsi, &group_identifier, &pub_code, &item_no, &check_digit);

     printf("GSI Prefix: %d\nGroup Identifier: %d \nPublisher code: %d \nItem no.: %d \nCheck digit: %d  ", gsi, group_identifier, pub_code, item_no, check_digit);

  }