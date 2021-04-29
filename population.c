#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
  do
  {
      n = get_int("Starting Year : ");
  }
  while (n < 9);

   int e;
  do
  {
      e = get_int("Ending Year : ");
  }
  while (e < n);
  int years=0;
  if(e!=n)
  {
      do
      {
          n=(n+n/3 - n/4);
          years++;
      }
      while(n<e);

  }

  printf("Years : %i \n",years);

    //Created By Alim Lalani 
}