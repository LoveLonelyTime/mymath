#include "mymath.h"

int main()
{
    if (add(3, 4) != 7)
    {
        printf("Unexpected results in 'add'");
        return 0;
    }
    printf("Everything is OK!");
    return 0;
}