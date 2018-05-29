#include <stdio.h>
#include <math.h>

#define iniX  2.0
#define EPS 0.0000000000000001

double func(double a){
  return a*a -2 ;
}

double func2(double a){
  return 2*a;
}

int main(){
  int k = 0;
  double x = iniX;
  double x1 = 0.0;

  do{
    printf("%d回目", k);
    x1 = x - (func(x)/)
    k++;
    printf(":%f\n", x1);
  }while(fabs(x1 - x) > EPS);

  printf("result:%f\n", w);
}
