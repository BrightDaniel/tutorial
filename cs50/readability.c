#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    //printf("%s\n ", text);

    int count = count_letters(text);
    //printf("%i\n ", count);

    int word_count = count_words(text);
    //printf("%i words\n", word_count);

    int sentence = count_sentences(text);
    //printf("%i sentence \n", sentence);

    float L = count / (float) word_count * 100;
    float S = sentence / (float) word_count *  100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}

//count lettters in a string
int count_letters(string text)
{
    int count = 0;

    //Counts each character except space
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

//count words in a string using spaces
int count_words(string text)
{
    int word_count = 0;

    for (int i = 1; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            word_count++;
        }
    }
    return word_count + 1;
}

int count_sentences(string text)
{
    int sentence = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        //. or a ! or a ?
        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
            //if(strcmp(text, "." || text == '!' || text == '?'))
        {
            sentence++;
        }
    }
    return sentence;

}

