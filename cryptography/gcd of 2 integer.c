 #include <stdio.h>
 int main() {
  int n1, n2, i, gcd;
  int executenext = 1;
  do {
    printf("Enter two integers: ");
    scanf("%d %d", & n1, & n2);
    for (i = 1; i <= n1 && i <= n2; ++i) {
      if (n1 % i == 0 && n2 % i == 0)
        gcd = i;
    }
    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
    printf("\nDo you want to execute next? (1 for Yes, 0 for No): ");
    scanf("%d", & executenext);
    getchar();
  } while (executenext);
  printf("Tamanna kc-");
  printf("\n-Roll no: 34---");
  return 0;
}


