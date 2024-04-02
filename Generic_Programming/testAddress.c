#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Address.h"

// We can store pointers to functions that operate on the List in the List structure itself!



int main(int argc, char *argv[])
{
Address addr1 = createAddress("Moo Shoo", "123 Main Street",
"Boise", "Idaho", 83701);
printf("%s\n", (*addr1->toString)(addr1));
addr1->toString = printAddress;
printf("%s\n", (*addr1->toString)(addr1));
exit(0);
}


