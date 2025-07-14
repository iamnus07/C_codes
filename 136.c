//union
#include <stdio.h>

#include <string.h>

struct student {

char ch;

int n;

char str[16];

} sv;

union student2{

char ch;

int n;

char str[16];

} uv;

int main(){

int struct_size,union_size;

struct_size = sizeof(sv);

union_size = sizeof(uv);

printf("Structure took %d bytes\n",struct_size);
printf("Union took %d bytes\n",union_size);

}
