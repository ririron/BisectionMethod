#include <stdio.h>
#include <math.h>

#define iniX  2.5
#define EPS 0.00001

double func(double a){
  return 3*atan(a - 1) + (a / 4);
}

double func2(double a){
  return (3 /(a*a - 2*a + 2)) + (1 / 4);
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
    if(fabs(x1 - x) < EPS || k > 5) break;
    x = x1;
  }

  printf("result:%f\n", x1);
}
