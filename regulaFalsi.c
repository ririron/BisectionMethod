#include <stdio.h>
#include <math.h>

#define iniA 0.0
#define iniB 2.0
#define EPS 0.0000000000000001

double func(double a){
  return a*a -2 ;
}

int main(){
  int k = 0;
  double A = 0.0;
  double B = 0.0;
  double nextA = iniA;
  double nextB = iniB;
  double w = 0.0;
  double w1 = 0.0;

  do{
    printf("%d回目", k);
    A = nextA;
    B = nextB;
    w = (func(B)*A - func(A) * B) / (func(B) - func(A));
    if(func(w) * func(A) <= 0){
      nextA = A;
      nextB = w;
      }else{
        nextA = w;
        nextB = B;
      }
    k++;
    w1 = (func(nextB)*nextA - func(nextA) * nextB) / (func(nextB) - func(nextA));
    printf(":%f\n", w);
  }while(fabs(w - w1) > EPS);

  printf("result:%f\n", w);
}
