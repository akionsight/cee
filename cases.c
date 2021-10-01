#include <stdio.h>

int main(void)
{
    const int a = 34;
    switch (a)
    {
    case 2:
        printf("Value is 2");
        break;
    
    case 3: 
        printf("Value is 3");
        break;

    default:
        printf("Value is not 3 nor 2");
        break;
    }
    return 0;
}
