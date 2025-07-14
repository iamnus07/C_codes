//union
#include <stdio.h>

#include <string.h>

union u {

char ch;

int x;

int y;

} uv;

int main() {

uv.ch = 'A';

printf("uvich = %c\n",uv.ch);

uv.x = 16;

printf("uv.x = %d\n",uv.x);

printf("uv.ch = %c\n",uv.ch);

uv.y = 17;

printf("uv.y = %d\n",uv.y);

printf("uv.x = %d\n",uv.x); printf("uv.ch = %c\n",uv.ch);

}
