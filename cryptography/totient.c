#include <stdio.h>
int phi(int n) {
  int result = n, p; // Initialize result as n
  // Consider all prime factors of n and subtract their multiples from result
  for (p = 2; p * p <= n; ++p) {
    if (n % p == 0) {
      while (n % p == 0)
        n /= p;
      result -= result / p;
    }
  }
  // If n has a prime factor greater than sqrt(n)
  if (n > 1)
    result -= result / n;
  return result;
}
int main() {
  int n;
  int executenext = 1;
  do {
    printf("Enter a positive integer: ");
    scanf("%d", & n);
    if (n > 0) {
      int totient = phi(n);
      printf("Euler's Totient Function for %d is %d\n", n, totient);
    } else {
      printf("Please enter a positive integer.\n");
    }
    printf("Do you want to execute next? (1 for Yes, 0 for No): ");
    scanf("%d", & executenext);
    getchar();
  } while (executenext);
  printf("Tamanna k.c");
  printf("\n Roll number-34");
  return 0;
}

