#include <unistd.h>

int main(int argc, char *argv[]) {

  int used[255];
  int k;

  // Check for strings
  if(argc == 3)
  {

    // Check every character of the 2nd string
    for(k = 0; argv[2][k]; k++)
    {
      // Save the ASCII value of each
      used[(unsigned char)argv[2][k]] = 1;
    }

    // Check every character of the 1st string
    for(k = 0; argv[1][k]; k++)
    {
      // If that position is 1
      // It means the 2nd string has it
      if(used[(unsigned char)argv[1][k]] == 1)
      {
        // print the character
        write(1, &argv[1][k], 1);
        // and write 2, so we don't repeat that position
        used[(unsigned char)argv[1][k]] = 2;
      }
    }

    // breaking a line
    write(1, "\n", 1);

  }

}