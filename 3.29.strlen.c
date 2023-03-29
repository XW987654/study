#include <stdio.h>

int strlen(char src[])
{
   int count = 0;
    for(;*src != '\0';++src){
        count++;
    }
    count++;
    return count;
}

int main(int argc, char **argv)
{
   char src[100] = "hello";
   printf("%d\n", strlen(src));
   return 0;
}

