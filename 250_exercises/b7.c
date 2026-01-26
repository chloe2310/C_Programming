#include <stdio.h> 

int main() 
{ 
  float a, b; 
  printf( "Nhap a, b: " );  
  scanf( "%f%f", &a, &b ); 
  if ( !a ) printf( b ? "Vo nghiem\n" : "Vo dinh\n" );  
  else printf( "x = %g\n", -b / a ); 
  return 0; 
}
