#include "algorithm.h"

// 实现辗转相除法
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int extend_gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int d = extend_gcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}
