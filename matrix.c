#include <stdio.h>
#include <stdlib.h>
int **matrx();
int main()
{
    int **p;
    int i,j,k;
    int mat[10][5];
    printf("Entering the FUNCTION\n");

    p=matrx();
    printf("Copying the Matrix in a Buffer\n");
    printf("Matrix ==>\n");
     for(i=0;i<10;i++)
    {

        for(j=0;j<5;j++)
        {
            mat[i][j]=p[i][j];
        printf("%d\t",mat[i][j]);
        }
         printf("\n");
    }
    printf("\nGenerating the Pattern\n");
    for(i=0;i<10;i++)
    {
        if(mat[i][0]==(i+1)&& mat[i][0]<=5)
        {
            for(j=0;j<=i;j++)
            printf("*\t");
        printf("\n");
        }

        else{
            for(k=j;k>0;k--)
            {
             printf("*\t");
            }
            j=j-1;
        printf("\n");

        }
         printf("\n");

}

    return 0;
}

int **matrx()
{
    int **ptr;
    int i,j;
     ptr=malloc(10*sizeof(int));
    printf("Creating the 10x5 matrix\n");
     for(i=0;i<10;i++)
     {
       ptr[i]=malloc(5*sizeof(int));
     }
    for(i=0;i<10;i++)
    {
         //printf("\n");
        for(j=0;j<5;j++)
        {
            ptr[i][j]=i+1;
       }

    }


return ptr;
}
