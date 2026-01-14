/*
Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b. 
Input 
2 số nguyên a, b với b khác 0( -1018 ≤a, b ≤1018) 
Output  
Đáp án của bài toán được in trên 1 dòng 
Example : 
100 5 
20 0
*/


#include <stdio.h>

void div_mod(long long a,
             long long b,
             long long *quotient,
             long long *remainder)
{
    if (b == 0) 
	{
        *quotient = 0;
        *remainder = 0;
        return;
    }

    *quotient = a / b;
    *remainder = a % b;
}

int main() {
    long long a, b;
    long long q, r;

    scanf("%lld %lld", &a, &b);

    div_mod(a, b, &q, &r);

    printf("%lld %lld", q, r);

    return 0;
}
