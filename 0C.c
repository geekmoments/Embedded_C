/******************************************************************************

Ing. Cesar Cruz
Embedded C programming
0C

*******************************************************************************/
#include <stdio.h>



int main()
{
    unsigned char distanceA2B = 200;
    unsigned char distanceB2C = 10;
    
    unsigned char total_Distance; // solos valores de 0 a 256, apartir de alli sera suma incorecta
    
    total_Distance = distanceA2B + distanceB2C;
          
    printf("Hello the total distance is %d \n",total_Distance);
    printf("the size of  char is %ld bytes\n", sizeof(char));
    printf("the size of  short is %ld bytes\n", sizeof(short));
    printf("the size of  int is %ld bytes\n", sizeof(int));
    printf("the size of  float is %ld bytes\n", sizeof(float));
    printf("the size of  double is %ld bytes\n", sizeof(double));
  

    return 0;
}
