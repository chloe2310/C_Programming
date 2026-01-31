#include <stdio.h> 
 
int main() 
{ 
  long h; 
 
  printf( "Nhap so gio: " ); 
  scanf( "%ld", &h ); 
  printf( "%ld tuan, %ld ngay, %ld gio\n", 
       h / ( 24 * 7 ), ( h % ( 24 * 7 ) ) / 24, ( h % ( 24 * 7 ) ) % 24 ); 
  return 0; 
} 
