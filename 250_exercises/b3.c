#include <stdio.h> 
#include <math.h> 
 
int main() { 
  double xC, yC, R, xM, yM, d;
  printf( "Nhap toa do tam C(xC, yC)? " ); 
  scanf( "%lf%lf", &xC, &yC ); 
  printf( "Nhap ban kinh R? " ); 
  scanf( "%lf", &R ); 
  printf( "Nhap toa do M(xM, yM)? " ); 
  scanf( "%lf%lf", &xM, &yM ); 
  d = R - sqrt( ( xM - xC ) * ( xM - xC ) + ( yM - yC ) * ( yM - yC ) ); 
  if ( d > 0 ) printf( "M nam trong C()\n" ); 
  else if ( d < 0 ) printf( "M nam ngoai C()\n" ); 
  else printf( "M nam tren C()\n" ); 
  return 0; 
}
