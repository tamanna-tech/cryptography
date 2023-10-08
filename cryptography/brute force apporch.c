#include <stdio.h>
int areMultiplicativeInverses(int a, int b, int n) {
  return (a * b) % n == 1;
}
int main() {
  int a, b, n;
  int executenext = 1;
  do {
    printf("Enter the first number and second number: ");
    scanf("%d %d", & a, & b);
    printf("Enter the modulus: ");
    scanf("%d", & n);
    if (areMultiplicativeInverses(a, b, n)) {
      printf("%d and %d are multiplicative inverses modulo %d.\n", a, b, n);
    } else {
      printf("%d and %d are not multiplicative inverses modulo %d.\n", a, b, n);
    }
    printf("Do you want to execute next? (1 for Yes, 0 for No): ");
    scanf("%d", & executenext);
    getchar();
  } while (executenext);
  printf("Tamanna k.c");
  printf("\n roll no-34 ");
  return 0;
  return 0;
}


