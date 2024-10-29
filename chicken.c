#include <stdio.h>
int *foo(int *p, int *q)
{
  *p = *q + 2;
  return p;
}
int main(void)
{
  int i, j, *p, *q;
  i = 4;
  j = 6;
  q = foo(&i, &j);
  p = q;
  *p = i + 1;
  printf("%d, %d, %d, %d", i, j, *p, *q);
}