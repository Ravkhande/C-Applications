#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void OneDimentional()
{
    int size = 0, i = 0;
    int *Arr = NULL;
    
    printf("Enter the size\n");
    scanf("%d",&size);
    
    Arr = (int *)malloc(size * sizeof(int));        // Allocatoion
    
    printf("Enter the elements\n");                 // Input accept
    for(i = 0; i<size ;i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("Entered elements are \n");          // Display data
    for(i = 0; i < size; i++)
    {
        printf("%d\n",Arr[i]);
    }
    
    free(Arr);                                             // Free the memory
}
void TwoDimentional()
{
    int row = 0, col = 0, i = 0, j = 0;
    int ** Arr = NULL;                              // Step 1
    
    printf("Enter number of rows\n");
    scanf("%d",&row);
    
    printf("Enter number of columns\n");
    scanf("%d",&col);

    Arr = (int **)malloc(row * sizeof(int *));      // Step 2
    
    for(i = 0; i<row; i++)
    {
        Arr[i] = (int *)malloc(col * sizeof(int));      // step 3
    }
    
    printf("Enter the elements\n");
    for(i = 0; i< row; i++)
    {
        for(j = 0; j< col;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("Elements are\n");
    for(i = 0; i< row; i++)
    {
        for(j = 0; j< col;j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
    
    // Memory dellocation of step 3
    for(i = 0; i<row; i++)
       {
           free(Arr[i]);      // step 3
       }
    
    // Memory delallocation of step 2
    free(Arr);
}

void ThreeDimentional()
{
    int first = 0, second = 0, third = 0, i = 0, j =0, k = 0;
    int ***Arr = NULL;  // Step 1
    
    printf("Enter the values of three dimentions\n");
    scanf("%d%d%d",&first,&second,&third);
    
    // Step 2
    Arr = (int ***)malloc(first*sizeof(int **));
    
    // Step 3
    for(i = 0; i< first;i++)
    {
        Arr[i] = (int **)malloc(second*sizeof(int *));
    }
    
    // Step 4
    for(i = 0; i < first; i++)
    {
        for(j = 0; j < second; j++)
        {
            Arr[i][j] = (int *)malloc(third * sizeof(int));
        }
    }
    
    printf("Please eneter the elements\n");
    
    // Accept the values
    for(i = 0; i < first; i++)
    {
        for(j = 0; j < second; j++)
        {
            for(k = 0 ; k < third ;k++)
            {
                scanf("%d",&Arr[i][j][k]);
            }
        }
    }
    
    printf("Enterred elements are\n");
    for(i = 0; i < first; i++)
    {
        for(j = 0; j < second; j++)
        {
            for(k = 0 ; k < third ;k++)
            {
                printf("%d\t",Arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n--------------------------\n");
    }
    
    // Free for Step 4
    for(i = 0; i < first; i++)
    {
        for(j = 0; j < second; j++)
        {
            free(Arr[i][j]);
        }
    }
    
    // Free for Step 3
      for(i = 0; i< first;i++)
      {
          free(Arr[i]);
      }
    
    // Free for Step 2
    free(Arr);
}

int main()
{
    int choice = 0;
    printf("Enter your choice \n");
    printf("1 : One dimentional\n2: Two dimentional \n3: Three Dimentional\n");
    
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            OneDimentional();
            break;
        case 2:
            TwoDimentional();
            break;
        case 3:
            ThreeDimentional();
            break;
        default:
            printf("Wrong choice\n");
            break;
    }
    
    return 0;
}








/*
int Arr[2][3][4];
Arr is 3 dimentional array which contains 2 two dimentional arrays
 each 2 dimentional array contains 3 one dimentional array
 each one dimentional array contains 4 elemnts ib it
 and each element is of type integer
 */








































