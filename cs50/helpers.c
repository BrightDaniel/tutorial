#include "helpers.h"
#include <math.h> // a math lib included because we'll do basic maths here

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int a = 0; a < height; a++)
    {
        for (int b = 0; b < width; b++)
        {
            //change all colours to average
            float total = image[a][b].rgbtRed + image[a][b].rgbtGreen + image[a][b].rgbtBlue;
            int average = (round)(total / 3);
            image[a][b].rgbtRed = image[a][b].rgbtGreen = image[a][b].rgbtBlue = average;
        }
    }
    // return 0;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int c = 0; c < height; c++)
    {
        for (int d = 0; d < width; d++)
        {
            //assign variables
            float originalRed = image[c][d].rgbtRed;
            float originalGreen = image[c][d].rgbtGreen;
            float originalBlue = image[c][d].rgbtBlue;

            //find sepia algorithm
            int sepiaRed = (round)(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = (round)(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = (round)(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);

            //set the sepia color cap to 225
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            //assign sepia color code into image
            image[c][d].rgbtRed =  sepiaRed;
            image[c][d].rgbtGreen =  sepiaGreen;
            image[c][d].rgbtBlue =  sepiaBlue;
        }
    }
    // return 0;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int e = 0; e < height; e++)
    {
        for (int f = 0; f < width / 2; f++)
        {
            // swap half of the image width
            RGBTRIPLE temp = image[e][f];
            image[e][f] = image[e][width - (f + 1)];
            image[e][width - (f + 1)] = temp;
        }
    }
    // return 0;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int g = 0; g < height; g++)
    {
        for (int h = 0; h < width; h++)
        {
            float totalRed, totalBlue, totalGreen;
            totalRed = totalBlue = totalGreen = 0;
            float counter = 0.00;

            //get the pixels
            for (int i = -1; i < 2; i++)
            {
                for (int j = -1; j < 2; j++)
                {
                    int nbrX = g + i;
                    int nbrY = h + j;

                    //check for valid neighbor pixels
                    if (nbrX < 0 || nbrX > (height - 1) || nbrY < 0  || nbrY > (width - 1))
                    {
                        continue;
                    }

                    //get the image value
                    totalRed += image[nbrX][nbrY].rgbtRed;
                    totalGreen += image[nbrX][nbrY].rgbtGreen;
                    totalBlue += image[nbrX][nbrY].rgbtBlue;

                    counter ++;
                }

                //averaging the pexels
                temp[g][h].rgbtRed = round(totalRed / counter);
                temp[g][h].rgbtGreen = round(totalGreen / counter);
                temp[g][h].rgbtBlue = round(totalBlue / counter);

            }
        }
    }
    // return 0;

    
    //transfer
    for (int k = 0; k < height; k++)
    {
        for (int l = 0; l < width; l++)
        {
            image[k][l].rgbtRed = temp[k][l].rgbtRed;
            image[k][l].rgbtGreen = temp[k][l].rgbtGreen;
            image[k][l].rgbtBlue = temp[k][l].rgbtBlue;
        }
    }
}
