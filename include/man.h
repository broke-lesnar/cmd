#include <stdio.h>
#include <string.h>

int man(const char *args)
{
  if (strcmp(args, "ls") == 0)
  {
    printf("\033[1mLS(1)\033[0m                     User Commands                     \033[1mLS(1)\033[0m\n\n");
    printf("\033[1mNAME\033[0m\n");
    printf("       ls - list directory contents\n\n");
    printf("\033[1mSYNOPSIS\033[0m\n");
    printf("       ls\n\n");
    printf("\033[1mDESCRIPTION\033[0m\n");
    printf("       Displays the names of files and directories in the current working directory.\n\n");
    printf("\033[1mEXAMPLE\033[0m\n");
    printf("       $ ls\n");
    printf("       file1.txt  dir1  script.sh\n");
  }
  else if (strcmp(args, "exit") == 0)
  {
    printf("\033[1mEXIT(1)\033[0m                    User Commands                    \033[1mEXIT(1)\033[0m\n\n");
    printf("\033[1mNAME\033[0m\n");
    printf("       exit - exit the shell\n\n");
    printf("\033[1mSYNOPSIS\033[0m\n");
    printf("       exit\n\n");
    printf("\033[1mDESCRIPTION\033[0m\n");
    printf("       Terminates the shell session.\n\n");
    printf("\033[1mEXAMPLE\033[0m\n");
    printf("       $ exit\n");
    printf("       [Shell closes]\n");
  }
  else if (strcmp(args, "pwd") == 0)
  {
    printf("\033[1mPWD(1)\033[0m                    User Commands                    \033[1mPWD(1)\033[0m\n\n");
    printf("\033[1mNAME\033[0m\n");
    printf("       pwd - print working directory\n\n");
    printf("\033[1mSYNOPSIS\033[0m\n");
    printf("       pwd\n\n");
    printf("\033[1mDESCRIPTION\033[0m\n");
    printf("       Prints the absolute path of the current working directory.\n\n");
    printf("\033[1mEXAMPLE\033[0m\n");
    printf("       $ pwd\n");
    printf("       /home/user/projects\n");
  }
  else if (strcmp(args, "clear") == 0)
  {
    printf("\033[1mCLEAR(1)\033[0m                  User Commands                  \033[1mCLEAR(1)\033[0m\n\n");
    printf("\033[1mNAME\033[0m\n");
    printf("       clear - clear the terminal screen\n\n");
    printf("\033[1mSYNOPSIS\033[0m\n");
    printf("       clear\n\n");
    printf("\033[1mDESCRIPTION\033[0m\n");
    printf("       Clears all previous output from the terminal.\n\n");
    printf("\033[1mEXAMPLE\033[0m\n");
    printf("       $ clear\n");
    printf("       [Screen clears]\n");
  }
  else if (strcmp(args, "echo") == 0)
  {
    printf("\033[1mECHO(1)\033[0m                   User Commands                   \033[1mECHO(1)\033[0m\n\n");
    printf("\033[1mNAME\033[0m\n");
    printf("       echo - display a line of text\n\n");
    printf("\033[1mSYNOPSIS\033[0m\n");
    printf("       echo [text]\n\n");
    printf("\033[1mDESCRIPTION\033[0m\n");
    printf("       Prints the given text to the terminal.\n\n");
    printf("\033[1mEXAMPLE\033[0m\n");
    printf("       $ echo \"Hello World\"\n");
    printf("       Hello World\n");
  }
  else if (strcmp(args, "man") == 0)
  {
    printf("\033[1mMAN(1)\033[0m                    User Commands                    \033[1mMAN(1)\033[0m\n\n");
    printf("\033[1mNAME\033[0m\n");
    printf("       man - display manual pages\n\n");
    printf("\033[1mSYNOPSIS\033[0m\n");
    printf("       man [command]\n\n");
    printf("\033[1mDESCRIPTION\033[0m\n");
    printf("       Shows the manual page for the specified command.\n\n");
    printf("\033[1mEXAMPLE\033[0m\n");
    printf("       $ man ls\n");
    printf("       [Displays ls manual]\n");
  }
  else
  {
    printf("No manual entry for '%s'\n", args);
  }
  return 0;
}