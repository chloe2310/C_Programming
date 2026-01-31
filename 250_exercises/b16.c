#include <stdio.h> 
 
int main() 
{ 
  unsigned y, m, dow, d, top, y1, m1; 
 
  printf( "Nhap nam: " ); 
  scanf( "%u", &y ); 
  /* Công thức Zeller, tính thứ cho ngày đầu năm (ngày 1/1) */ 
  m = 1; 
  y1 = y - ( 14 - m ) / 12; 
  m1 = m + 12 * ( ( 14 - m ) / 12 ) - 2; 
  dow = ( 1 + y1 + y1 / 4 - y1 / 100 + y1 / 400 + ( 31 * m1 ) / 12 ) % 7; 
  /* lặp cho 12 tháng */ 
  for ( m = 1; m <= 12; ++m ) 
  { 
    printf( "Thang %u\n", m ); 
    switch ( m ) { 
      case 4: case 6: case 9: case 11: top = 30; break; 
      case 2: top = 28 + ( ( y % 4 == 0 && y % 100 ) || y % 400 == 0 ); break; 
      default: top = 31; 
    } 
    printf( "  S  M  T  W  T  F  S\n" ); 
    for ( d = 0; d < dow; ++d ) 
      printf( "   " ); 
    for ( d = 1; d <= top; ++d ) { 
      printf( "%3u", d ); 
      if ( ( dow + d ) % 7 == 0 ) putchar( '\n' ); 
    } 

dow = ( dow + top ) % 7; /* tính lại thứ cho ngày đầu mỗi tháng */ 
  if ( dow ) putchar( '\n' ); 
  } 
  return 0; 
}
