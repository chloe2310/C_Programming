#include <stdio.h>

int main()
{ 
  unsigned d, m, y, top; 
 
  printf( "Nhap ngay, thang, nam: " ); 
  scanf( "%u%u%u", &d, &m, &y ); 
  switch ( m ) {   
    case 4: case 6: case 9: case 11: top = 30; break; 
    case 2: top = 28 + ( ( y % 4 == 0 && y % 100 ) || y % 400 == 0 ); break; 
    default: top = 31; 
  } 
 
  d = ( d % top ) + 1; 
  if ( d == 1 ) m = ( m % 12 ) + 1; 
  printf( "Ngay mai: %02u/%02u/%u\n", d, m, y + ( m == 1 && d == 1 ) ); 
 
  printf( "Nhap ngay, thang, nam: " ); 
  scanf( "%u%u%u", &d, &m, &y ); 
  if ( d == 1 ) { 
    switch ( m - 1 ) { 
      case 4: case 6: case 9: case 11: d = 30; break; 
      case 2: d = 28 + ( ( y % 4 == 0 && y % 100 ) || y % 400 == 0 ); break; 
      default: d = 31; 
    } 
    if ( m == 1 ) { m = 12; y--; } 
    else m--; 
  } else d--; 
  printf( "Hom qua: %02u/%02u/%u\n", d, m, y ); 
  return 0; 
} 
