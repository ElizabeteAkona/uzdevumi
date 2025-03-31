#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("error, no file name\n");
        return 1;
    }
    FILE *raw_file = fopen(argv[1], "r");
    if (raw_file == NULL)
    {
        printf("Could not open %s\n", (char *) raw_file);
        return 1;
    }
    int BLOCK_SIZE = 512;
    BYTE buffer[BLOCK_SIZE];
    char *name = malloc(8);
    FILE *img = NULL;
    int count = 0;
    while (fread(buffer, BLOCK_SIZE, 1, raw_file) == 1)
    {
        if ((buffer[0] == 0xff) && (buffer[1] == 0xd8) && (buffer[2] == 0xff) && ((buffer[3] & 0xf0)) == 0xe0)
        {
            if (count != 0)
            {
                fclose(img);
            }
            sprintf(name, "%03i.jpg", count);
            img = fopen(name, "wb");
            count++;
        }
        if (count != 0)
        {
            fwrite(buffer, BLOCK_SIZE, 1, img);
        }
    }
    fclose(img);
    fclose(raw_file);
    free(name);
}
