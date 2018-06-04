#include <stdio.h>
#include <math.h>

#define iniX  2.0
#define EPS 0.00000000001

double func(double a){
  return a*a -2 ;
}

double func2(double a){
  return 2*a;
}

int main(){
  int k = 0;
  double x = iniX;
  double x1 = 0;

  while(1){
    printf("%d回目", k);
    x1 = x - (func(x)/func2(x));
    k++;
    printf(":%f\n", x1);
    if(fabs(x1 - x) < EPS) break;
    x = x1;
  }

  printf("result:%f\n", x1);
}
