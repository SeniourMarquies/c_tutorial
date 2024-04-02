#include <stdio.h>
#include <stdlib.h>


int main(){

 int num = 5;
 
 int times2  = 	num << 1;
 int times4  =	num << 2;
 int times8  = 	num << 3;
 int times16 = 	num << 4;
 int times32 = 	num << 5;
 int times64 = 	num << 6;
 int times128 = num << 7;
 int times256 = num << 8;
 
 printf("%d Tİmes 2   = %d\n",num,times2);
 printf("%d Tİmes 4   = %d\n",num,times4);
 printf("%d Tİmes 8   = %d\n",num,times8);
 printf("%d Tİmes 16  = %d\n",num,times16);
 printf("%d Tİmes 32  = %d\n",num,times32);
 printf("%d Tİmes 64  = %d\n",num,times64);
 printf("%d Tİmes 128 = %d\n",num,times128);
 printf("%d Times 256 = %d\n",num,times256);

    return 0;
}
