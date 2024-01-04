#include <stdio.h>

int main(void)
{
int a[5] = {98, 102, 402, 1024, 4096};
int *p;

p = &a[2];

printf("a[2] = %d\n", *(p + 1));  /* Add this line */

return (0);
}
