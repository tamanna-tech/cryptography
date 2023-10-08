#include<stdio.h>
void extended_euclidean_algorithm(int a, int b, int * x, int * y, int * gcd) {
  if (b == 0) {
    * x = 1;
    * y = 0;
    * gcd = a;
  } else {
    int x1, y1;
    extended_euclidean_algorithm(b, a % b, & x1, & y1, gcd);
    * x = y1;
    * y = x1 - (a / b) * y1;
  }
}
int main() {
  int a, b, x, y, gcd, i;
  for (i = 0; i < 3; i++) {
    printf("Enter two numbers:");
    scanf("%d %d", & a, & b);
    extended_euclidean_algorithm(a, b, & x, & y, & gcd);
    printf("x = %d, y = %d, gcd = %d\n", x, y, gcd);
  }
  printf("Name: Tamanna \t Roll no:34");
  return 0;
}

