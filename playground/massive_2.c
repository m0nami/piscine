#include <stdio.h>

int main ()
{
  int nums [3][2] = {{4, 98}, {43, 9}, {45, 19}};

  //  nums[0][0] = 23;
  // printf ("%d\n", nums [0][0]);

     for (int i = 0; i < 3; i++)
       {
	 for (int j = 0; j < 2; j++)
	   {
        printf ("%d\n", nums[i][j]);
	   }
       }

  return 0;
}
