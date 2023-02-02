#include <stdio.h>
#include <time.h>

int factorial(int n) {
  if (n == 0)
    return 1;
  return n * factorial(n-1);
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  clock_t start = clock();
  int result = factorial(n);
  clock_t end = clock();
  double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
  printf("Factorial of %d: %d\n", n, result);
  printf("Time complexity: %f seconds\n", time_spent);
  return 0;
}
