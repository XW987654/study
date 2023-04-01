#include <stdio.h>

int isPrime(int n)//判断素数函数。
{
    int i, prime = 1;

    for (i = 2; i < n; ++i) {
        if (n%i == 0) {
            prime = 0;
        }
    }
    return prime;
}

int main()
{
    int a = 0, b = 0;
    int n = 0;
    int count = 0;
    int sum = 0;
    int c[200] = {};

    scanf("%d%d", &a, &b);
    for (n = 2; count != 200; ++n) {
        if(isPrime(n)){
            c[count] = n;
            ++count;
        }
    }
    for (;a <= b;++a) {
        sum += c[a-1];
    }
    printf("%d", sum);
    return 0;
}
