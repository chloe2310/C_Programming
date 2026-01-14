/*
Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ 
số). 
Input 
2 số nguyên a, b với b khác 0( -109 ≤a, b ≤109) 
Output 
Tổng, hiệu, tích, thương của 2 số 
*/


#include <stdio.h>

void tinh_toan(long long a, long long b,
               long long *tong,
               long long *hieu,
               long long *tich,
               double *thuong)
{
    *tong  = a + b;
    *hieu  = a - b;
    *tich  = a * b;
    *thuong = (double)a / b;
}

int main() {
    long long a, b;
    long long tong, hieu, tich;
    double thuong;

    scanf("%lld %lld", &a, &b);

    tinh_toan(a, b, &tong, &hieu, &tich, &thuong);

    printf("%lld %lld %lld %.2f",
           tong, hieu, tich, thuong);

    return 0;
}
