#include <stdio.h>
#include <string.h> // strcmp fonksiyonu için bu kütüphane gerekli

int main(void)
{
    // Hayvan adını saklamak için bir karakter dizisi (string)
    char pet[10];

    printf("Do you have a cat or a dog? ");
    // Kullanıcıdan bir kelime (string) al
    scanf("%s", pet);

    if (strcmp(pet, "dog") == 0)
    {
        printf("Woof!\n");
    }
    else if (strcmp(pet, "cat") == 0)
    {
        printf("Meow!\n");
    }
    else
    {
        printf("Hmm, I don't know that animal sound.\n");
    }

    return 0;
}


