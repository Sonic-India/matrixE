#include <stdio.h>
#include <time.h>

	int steps=0;

int r1_r2(int a[3][3])
{
    printf("\nSwapping Started R1 R2\n");
    int  temp[3][3];
    int i,j,x;
    for (i=0, x=1 ; i<=1 && x>=0; i++,x--)
	{

		for(j=0;j<3;j++)
		{
			temp[i][j]=a[x][j];
		}

	}

	for (i=0;i<=1;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=temp[i][j];
		}
	}


        /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSwapping Ended\n");
	++steps;
    return a[3][3];

}

int r1_r3(int a[3][3])
{
    printf("\nSwapping Started R1 R3\n");
    int  temp[3][3];
    int i,j,x;
    for (i=0, x=2 ; i<=2 && x>=0; i++ , x--)
	{

		for(j=0;j<3;j++)
		{
			temp[i][j]=a[x][j];
		}
		i++;
		x--;

	}

    for (i=0;i<=2;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=temp[i][j];
		}
		i++;
	}

        /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSwapping Ended\n");
	++steps;
    return a[3][3];
}

int r2_r3(int a[3][3])
{
    printf("\nSwapping Started R2 R3\n");
    int  temp[3][3];
    int i,j,x;
	for (i=1, x=2 ; i<=2 && x>0; i++,x--)
	{

		for(j=0;j<3;j++)
		{
			temp[i][j]=a[x][j];
		}

	}

	for (i=1;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=temp[i][j];
		}
	}

        /* display array contents */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSwapping Ended \n");
	++steps;
    return a[3][3];
}


void debug(int a[3][3])
{
    int i,j;
    printf("\n Matrix Display :\n\n");
     for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix Display End:\n\n");
}

int main() {
    int a[3][3];

    int b[3][3];
    int i, j,n=0;

for(i=0;i<3;i++){  //Input Matrix
        for(j=0;j<3;j++)
        {
            printf("\n Enter the Array a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
}


    /* clock_t clock(void) returns the number of clock ticks
       elapsed since the program was launched.To get the number
       of seconds used by the CPU, you will need to divide by
       CLOCKS_PER_SEC.where CLOCKS_PER_SEC is 1000000 on typical
       32 bit system.  */
    clock_t start, end;
    /* Recording the starting clock tick.*/
    start = clock();

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

for (i=0 ;i<3;i++){
    if (a[0][0]==0)
        {
           if(a[1][0]!=0)
                r1_r2(a);
           else if(a[2][0]!=0)
                r1_r3(a);
         }


    if(a[1][0]==0&&a[1][1]==0&&a[2][0]==0&&a[2][1]!=0)
        r2_r3(a);

    if(a[1][0]==0&&a[1][1]==0&&a[2][0]!=0&&a[2][1]!=0)
        r2_r3(a);
}


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

    if(a[1][0]!=0)
    {
   for (i = 0; i < 1; i++)
      {
       if((b[i][0]>0 && b[i+1][0]>0)||(b[i][0]<0 && b[i+1][0]<0))
       {
        for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[0][0]) - (b[0][j]*b[i+1][0]));
			++steps;
            printf("\n Step : a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }

    }
       else
       {
           for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[0][0]) + (b[0][j]*b[i+1][0]));
			++steps;
            printf("\n Step : a[%d][%d]= %d",i,j, a[i][j]);
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

    if (a[0][0]==0){
           if(a[1][0]!=0)
                r1_r2(a);
           else if(a[2][0]!=0)
                r1_r3(a);
}


if(a[1][0]==0&&a[1][1]==0&&a[2][0]==0&&a[2][1]!=0)
r2_r3(a);
if(a[1][0]==0&&a[1][1]==0&&a[2][0]!=0&&a[2][1]!=0)
r2_r3(a);


    if(a[2][0]!=0)
    {
   for (i = 0; i < 1; i++)
      {
       if((b[i][0]>0 && b[i+2][0]>0)||(b[i][0]<0 && b[i+2][0]<0))
       {
        for (j = 0; j < 3; j++)
         {

            a[i+2][j]=((b[i+2][j] * b[0][0]) - (b[0][j]*b[i+2][0]));
			++steps;
            printf("\n Step :  a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }

    }
       else
       {
           for (j = 0; j < 3; j++)
         {

            a[i+2][j]=((b[i+2][j] * b[0][0]) + (b[0][j]*b[i+2][0]));
			++steps;
            printf("\n Step :  a[%d][%d]= %d",i,j, a[i][j]);
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

    if (a[0][0]==0){
           if(a[1][0]!=0)
                r1_r2(a);
           else if(a[2][0]!=0)
                r1_r3(a);
}


if(a[1][0]==0&&a[1][1]==0&&a[2][0]==0&&a[2][1]!=0)
r2_r3(a);
if(a[1][0]==0&&a[1][1]==0&&a[2][0]!=0&&a[2][1]!=0)
r2_r3(a);


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
			++steps;
            printf("\n Step :  a[%d][%d]= %d",i,j, a[i][j]);
            debug(a);
         //   printf(" %d", a[i][j]);

        }

    }
       else
       {
           for (j = 0; j < 3; j++)
         {

            a[i+1][j]=((b[i+1][j] * b[1][1]) + (b[i][j]*b[2][1]));
			++steps;
            printf("\n Step :  a[%d][%d]= %d",i,j, a[i][j]);
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

    if (a[0][0]==0){
           if(a[1][0]!=0)
                r1_r2(a);
           else if(a[2][0]!=0)
                r1_r3(a);
}


if(a[1][0]==0&&a[1][1]==0&&a[2][0]==0&&a[2][1]!=0)
r2_r3(a);
if(a[1][0]==0&&a[1][1]==0&&a[2][0]!=0&&a[2][1]!=0)
r2_r3(a);

        if(a[1][0]!=0)
            goto row2;
        if(a[2][0]||a[2][1])
            goto row3;


   printf("\n============================Final Matrix============================\n");
   printf("\n");
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
	printf("\n\n Steps taken for Completing this Problem : %d\n\n ",steps);
	// Recording the end clock tick.
    end = clock();

    // Calculating total time taken by the program.
    double time_taken =(double)(end - start) / (CLOCKS_PER_SEC);
    printf( "\nTime taken by program is : %.5lf sec\n" , time_taken );
 //  cout << " sec " << endl;
	printf("\n====================================================================\n");

    return 0;
}
