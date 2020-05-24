#include <stdio.h>

int main ()
{
  int age;
  printf ("Enter your age: ");
  scanf ("%d", &age);

  if (age > 18)
  printf("Wow you're already a big boy. Age is %d\n", age);
  else if (age < 18)
    printf("Wow you're already a big boy. Age is %d\n", age);
  return 0;
}
