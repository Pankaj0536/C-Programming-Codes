//use of command line statements in main function
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
     printf("This argument number %d has value of %s\n",i,argv[i]);
    }  
    return 0;
}
