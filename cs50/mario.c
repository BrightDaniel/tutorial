#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //  a variable to store the user input
    int height;
    // a loop to make sure the user inputs only value we need
    do
    {
        height = get_int("please enter the height of your pyramid: ");
    }
    while (height < 1 || height > 8);

    //a loop to get the height of pyramid
    for (int i = 0; i < height; i++)
    {
        // a loop to get the length
        for (int j = 0; j < height; j++)
        {
            // condition to print out the # for each line
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        // prints out a newline for each loop
        printf("\n");
    }
}

// #*************************************
// #       alphabetacoder.com
// #Python program to print the left half
// #of the pyramid pattern using *
// #*************************************

// # take input
// row = int(input("Enter the number of rows: "))

// # new line
// print("")

// # display the pattern
// for i in range(1, row + 1):
//     # print space
//     for j in range(1, row - i + 1):
//         print(" ", end = "")
//     # print *
//     for j in range(1, i + 1):
//         print("*", end = "")

//     # new line
//     print("")





















