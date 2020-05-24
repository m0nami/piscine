#include <stdio.h>
void print (float number)
{
  printf ("Your number is %f BITCH\n", number);

}

float del (float a, float b)
{
  float res;

  if (b != 0)
    {
      res = a / b;
      printf ("Congratulations! Your result %f.\n", res);
    }
      else
    {
    res = 0;
  
    printf ("You're an idiot. It is impossible to divide by zero !!!\n");
    }
  return res;
}

int main ()
{
  int num_1, num_2;
  scanf("%d", &num_1);
  scanf("%d", &num_2);
  float result = del (num_1, num_2);
  print (result);


return 0;
}
