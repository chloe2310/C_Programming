#include <stdio.h> 
 
int main() 
{ 
  unsigned d, m, y, s, i; 
 
  printf( "Nhap ngay, thang, nam: " );  
  scanf( "%u%u%u", &d, &m, &y );   
 
  s = d; 
  for ( i = 1; i < m; ++i ) 
    switch ( i ) 
    { 
      case 4: case 6: case 9: case 11: s += 30; break; 
      case 2: s += 28 + ( ( y % 4 == 0 && y % 100 ) || y % 400 == 0 ); break; 
      default: s += 31; 
    } 
  printf( "Ngay thu: %u\n", s ); 
  return 0; 
} 
