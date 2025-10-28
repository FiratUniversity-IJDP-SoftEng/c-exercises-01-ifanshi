#include <stdio.h>

int main(void)
{
    int age;

    // kullanıcıdan yaşını al
    printf("What is your age? ");
    scanf("%d", &age);

    // bir for döngüsü kullanarak yaş kadar "Happy Birthday!" yazdır
    for (int i = 0; i < age; i++)
    {
        printf("Happy Birthday!\n");
    }
    return 0;
}

