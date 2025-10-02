#include "libft.h"
#include <string.h>
#include <stdio.h>

#define MAX_LEN 80

char source[5 ] = "joke";
char target[ 10] = "fruit";
int main(void)
{
  printf( "Before memcpy, target is \"%s\"\n", target );
  memcpy( target, source, 5);
  printf( "After memcpy, target becomes \"%s\"\n", target );

  char target[MAX_LEN]="fruit";
  printf( "Before ft_memcpy, target is \"%s\"\n", target );
  ft_memcpy( target, source, 5);
  printf( "After ft_memcpy, target becomes \"%s\"\n", target );

}

/*********************  Expected output:  ************************

Before memcpy, target is "This is the target string"
After memcpy, target becomes "This is the source string"
*/
