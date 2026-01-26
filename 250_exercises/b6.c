#include <stdio.h> 
 
int main() 
{ 
  int a, b, c, t; 
 
  printf( "Nhap a, b, c: " );  
  scanf( "%d%d%d", &a, &b, &c ); 
  /* a < b thì hoán chuyển, vậy a  b */ 
  if ( a < b ) { t = a; a = b; b = t; } 
  /* a < c thì hoán chuyển, vậy a  c, kết quả a lớn nhất */ 
  if ( a < c ) { t = a; a = c; c = t; } 
  /* b < c thì hoán chuyển, vậy b  c, kết quả c nhỏ nhất */ 
  if ( b < c ) { t = b; b = c; c = t; } 
 
  printf( "Tang dan: %d %d %d\n", c, b, a ); 
  return 0; 
} 
