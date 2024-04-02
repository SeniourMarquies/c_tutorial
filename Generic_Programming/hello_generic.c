/*
Void *
This is where the real fun starts
There is too much coding
everywhere else! 
- Hafiz
*/

/*

Use ellipsis ... to denote a variable number of arguments to
the compiler. the ellipsis can only occur at the end of an
argument list.

*/

// va_list argptr; is used to declare a variable that will refer to each argument in turn.
/*
void va_start(va_list argptr, last); must be called
once before argptr can be used. last is the name of the last
variable before the variable argument list

*/

/*
 type va_arg(va_list ap, type); Each call of va_arg
returns one argument and steps ap to the next; va_arg uses a
type name to determine what type to return and how big a
step to take.
*/

/*
void va_end(va_list ap); Must be called before program
returns. Does whatever cleanup is necessary.
*/
// It is possible to walk through the variable arguments more than once by calling va_start after va_end
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define TRUE 0
#define FALSE 1

void stringList(int n, ...){
    va_list ap;
    
    char* s = NULL; // check nullptr

    va_start(ap, n);

   while (TRUE)
   {
     s= va_arg(ap,char*);

    printf("%s\n",s);
    n--;
    if(n==0) break;
   }
   va_end(ap);
   // va_start to check list again...
   
}



int main(){



    stringList(3,"string1","string2","string3");
    stringList(2,"string1","string3");
    

}







