/* Cho biểu thức A(x) = x3 + 3x2 + x + 1 
Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên 
Input 
Số nguyên dương x không quá 105. 
Output 
Kết quả của biểu thức A(x) */

#include<stdio.h>

void A_func(long long x, long long *result)
{
    *result = (x * x * x + 3 * x * x  + x+1);
}

int main() {
    long long x;
    long long res;

    scanf("%lld", &x);

    A_func(x, &res);

    printf("%lld", res);

    return 0;
}

