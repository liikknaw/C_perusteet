#include <stdio.h>
int main() {

  int i, n;

  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;

  printf("Anna luku, jolle lasketaan Fibonaccin luku: ");
  scanf("%d", &n);

  for (i = 3; i <= n; ++i) {
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  
	printf("Luvun %d Fibonaccin luku on %d.\n", n, nextTerm);
	printf("Kiitos ohjelman käytöstä.\n");
  return 0;
}