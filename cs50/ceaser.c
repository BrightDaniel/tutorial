#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// bool only_digits(string s);
int main(int argc, string argv[])
{
    //check if command line argument is not 2, amd prints an error
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // loops through command line argument to see if the input is between 0-9 digits
    for (int i = 0; i < strlen(argv[1]); i++)

    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //convert a string to int
    int k = atoi(argv[1]);

    //get user input or as plaintext, print out chiphertext
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    //loops through the input, and converts to chipertext.
    for (int j = 0; j < strlen(plaintext); j++)

    {
        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
        }
        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97);
        }

        else
        {
            printf("%c", plaintext[j]);
        }
    }

    printf("\n");
}
