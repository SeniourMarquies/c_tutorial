#include <stdlib.h>
#include <stdio.h>

#define TRUE 0
#define FALSE 1

int f1(int x){
    return x*x;
}


/*
void Message(const char* header, const char* msg, const char* dlg)
message = 0x65656;
message("Sure Hatası","Zaman yok", "OK")
void (*message)(char*,char*,char*);
*/

int main()
{
    int (*func)(int); // /* pointer to a fn with an int arg and int return */
    func = f1; // holds function pointer (address)

    int n = (*func)(5); // assign result into n
    printf("%d\n",n);



    return 0;
}