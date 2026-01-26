/* Nhập vào diện tích S của một mặt cầu. Tính thể tích V của hình cầu này. */


#include <stdio.h> 
#include <math.h> 
 
int main() { 
  double S; 
   
  printf( "Nhap dien tich S: " ); 
  scanf( "%lf", &S ); 
  printf( "The tich V = %g\n", 
    ( 4 * M_PI * pow( sqrt( S / ( 4 * M_PI ) ), 3 ) ) / 3 ); 
  return 0; 
} 
   
