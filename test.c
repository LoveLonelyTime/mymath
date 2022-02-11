#include "mymath.h"

int main()
{
    if (add(3, 4) != 7)
    {
        printf("Unexpected results in 'add'");
        return 0;
    }
    if (sub(3, 4) != -1)
    {
        printf("Unexpected results in 'sub'");
        return 0;
    }
    if (mul(3, 4) != 12)
    {
        printf("Unexpected results in 'mul'");
        return 0;
    }
    if (div(3, 4) != 0)
    {
        printf("Unexpected results in 'div'");
        return 0;
    }
    printf("Everything is OK!");
    return 0;
}