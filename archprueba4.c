/* Implementing Bubble sort in a C Program
 * Written by: Chaitanya.
 */
//#include <stdio.h>
//#include <string.h>


int main(){
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//#include <ctype.h>
//#include <string.h>

    int count, temp, i, j, number[30];

    printf("How many numbers are u going to enter?: ");
    scanf("%d",&count);

    printf("Enter %d numbers: ",count);

    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

    /* This is the main logic of bubble sort algorithm
     */
    for(i=count-2;i>=0;i--){
        for(j=0;j<=i;j++){
            if(number[j]>number[j+1]){
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }

    printf("Sorted elements: ");
    for(i=0;i<count;i++)
        printf(" %d",number[i]);

    return 0;
}

int main2(){

    /* Here i & j for loop counters, temp for swapping,
     * count for total number of elements, number[] to
     * store the input numbers in array. You can increase
     * or decrease the size of number array as per requirement
     */
    int i, j, count, temp, number[25];

    printf("How many numbers u are going to enter?: ");
    scanf("%d",&count);

    printf("Enter %d elements: ", count);
    // This loop would store the input numbers in array
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

    // Implementation of insertion sort algorithm
    for(i=1;i<count;i++){
        temp=number[i];
        j=i-1;
        while((temp<number[j])&&(j>=0)){
            number[j+1]=number[j];
            j=j-1;
        }
        number[j+1]=temp;
    }

    printf("Order of Sorted elements: ");
    for(i=0;i<count;i++)
        printf(" %d",number[i]);

    return 0;
}

int main3(){
    /* Here i & j for loop counters, temp for swapping,
     * count for total number of elements, number[] to
     * store the input numbers in array. You can increase
     * or decrease the size of number array as per requirement
     */
    int i, j, count, temp, number[25];

    printf("How many numbers u are going to enter?: ");
    scanf("%d",&count);

    printf("Enter %d elements: ", count);
    // Loop to get the elements stored in array
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

    // Logic of selection sort algorithm
    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            if(number[i]>number[j]){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }

    printf("Sorted elements: ");
    for(i=0;i<count;i++)
        printf(" %d",number[i]);

    return 0;
}

void quicksort(int number[25],int first,int last){
    int i, j, pivot, temp;

    if(first<last){
        pivot=first;
        i=first;
        j=last;

        while(i<j){
            while(number[i]<=number[pivot]&&i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }

        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);

    }
}

int main4(){
    int i, count, number[25];

    printf("How many elements are u going to enter?: ");
    scanf("%d",&count);

    printf("Enter %d elements: ", count);
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

    quicksort(number,0,count-1);

    printf("Order of Sorted elements: ");
    for(i=0;i<count;i++)
        printf(" %d",number[i]);

    return 0;
}

int main5()
{
    int num1, num2, num3;
    int *p1, *p2, *p3;

    //taking input from user
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter Third Number: ");
    scanf("%d",&num3);

    //assigning the address of input numbers to pointers
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if(*p1 > *p2)
    {
        if(*p1 > *p3)
        {
            printf("%d is the largest number", *p1);
        }
        else
        {
            printf("%d is the largest number", *p3);
        }
    }
    else
    {
        if(*p2 > *p3)
        {
            printf("%d is the largest number", *p2);
        }
        else
        {
            printf("%d is the largest number", *p3);
        }
    }
    return 0;
}

int main6()
{
    char str[100];
    char *p;
    int  vCount=0,cCount=0;

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    //assign base address of char array to pointer
    p=str;

    //'\0' signifies end of the string
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
           ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        //increase the pointer, to point next character
        p++;
    }

    printf("Number of Vowels in String: %d\n",vCount);
    printf("Number of Consonants in String: %d",cCount);
    return 0;
}

int main7()
{
    char str[100];
    char *p;

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    /* Assigning the base address str[0] to pointer
     * p. p = str is same as p = str[0]
     */
    p=str;

    printf("The input string is: ");
    //'\0' signifies end of the string
    while(*p!='\0')
        printf("%c",*p++);

    return 0;
}

// function to swap the two numbers
void swap(int *x,int *y)
{
    int t;
    t   = *x;
    *x   = *y;
    *y   =  t;
}

int main8()
{
    int num1,num2;

    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);

    //displaying numbers before swapping
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

    //calling the user defined function swap()
    swap(&num1,&num2);

    //displaying numbers after swapping
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

    return 0;
}

int main9(){
    int num1, num2, quot, rem;

    printf("Enter dividend: ");
    scanf("%d", &num1);

    printf("Enter divisor: ");
    scanf("%d", &num2);

    /* The "/" Arithmetic operator returns the quotient
     * Here the num1 is divided by num2 and the quotient
     * is assigned to the variable quot
     */
    quot = num1 / num2;

    /* The modulus operator "%" returns the remainder after
     * dividing num1 by num2.
     */
    rem = num1 % num2;

    printf("Quotient is: %d\n", quot);
    printf("Remainder is: %d", rem);

    return 0;
}


/* This function converts the decimal number "decimalnum"
 * to the equivalent octal number
 */
int decimalToOctal(int decimalnum)
{
    int octalnum = 0, temp = 1;

    while (decimalnum != 0)
    {
        octalnum = octalnum + (decimalnum % 8) * temp;
        decimalnum = decimalnum / 8;
        temp = temp * 10;
    }

    return octalnum;
}
int main12()
{
    int decimalnum;

    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);

    printf("Equivalent Octal Number: %d", decimalToOctal(decimalnum));

    return 0;
}


int main14(){
    char str[25];
    int i;

    printf("Enter the string:");
    scanf("%s",str);

    for(i=0;i<=strlen(str);i++){
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("\nUpper Case String is: %s",str);
    return 0;
}


int main16()
{
    int circle_radius;
    float PI_VALUE=3.14, circle_area, circle_circumf;

    //Ask user to enter the radius of circle
    printf("\nEnter radius of circle: ");
    //Storing the user input into variable circle_radius
    scanf("%d",&circle_radius);

    //Calculate and display Area
    circle_area = PI_VALUE * circle_radius * circle_radius;
    printf("\nArea of circle is: %f",circle_area);

    //Caluclate and display Circumference
    circle_circumf = 2 * PI_VALUE * circle_radius;
    printf("\nCircumference of circle is: %f",circle_circumf);

    return(0);
}


int main17(){
int triangle_side;
float triangle_area, temp_variable;

//Ask user to input the length of the side
printf("\nEnter the Side of the triangle:");
scanf("%d",&triangle_side);

//Caluclate and display area of Equilateral Triangle
temp_variable = sqrt(3) / 4 ;
triangle_area = temp_variable * triangle_side * triangle_side ;
printf("\nArea of Equilateral Triangle is: %f",triangle_area);
return(0);
}

////#include<stdio.h>
int main18()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, exp, exp1;
    long long int value = 1;

    printf("Enter the number and its exponential:\n\n");
    scanf("%d%d",&n, &exp);

    exp1 = exp;   // storing original value for future use

    // same as while((--exp)!=-1)
    while(exp-- > 0)
    {
        value *= n; // multiply n to itself exp times
    }

    printf("\n\n %d^%d = %lld\n\n", n, exp1, value);
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

int main20()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, m, c, d, p, q, k, first[10][10], second[10][10], pro[10][10],sum = 0;

    printf("\nEnter the number of rows and columns of the first matrix: \n\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix: \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
        for(d = 0; d < n; d++)   // to iterate the columns
            scanf("%d", &first[c][d]);

    printf("\nEnter the number of rows and columns of the first matrix: \n\n");
    scanf("%d%d", &p, &q);

    if(n != p)
        printf("Matrices with the given order cannot be multiplied with each other.\n\n");

    else    // matrices can be multiplied
    {
        printf("\nEnter the %d elements of the second matrix: \n\n",m*n);

        for(c = 0; c < p; c++)   // to iterate the rows
            for(d = 0; d < q; d++)   // to iterate the columns
                scanf("%d", &second[c][d]);

        // printing the first matrix
        printf("\n\nThe first matrix is: \n\n");
        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < n; d++)   // to iterate the columns
            {
                printf("%d\t", first[c][d]);
            }
            printf("\n");
        }

        // printing the second matrix
        printf("\n\nThe second matrix is: \n\n");
        for(c = 0; c < p; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                printf("%d\t", second[c][d]);
            }
            printf("\n");
        }

        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                for(k = 0; k < p; k++)
                {
                    sum = sum + first[c][k]*second[k][d];
                }
                pro[c][d] = sum;    // resultant element of pro after multiplication
                sum = 0;    // to find the next element from scratch
            }
        }

        // printing the elements of the product matrix
        printf("\n\nThe multiplication of the two entered matrices is: \n\n");
        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                printf("%d\t", pro[c][d]);
            }
            printf("\n"); // to take the control to the next row
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

int main21()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int a[2][2], i, j;
    long determinant;

    printf("\n\nEnter the 4 elements of the array\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("\n\nThe entered matrix is: \n\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);   // to print the complete row
        }
        printf("\n"); // to move to the next row
    }

    // finding the determinant of a 2x2 matrix
    determinant = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    printf("\n\nDterminant of 2x2 matrix is : %d - %d =  %ld", a[0][0]*a[1][1], a[1][0]*a[0][1], determinant);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}