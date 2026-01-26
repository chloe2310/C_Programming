#include <stdio.h> 
#include <math.h> 
#define swap( a, b ) { float t = a; a = b; b = t; } 
 
int main() { 
  float a, b, c; 
 
  printf( "Nhap 3 canh tam giác: " ); 
  scanf( "%f%f%f", &a, &b, &c ); 
  /* sắp xếp sao cho: a  b  c */ 
  if ( a > b ) swap( a, b ); 
  if ( a > c ) swap( a, c ); 
  if ( b > c ) swap( b, c ); 
  if ( a * b * c > 0 && a + b > c ) { 
    /* nếu a = c thì a = b */   
    if ( a == c ) printf( "Tam giac deu\n" ); 
    else if ( a == b || b == c ) 
      /* nếu tam giác vuông, cạnh lớn nhất c là cạnh huyền */ 
      if ( ( a * a + b * b ) == c * c ) printf( "Tam giac vuong can\n" ); 
      else                              printf( "Tam giac can\n" ); 
    else 
      if ( ( a * a + b * b ) == c * c ) printf( "Tam giác vuong" ); 
      else printf( "Tam giac thuong\n" ); 
    float p = ( a + b + c ) / 2; 
    printf( "Dien tich S = %g\n", sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) ) ); 
  } 
  else printf( "Khong hop le\n" ); 
  return 0; 
} 
