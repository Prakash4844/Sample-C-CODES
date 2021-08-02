#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} s1, s2, sumdist;

void main() {
  
   printf("Enter 1st distance\n");
   printf("Enter distance in feat and inches : ");
   scanf("%d %f", &s1.feet, &s1.inch);
   
   printf("\nEnter 2nd distance\n");
   printf("Enter distance in feat and inches : ");
   scanf("%d %f", &s2.feet, &s2.inch);
   
   sumdist.feet = s1.feet + s2.feet;
   sumdist.inch = s1.inch + s2.inch;

   while (sumdist.inch >= 12.0) 
   {
      sumdist.inch = sumdist.inch - 12.0;
      ++sumdist.feet;
   }
   
   printf("\nSum of distances = %d\'-%.1f\"", sumdist.feet, sumdist.inch);

}