#include <stdio.h> 
 
int main()
{ 
  int h, m, s; 
  long time; 
  
  printf( "Nhap gio, phut, giay [1]: " ); 
  scanf( "%d%d%d", &h, &m, &s ); 
  time = 3600 * h + 60 * m + s; 
 
  printf( "Nhap gio, phut, giay [2]: " ); 
  scanf( "%d%d%d", &h, &m, &s ); 
  time -= 3600 * h + 60 * m + s; 
  if ( time < 0 ) time = -time; 
 
  printf( "Hieu thoi gian: %ld gio, %ld phut, %ld giay\n", 
          time / 3600, ( time % 3600 ) / 60, ( time % 3600 ) % 60 ); 
  return 0; 
} 
