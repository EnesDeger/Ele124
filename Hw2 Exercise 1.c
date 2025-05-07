#include <stdio.h>
#include <stdlib.h>

int main( void )
{
float aRandomNumber ;
for( int i=0; i<50; i++ )//we'll get 50 numbers.
{
aRandomNumber = rand() %21000 ;
aRandomNumber = aRandomNumber /1000;
//due to the logic of rand() function if ve use %2100,%100 pair
//we can't see numbers like 0.x in the first 52 element
printf("number %2.d : %.2f \n",i+1, aRandomNumber);
}
system("pause");
}
