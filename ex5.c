#include <stdio.h>


void sayHello(char name[])
{
    printf("Hello, %s!\n", name);
}

int main(void)
{
    char user_name[50]; // İsim için 50 karakterlik bir yer ayıralım

    printf("What is your name? ");
    scanf("%s", user_name);

    sayHello(user_name);

    return 0;
}

