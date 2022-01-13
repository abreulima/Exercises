#include <unistd.h>

int main(int argc, char *argv[])
{
    int used[255];
    int k;

    if (argc == 3)
    {

        // Change every position to 0
        for(k = 0; k < 255; k++)
        {
            used[k] = 0;
        }

        // If a character wasn't printed before, 
        // Print it, and mark the character as used
        for (k = 0; argv[1][k]; k++)
        {
            if (used[(unsigned char)argv[1][k]] == 0)
            {
                write(1, &argv[1][k], 1);
                used[(unsigned char)argv[1][k]] = 1;
            }
        }

        // Same thing as the for above,
        // but now, for the 2nd string
        for (k = 0; argv[2][k]; k++)
        {
            if (used[(unsigned char)argv[2][k]] == 0)
            {
                write(1, &argv[2][k], 1);
                used[(unsigned char)argv[2][k]] = 1;
            }
        }
    }
    
    // Break a line
    write(1, "\n", 1);
}