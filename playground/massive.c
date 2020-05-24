#include <stdio.h>

int main ()
{
  char array [5] = {'H', 'e', 'l', 'l', 'o'};
  char arr[] = "Hello";
  int nums [3] = {23, 56, 12};
  printf ("element is %d\n", nums[0]);

  for (int i = 0; i < 5; i++)
    {
      printf ("%c", arr[i]);
    }
  printf ("\n");
  
  return 0;
}
