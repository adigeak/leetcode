#include <stdio.h>
int main(void)
{
    int a,b,c;
    a = 11,(22),33;
    b = ((44,55),66);
    c = (77), 88, 99;
    printf("a = %d b = %d c = %d",a,b,c);
    return 0;
}