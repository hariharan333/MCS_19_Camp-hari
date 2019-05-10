/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
 
int main()
{
  int n, arr[1000], i, d, t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  for (i = 1 ; i <= n - 1; i++) {
    d = i;
    while ( d>0 && array[d-1] > array[d]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
      d--;
    }
  }
  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}
