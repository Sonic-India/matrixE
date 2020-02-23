#include <stdio.h>

#include <time.h>

#include <stdlib.h>

#include<math.h>

#include<process.h>

int steps = 0;

#include"echelon.h"

#include"echelon.c"


int main() {
  int a[3][3];

  int i, j, n = 0;
  int choice = 0;
  int no = 0, r = 0;
  start:
    system("cls");
  printf("\n       Main Menu    ");
  printf("\n 1. Echelon ");
  printf("\n 2. Rank");
  printf("\n 3. Determinant");
  printf("\n 4. Eigen Values");
  printf("\n 5. Exit");
  printf("\n Enter the choice :  ");
  scanf("%d", & choice);
  if (choice == 1 || choice == 2) {
    for (i = 0; i < 3; i++) { //Input Matrix
      for (j = 0; j < 3; j++) {
        printf("\n Enter the Array a[%d][%d]: ", i, j);
        scanf("%d", & a[i][j]);
      }
    }
    echelon(a);
  }
  if (choice == 2) {
    for (i = 0; i < 3; i++) {
      no = 0;
      for (j = 0; j < 3; j++) {
        if (a[i][j] == 0) {
          no++;
        }
      }
      if (no != 3)
        r++;
    }
    printf("\n");
    printf("\n====================================================================\n");
    printf("\n The Rank of matrix is %d", r);
    printf("\n====================================================================\n");
    printf("\n");
  }
  if (choice == 3) {
    long int det = 0;
    for (i = 0; i < 3; i++) { //Input Matrix
      for (j = 0; j < 3; j++) {
        printf("\n Enter the Array a[%d][%d]: ", i, j);
        scanf("%d", & a[i][j]);
      }
    }

    det = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
    printf("\n The Determinant is %d ", det);

  }
  if (choice == 4) {
    double det = 0;
    double b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, p1, r1, s1, t1, u1, o;
    double x1, x2, x3, a1 = 1;
    int w1;
    for (i = 0; i < 3; i++) { //Input Matrix
      for (j = 0; j < 3; j++) {
        printf("\n Enter the Array a[%d][%d]: ", i, j);

        scanf("%d", & a[i][j]);
      }
    }

    b1 = (-1) * (a[0][0] + a[1][1] + a[2][2]);

    c1 = ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) + ((a[0][0] * a[2][2]) - (a[2][0] * a[0][2])) + ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));

    det = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));

    printf("\n The Determinant is %d ", det);

    d1 = (-1) * det;

    printf("b=%lf c=%lf d=%lf", b1, c1, d1);

    e1 = 2.7182818284590;

    f1 = ((3 * c1 / a1) - (b1 * b1 / (a1 * a1))) / 3; // ** bracketed (a*a)!

    g1 = ((2 * b1 * b1 * b1 / (a1 * a1 * a1)) - (9 * b1 * c1 / (a1 * a1)) + (27 * d1 / a1)) / 27; // ** brackets!

    h1 = (g1 * g1 / 4) + (f1 * f1 * f1 / 27);

    i1 = sqrt(((g1 * g1 / 4) - h1));

    j1 = exp(log10(i1) / log10(e1) / 3);

    k1 = acos((-1) * (g1 / (2 * i1)));

    l1 = j1 * (-1);

    m1 = cos(k1 / 3);

    n1 = sqrt(3) * sin(k1 / 3);

    p1 = (b1 / 3 * a1) * (-1);

    r1 = (-1) * (g1 / 2) + sqrt(h1);

    s1 = exp(log10(r1) / log10(e1) / 3);

    t1 = (-1) * (g1 / 2) - sqrt(h1);

    u1 = exp(log10(t1) / log10(e1) / 3);

    if (h1 > 0) w1 = 1;

    if (h1 <= 0) w1 = 3;

    if ((f1 == 0) && (g1 == 0) && (h1 == 0)) w1 = 2;

    switch (w1) {

    case 1:

      x1 = (s1 + u1) - (b1 / 3 * a1);

      x2 = (-1) * (s1 + u1) / 2 - (b1 / 3 * a1);

      x3 = (s1 - u1) * sqrt(3) / 2;

      printf("\n Eigen Values : %lf,%lf,%lf", x1, x2, x3);

      break;

    case 2:

      x1 = exp(log10(d1 / a1) / log10(e1) / 3) * (-1);

      printf("\n Eigen values : %lf", x1);

      break;

    case 3:

      x1 = 2 * j1 * cos(k1 / 3) - (b1 / 3 * a1);

      x2 = l1 * (m1 + n1) + p1;

      x3 = l1 * (m1 - n1) + p1;

      printf("\nEigen Values : %lf,%lf,%lf \n", x1, x2, x3);

      break;
    }
  }

  system("pause");

  if (choice == 5)

    exit(0);

  return 0;

}
