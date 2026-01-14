/*
Bài 3. Tính toán giá trị biểu thức 2 
Yêu cầu: Cho ba số nguyên dương a , b và c, hãy tính S = a*(b+c)+b*(a+c). 
Dữ liệu: Một dòng ba số nguyên a, b, c ( 0 < |a|, |b|, |c |< 109), a và b cách nhau một 
khoảng trắng. 
Kết quả: Một dòng ghi giá trị S = a*(b+c) + b*(a+c). 
*/


#include <stdio.h>

void tinh_S(long long a, long long b, long long c, long long *result)
{
    *result = a * (b + c) + b * (a + c);
}

int main() {
    long long a, b, c;
    long long S;

    scanf("%lld %lld %lld", &a, &b, &c);

    tinh_S(a, b, c, &S);

    printf("%lld", S);

    return 0;
}
