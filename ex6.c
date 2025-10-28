#include <stdio.h>
#include <string.h> 
#include <ctype.h>  
#include <math.h>   


int count_letters(char text[])
{
    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// Metindeki toplam kelime sayısını sayar
int count_words(char text[])
{
    // En az bir kelime olduğunu varsayıyoruz
    int words = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

// Metindeki toplam cümle sayısını sayar
int count_sentences(char text[])
{
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Cümle sonu karakterlerini kontrol et
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}


int main(void)
{
    char text[2000]; 
    // Kullanıcıdan metni al
    printf("Text: ");

    fgets(text, sizeof(text), stdin);

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);


    float L = (float)letters / (float)words * 100.0;
    float S = (float)sentences / (float)words * 100.0;

    // Coleman-Liau formülünü uygula
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // Sonucu en yakın tam sayıya yuvarla
    int grade = round(index);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }

    return 0;
}

