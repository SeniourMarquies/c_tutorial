#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*
 qsort needs a compare function that returns
 0 if x '==' y
 <0 if x '<' y
 >0 if x '>' y
*/

int compareInt(const void *x, const void *y){
    return ((*(int *)x) - (*(int *)y));
}
struct student{
    int id;
    char* name;
    char* address;
};

int compareId(const void* x, const void* y){
    int key1,key2;
    key1 = ((struct student *)x)->id;
    key2 = ((struct student*)y)->id;
    return (key1 - key2);

}


int main(int argc, char **argv)
{
int i, n;
int *array;
char *strings;
struct student* roster;
if (argc != 2) {
fprintf(stderr, "Usage: %s <n>\n", argv[0]) ;
exit(1);
}
n = atoi(argv[1]);
array = (int *) malloc(sizeof(int)*n);
srandom(0);
for (i=0; i<n; i++) {
array[i] = random() % n;
}
qsort(array, n, sizeof(int), compareInt);

roster = (struct student *) malloc(sizeof(struct student)*n);
for (i=0; i<n; i++) {
roster[i].id = n-i;
roster[i].name = NULL;
roster[i].address = NULL;
}
qsort(roster, n, sizeof(struct student), compareId);
exit(0);
}