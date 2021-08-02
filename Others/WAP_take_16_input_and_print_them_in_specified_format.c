//Write a program that asks the user to enter the numbers from 1 to 16 (in any order) 
//then_ displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows
//columns, and diagonals [without Array]:

//Enter the numbers from 1 to 16 in any order:
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

//16  3  2 13
// 5 10 11  8
//9  6  7 12
// 4 15 14  1

//Row sums: 34 34 34 34
//Column sums: 34 34 34 34
//Diagonal sums: 34 34
//If the row, column, and diagonal sums are all the same (as they are in this example), 
//the numbers are said to form a magic square. The magic square shown here appears 
//in a 1514 engraving by artist and mathematician Albrecht Dürer. 
//(Note that the middle numbers in the last row give the date of engraving.)
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() 
{
    
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8,
          &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    printf("\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n", 
           n1, n2, n3, n4, n5, n6, n7, n8);

    printf("%3d%3d%3d%3d\n%3d%3d%3d%3d\n\n", 
           n9, n10, n11, n12, n13, n14, n15, n16);

    printf("Row sums: %d %d %d %d\n", (n1 + n2 + n3 + n4), (n5 + n6 + n7 + n8),
           (n9 + n10 + n11 + n12), (n13 + n14 + n15 + n16));

    printf("Column sums: %d %d %d %d\n", 
           (n1 + n5 + n9 + n13), (n2 + n6 + n10 + n14),
           (n3 + n7 + n11 + n15), (n4 + n8 + n12 + n16));

    printf("Diagonal sums: %d %d\n",
           (n1 + n6 + n11 + n16), (n4 + n7 + n10 + n13));
    
    return 0;
}