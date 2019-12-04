#include <stdio.h>


int r1_r2(int a[3][3])
{
    printf("\nSwapping Started\n");
    int  temp[3][3];
    int i,j;
    temp[0][0]=a[1][0];
    temp[0][1]=a[1][1];
    temp[0][2]=a[1][2];
    temp[1][0]=a[0][0];
    temp[1][1]=a[0][1];
    temp[1][2]=a[0][2];
    a[0][0]=temp[0][0];
    a[0][1]=temp[0][1];
    a[0][2]=temp[0][2];
    a[1][0]=temp[1][0];
    a[1][1]=temp[1][1];
    a[1][2]=temp[1][2];
        /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSwapping Ended\n");
    return a[3][3];
    //printf("\nSwapping Ended");
}

int r1_r3(int a[3][3])
{
    printf("\nSwapping Started\n");
    int  temp[3][3];
    int i,j;
    temp[0][0]=a[2][0];
    temp[0][1]=a[2][1];
    temp[0][2]=a[2][2];
    temp[2][0]=a[0][0];
    temp[2][1]=a[0][1];
    temp[2][2]=a[0][2];
    a[0][0]=temp[0][0];
    a[0][1]=temp[0][1];
    a[0][2]=temp[0][2];
    a[2][0]=temp[2][0];
    a[2][1]=temp[2][1];
    a[2][2]=temp[2][2];
        /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSwapping Ended\n");
    return a[3][3];
}

int r2_r3(int a[3][3])
{
    printf("\nSwapping Started\n");
    int  temp[3][3];
    int i,j;
    temp[1][0]=a[2][0];
    temp[1][1]=a[2][1];
    temp[1][2]=a[2][2];
    temp[2][0]=a[1][0];
    temp[2][1]=a[1][1];
    temp[2][2]=a[1][2];
    a[1][0]=temp[1][0];
    a[1][1]=temp[1][1];
    a[1][2]=temp[1][2];
    a[2][0]=temp[2][0];
    a[2][1]=temp[2][1];
    a[2][2]=temp[2][2];
        /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSwapping Ended\n");
    return a[3][3];
}


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
    int a[3][3];

    int b[3][3];
     int i, j,n=0;
for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            printf("\n Enter the Array a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
}

for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

        }

    }




    /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    if (a[0][0]==0){
           if(a[1][0]!=0)
                r1_r2(a);
           else if(a[2][0]!=0)
                r1_r3(a);
}


if(a[1][0]==0&&a[1][1]==0&&a[2][0]==0&&a[2][1]!=0)
r2_r3(a);


for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

        }

    }


row2:
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

        }

    }
    //row2
    if(a[1][0]!=0)
    {
   for (i = 0; i < 1; i++)
      {
       if((b[i][0]>0 && b[i+1][0]>0)||(b[i][0]<0 && b[i+1][0]<0))
       {
        for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[0][0]) - (b[0][j]*b[i+1][0]));
            printf("\nDebug i&j a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }

    }
       else
       {
           for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[0][0]) + (b[0][j]*b[i+1][0]));
            printf("\nDebug i&j a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);
         }
       }
     }
    } for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

        }

    }

debug(a);
    if(a[2][0]!=0)
    {
   for (i = 0; i < 1; i++)
      {
       if((b[i][0]>0 && b[i+2][0]>0)||(b[i][0]<0 && b[i+2][0]<0))
       {
        for (j = 0; j < 3; j++)
         {

            a[i+2][j]=((b[i+2][j] * b[0][0]) - (b[0][j]*b[i+2][0]));
            printf("\nDebug i&j a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }

    }
       else
       {
           for (j = 0; j < 3; j++)
         {

            a[i+2][j]=((b[i+2][j] * b[0][0]) + (b[0][j]*b[i+2][0]));
            printf("\nDebug i&j a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }
       }
     }
    } for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

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

    if(a[2][1]!=0)
    {
    for (i = 1; i < 2; i++)
      {
       if((b[i][1]>0 && b[i+1][1]>0)||(b[i][1]<0 && b[i+1][1]<0))
       {
        for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[1][1]) - (b[i][j]*b[2][1]));
            printf("\nDebug i&j a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }

    }
       else
       {
           for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[1][1]) + (b[i][j]*b[2][1]));
            printf("\nDebug i&j a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }
       }
    }
    }for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
         {
            b[i][j]=a[i][j];

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
