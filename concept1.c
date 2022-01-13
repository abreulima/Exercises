#include <unistd.h>

int main(int argc, char *argv[])
{
    int k;

    for(k = 0; argv[1][k]; k++)
    {
        write(1, &argv[1][k], 1);
        write(1, "\n", 1);
    }

    return 0;
}