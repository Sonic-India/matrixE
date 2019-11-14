#include <stdio.h>

void debug(int a[3][3])
{
    int i,j;
    printf("\n Debug for :\n\n");
     for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Debug End:\n\n");
}

int main() {
    int a[3][3] = {
        {2, 3, 4},
        {3, 2, 1},
        {2,2,4}
    };

    int b[3][3] = {
        {2, 3, 4},
        {3, 2, 1},
        {2,2,4}

    };

    int i, j,n=0;
    /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

row2:
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

        }

    }
    //row2
    if(a[1][0]!=0){
   for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[0][0]) - (b[0][j]*b[i+1][0]));
            printf("\nDebug i&j a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }

    }
}
debug(a);
row3:


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

        }

    }

    if(a[2][0]!=0 ||a[2][1]!=0)
    {
    for (i = 1; i < 2; i++) {
        for (j = 1; j < 3; j++)
         {


            a[i+1][j]=((b[i+1][j] * b[1][1]) - (b[i][j] * b[2][1]));


        }

    }
    }

        if(a[1][0]!=0)
            goto row2;
        if(a[2][0]||a[2][1])
            goto row3;



   printf("\n");
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
