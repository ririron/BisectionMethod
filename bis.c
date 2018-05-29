#include <stdio.h>
#include <math.h>

#define iniA 0.0
#define iniB 2.0
#define EPS 0.0000001

double func(double a){
  return a*a -2 ;
}

int main(){
  int k = 0;
  double A = 0.0;
  double B = 0.0;
  double nextA = iniA;
  double nextB = iniB;
  double c = 0.0;

  do{
    printf("%d回目", k);
    A = nextA;
    B = nextB;
    c = (A + B) / 2.0;
    if(func(c) * func(A) <= 0){
      nextA = A;
      nextB = c;
      }else{
        nextA = c;
        nextB = B;
      }
    k++;
    printf(":%f\n", c);
  }while(fabs(nextB - nextA) > EPS);

  printf("result:%f\n", c);
}
