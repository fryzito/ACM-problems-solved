/* time example */
#include <stdio.h>
#include <time.h>

int main ()
{
  time_t seconds;
  seconds = time (NULL);
  printf ("%ld hours since January 1, 1970", seconds/3600);
  
  return 0;
}
