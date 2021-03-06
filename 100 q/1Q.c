
// gcc -std=gnu11 -Wall -Wextra -pedantic-errors -O 1Q.c -lm

#include <stdio.h>
#include <assert.h>

int main(){

  int array[100], size, c, location = 0;

  printf("Enter the number of elements in array\n");
  assert(scanf("%d", &size) > 0 );

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    assert(scanf("%d", &array[c]) == size);

  for (c = 1; c < size; c++)
    if (array[c] > array[location])
      location = c;

  printf("Maximum element is %d.\n", array[location]);
  
  return 0;
}