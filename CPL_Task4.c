#include <stdio.h>

int main() {
  int x, n, m, i, l;
  printf("Enter the number of rows: ");
  scanf("%d", & n);
  printf("Enter the number of columns: ");
  scanf("%d", & m);

  int array[n][m];
  srand(time(NULL));

  for (i = 0; i < n; ++i) {
    for (l = 0; l < m; ++l) {
      array[i][l] = rand() % 10;

      printf("%d ", array[i][l]);
    }

    printf("\n");
  }

  printf("Enter the number 'x' that you want to search for: ");

  scanf("%d", & x);

  for (i = 0; i < n; ++i)

    for (l = 0; l < m; ++l)

      if (x == array[i][l]) {
        printf("This number exists");
        return 0;
      }
      else {
    printf("This number does not exist");
    return 0;
  }

  return 0;
}
