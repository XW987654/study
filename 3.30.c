#include <stdio.h>

int main(int argc,char **argv)
{
    int x = 0, a = 0, b = 0, c = 1, sum = 0, count = 1;
    scanf("%d", &x);
    for (;x > 0;++count){
        a = x%10;
        if ((a + count)%2 == 0){
            sum += c;
        } else {
            sum += 0;
        };
        c *= 2;
        x = x/10;
    }
    printf("%d", sum);
    return 0;
}
