#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &a);
    b = a/100;
    c = a%100;
    if(b >= 8){
        b = b - 8;
    }else{
        b = 16 + b;
    };
    printf("%d", 100*b + c);
    return 0;
}
        
        
