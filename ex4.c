#include <stdio.h>

int main(void)
{
    printf("Counting from 2 to 10 by twos:\n");

    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}

