#include <stdio.h>

int main ()
{
  int res;
  scanf ("%d", &res);
  switch(res)
    {
    case 1:
      printf ("Ooops it's %d, try again\n", res);
      break;
      
    case 2:
      printf ("It's %d, keep up the good work!\n", res);
      break;
      
      case 3:
      printf ("Try again, it may work!\n", res);
      break;

    default:
      printf ("I LOVE U\n");
    }
    return 0;
}
