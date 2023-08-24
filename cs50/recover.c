#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// New
typedef uint8_t BYTE;

//Num of block size
/* const */ int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usuage: ./recover IMAGE\n");
        return 1;
    }

    //use comand line arg to read file
    FILE *input = fopen(argv[1], "r");

    if (input == NULL)
    {
        printf("failed to open!\n");
        return 5;
    }

    BYTE buffer[BLOCK_SIZE];

    //count each image
    int counter = 0;

    FILE *output = NULL;

    char filename[8];

    while (fread(buffer, sizeof(BYTE), BLOCK_SIZE, input) == BLOCK_SIZE)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (counter == 0)
            {
                sprintf(filename, "%03d.jpg", counter);
                output = fopen(filename, "w");
                fwrite(buffer, sizeof(BYTE), BLOCK_SIZE, output);
                counter++;
            }
            //if the counter of our image is 1 and above
            else if (counter > 0)
            {
                //closes the output, or  file (image) in our case
                fclose(output);
                sprintf(filename, "%03d.jpg", counter);
                // opens a new file using fopen
                output = fopen(filename, "w");
                fwrite(buffer, sizeof(BYTE), BLOCK_SIZE, output);
                counter++;
            }

        }
        else if (counter > 0)
        {
            fwrite(buffer, sizeof(BYTE), BLOCK_SIZE, output);
        }
    }
    //free up our space by closing memory
    fclose(output);
    fclose(input);
}
