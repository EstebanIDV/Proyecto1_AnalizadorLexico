//
// Created by eidur on 5/19/2022.
//
#include<stdio.h>
#include<stdlib.h>

const int CITY=2;
const int WEEK=7;


// function to add two 3x3 matrix
void add(int m[3][3], int n[3][3], int sum[3][3])
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            sum[i][j] = m[i][j] + n[i][j];
}

// function to subtract two 3x3 matrix
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            result[i][j] = m[i][j] - n[i][j];
}

// function to multiply two 3x3 matrix
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            result[i][j] = 0; // assign 0
            // find product
            for (int k = 0; k < 3; k++)
                result[i][j] += m[i][k] * n[k][j];
        }
    }
}

// function to find transpose of a 3x3 matrix
void transpose(int matrix[3][3], int trans[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            trans[i][j] = matrix[j][i];
}

// function to display 3x3 matrix
void display(int matrix[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d\t",matrix[i][j]);

        printf("\n"); // new line
    }
}


void sum(int m[3][3])
{
    int rowsum, columnsum;

    for(int i=0; i<3; i++)
    {
        rowsum = 0;
        columnsum = 0;

        for(int j=0;j<3;j++)
        {
            rowsum += m[i][j];
            columnsum += m[j][i];
        }

        printf("Sum of row %d = %d,\t", i, rowsum);
        printf("Sum of Column %d = %d\n", i, columnsum);
    }
}

void sumPosNeg(){
    int a[100], n, i, psum=0, nsum=0;

    printf("Enter array size [1-100]: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0) nsum += a[i];
        else psum += a[i];
    }

    printf("All Positive numbers sum: %d",psum);
    printf("\nAll Negative numbers sum: %d",nsum);
    printf("\nTotal sum = %d", psum+nsum);
}

void totavggrt(){
    int a[100], n, i, sum=0;
    float avg;

    printf("Enter array size [1-100]: ");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);

    // finding sum and average
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }

    avg = (float)sum/n;
    printf("Sum=%d \t Average=%.2f", sum, avg);

    // finding numbers greater than average
    printf("\nNumbers greater than average are:\n");
    for(i=0; i<n; i++)
    {
        if(a[i]>avg) printf("%d\t",a[i]);
    }

}

void smalllargest(){
    int a[100], n, i, max, min, maxPos, minPos;

    printf("Enter array size [1-100]: ");
    scanf("%d",&n);
    maxPos=minPos=0;

    //Take array elements and find min and max
    printf("Enter array elements: ");
    scanf("%d",&a[0]);
    max=min=a[0];
    for(i=1; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            min=a[i];
            minPos=i;
        }
        if(min>a[i])
        {
            min=a[i];
            minPos=i;
        }
    }

    printf("Largest element is %d at %d position.\n", max,maxPos);
    printf("Smallest element is %d at %d position.", min,minPos);
}


void sortArray(){
    int n, i, j;

    printf("Enter array range(no of array element): ");
    scanf("%d",&n);

    int  arr[n];

    printf("Enter the array element: ");

    // take input(Array elements)
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // now, sort array elements
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];

                arr[i]=arr[j];

                arr[j]=temp;
            }
        }
    }

    // display sorted array
    printf("Sorted array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}

// main function
int main()
{
    // matrix
    int a[][3] = { {5,6,7}, {8,9,10}, {3,1,2} };
    int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int c[3][3];

    // print both matrix
    printf("First Matrix:\n");
    display(a);
    printf("Second Matrix:\n");
    display(b);

    // variable to take choice
    int choice;

    // menu-driven
    do
    {
        // menu to choose the operation
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(a, b, c);
                printf("Sum of matrix: \n");
                display(c);
                break;
            case 2:
                subtract(a, b, c);
                printf("Subtraction of matrix: \n");
                display(c);
                break;
            case 3:
                multiply(a, b, c);
                printf("Multiplication of matrix: \n");
                display(c);
                break;
            case 4:
                printf("Transpose of the first matrix: \n");
                transpose(a, c);
                display(c);
                printf("Transpose of the second matrix: \n");
                transpose(b, c);
                display(c);
                break;
            case 5:
                printf("Thank You.\n");
            default:
                printf("Invalid input.\n");
                printf("Please enter the correct input.\n");
        }
    }while(choice!=5);

    // take a 3x3 matrix
    int d[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    // print matrix
    printf("Entered matrix is:\n");
    display(d);

    // find row sum and column sum
    sum(d);


    // declare and initialize an array
    int arr[3][2] = {{50,60},{70,80},{90,100}};

    // display 2D array using for loop
    printf("The Array elements are:\n");

    // outer loop for row
    for(int i=0; i<3; i++) {
        // inner loop for column
        for(int j=0; j<2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // new line
    }


    int temperature[CITY][WEEK];
    int i ,j;

    /*Take input from user*/
    for(i=0;i<CITY;i++)
    {
        for(j=0;j<WEEK;j++)
        {
            printf("City[%d], Day[%d]: ", i+1, j+1);
            scanf("%d", &temperature[i][j] );
        }
        printf("\n");
    }

    /*Display output*/
    printf("Displaying Values:\n\n");

    for(i=0;i<CITY;i++)
    {
        for(j=0;j<WEEK;j++)
        {
            printf("City[%d], Day[%d]=%d\n", i+1, j+1, temperature[i][j]);
        }
        printf("\n");
    }

    int m, n, largest, smallest;
    int largrowloc, largcolumnloc, smallrowloc, smallcolumnloc;

    // take number of rows and columns
    printf("Enter number of row and column: ");
    scanf("%d %d",&m,&n);

    // declare array by given number of rows and columns
    int arr2[m][n] ;

    // take array elements as input
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter arr[%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    // display array (optional)
    printf("Entered 2D Array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    // assume first element is
    // largest and smallest
    largest=arr[0][0];
    smallest=arr[0][0];

    // compare with all elements
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(largest<arr[i][j])
            {
                largest=arr[i][j];
                largrowloc=i;  //row location of largest element
                largcolumnloc=j;   //column location of largest element
            }

            if(smallest>arr[i][j])
            {
                smallest=arr[i][j];
                smallrowloc=i;  //row location of smallest element
                smallcolumnloc=j;  //column location of smallest element
            }
        }
    }

    // display results
    printf("\n"); // new line
    printf("Largest element in array is %d in location arr[%d][%d]\n",
           largest, largrowloc, largcolumnloc);
    printf("Smallest element in array is %d in location arr[%d][%d]\n",
           smallest, smallrowloc, smallcolumnloc);

    int e[20];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for( i=0; i<n; i++)
    {
        scanf("%d",&e[i]);
    }

    printf("Even numbers in the array are: \n");
    for( i=0; i<n; i++)
    {
        if(e[i]%2==0)
            printf("%d ", e[i]);
    }

    printf("\nOdd numbers in the array are: \n");
    for(i=0; i<n; i++)
    {
        if(e[i]%2!=0)
            printf("%d ", e[i]);
    }

    int f[100], sum=0, ecount=0, ocount=0;

    printf("Enter array size [1-100]: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&f[i]);
        sum += f[i];
        if(f[i]%2==0) ecount++;
        else ocount++;
    }

    printf("Total Sum: %d",sum);
    printf("\nEven numbers: %d",ecount);
    printf("\nOdd numbers = %d", ocount);


    int g[100], positive=0, negative=0, zero=0;

    printf("Enter array size [1-100]: ");
    scanf("%d", &n);
    printf("Enter %d elements: ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &g[i]);
        if(g[i]>0) positive++;
        else if(g[i]==0) zero++;
        else negative++;
    }

    printf("Positive number count is %d", positive);
    printf("\nNegative number count is %d", negative);
    printf("\nZeros count is %d", zero);

    sumPosNeg();

    totavggrt();

    smalllargest();

    int z[100], fmax, smax, fmin, smin;

    printf("Enter array size [1-100]: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    scanf("%d",&z[0]);
    fmax=fmin=z[0];

    // finding first minimum and maximum
    for(i=1; i<n; i++)
    {
        scanf("%d",&z[i]);
        if(fmax<z[i]) fmax=z[i];
        if(fmin>z[i]) fmin=z[i];
    }

    // assigning second minimum and maximum
    smax=fmin;
    smin=fmax;

    // finding second minimum and maximum
    for(i=0; i<n; i++)
    {
        if(z[i]<fmax && z[i]>smax) smax=z[i];
        if(z[i]>fmin && z[i]<smin) smin=z[i];
    }

    printf("First maximum: %d",fmax);
    printf("\nSecond maximum: %d",smax);
    printf("\nFirst minimum = %d",fmin);
    printf("\nSecond minimum = %d",smin);


    sortArray();

    int w[100], element;

    printf("Enter array size [1-100]: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i=0; i<n; i++)scanf("%d", &w[i]);

    printf("Enter element to search: ");
    scanf("%d",&element);

    for(i=0; i<n; i++)
    {
        if(w[i]==element)
        {
            printf("%d found at position %d", element, i+1);
            return 0;
        }
    }

    printf("%d not found.", element);

    return 0;

}

