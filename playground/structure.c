#include <stdio.h>

struct student
{
  int id;
  float percentege;
  char name;
};


int main ()
{
  struct student maks;
  maks.id = 1;
  maks.percentege = 23.4;
  maks.name = 'M';

  struct student oleg;
  oleg.id = 2;
  oleg.percentege = 89.3;
  oleg.name = 'O';

  printf("Maks id is %d\n", maks.id);
  printf("Oleg id is %d\n", oleg.id);

    return 0;
}
