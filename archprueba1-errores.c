//#include <math.h>
//#include <stdio.h>
// Obtenido de https://www.programiz.com/c-programming/examples/octal-binary-convert
int convert(long long bin);
int main() {
    long long bin;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);
    printf("%lld in binary = %d in octal", bin, convert(bin));
    return 0;
}

int convert(long long bin) {
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}



// Obtenido de https://www.programiz.com/c-programming/examples/octal-decimal-convert
int convertDecimalToOctal(int decimalNumber);
int main2()
{
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));

    return 0;
}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

//Obtenido de https://beginnersbook.com/2014/01/c-functions-examples/
int addition(int num1, int num2)
{
    int sum;
    /* Arguments are used here*/
    sum = num1+num2;

    /* Function return type is integer so we are returning
     * an integer value, the sum of the passed numbers.
     */
    return sum;
}

int main4()
{
    int var1, var2;
    printf("Enter number 1: ");
    scanf("%d",&var1);
    printf("Enter number 2: ");
    scanf("%d",&var2);

    /* Calling the function here, the function return type
     * is integer so we need an integer variable to hold the
     * returned value of this function.
     */
    int res = addition(var1, var2);
    printf ("Output: %d", res);

    return 0;
}

// Obtenido de https://fresh2refresh.com/c-programming/c-function/
void swap(int a, int b);

int main5()
{
    int m = 22, n = 44;
    // calling swap function by value
    printf(" values before swap  m = %d \nand n = %d", m, n);
    swap(m, n);
}

void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf(" \nvalues after swap m = %d\n and n = %d", a, b);
}


// Obtenido de https://www.includehelp.com/c-programs/polynomial-and-differential-equations.aspx
float poly(float a[], int, float);

int main6()
{
    float x, a[10], y1;
    int deg, i;

    printf("Enter the degree of polynomial equation: ");
    scanf("%d", &deg);

    printf("Ehter the value of x for which the equation is to be evaluated: ");
    scanf("%f", &x);

    for (i = 0; i <= deg; i++) {
        printf("Enter the coefficient of x to the power %d: ", i);
        scanf("%f", &a[i]);
    }

    y1 = poly(a, deg, x);

    printf("The value of polynomial equation for the value of x = %.2f is: %.2f", x, y1);

    return 0;
}

/* function for finding the value of polynomial at some value of x */
float poly(float a[], int deg, float x)
{
    float p;
    int i;

    p = a[deg];

    for (i = deg; i >= 1; i--) {
        p = (a[i - 1] + x * p);
    }

    return p;
}

int pid()
{
    // fork() Create a child process

    int pid = fork();
    if (pid > 0) {
        //getpid() returns process id
        // while getppid() will return parent process id
        printf("Parent process\n");
        printf("ID : %d\n\n", getpid());
    }
    else if (pid == 0) {
        printf("Child process\n");
        // getpid() will return process id of child process
        printf("ID: %d\n", getpid());
        // getppid() will return parent process id of child process
        printf("Parent -ID: %d\n\n", getppid());

        sleep(10);

        // At this time parent process has finished.
        // So if u will check parent process id
        // it will show different process id
        printf("\nChild process \n");
        printf("ID: %d\n", getpid());
        printf("Parent -ID: %d\n", getppid());
    }
    else {
        printf("Failed to create child process");
    }

    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
int allocation(){
    int* ptr; //declaration of integer pointer
    int limit; //to store array limit
    int i; //loop counter
    int sum; //to store sum of all elements

    printf("Enter limit of the array: ");
    scanf("%d", &limit);

    //declare memory dynamically
    ptr = (int*)malloc(limit * sizeof(int));

    //read array elements
    for (i = 0; i < limit; i++) {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    //print array elements
    printf("\nEntered array elements are:\n");
    for (i = 0; i < limit; i++) {
        printf("%d\n", *(ptr + i));
    }

    //calculate sum of all elements
    sum = 0; //assign 0 to replace garbage value
    for (i = 0; i < limit; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", sum);

    //free memory
    free(ptr); //hey, don't forget to free dynamically allocated memory.

    return 0;
}


/*Age Calculator (C program to calculate age).*/

//#include <stdio.h>
//#include <time.h>

/*check given year is leap year or not*/
int isLeapYear(int year, int mon)
{
    int flag = 0;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            if (mon == 2)
            {
                flag = 1;
            }
        }
    }
    else if (year % 4 == 0)
    {
        if (mon == 2)
        {
            flag = 1;
        }
    }
    return (flag);
}


int main7()
{

    int DaysInMon[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
    int days, month, year;
    char dob[100];
    int ts;
    struct tm *ct;

    /* enter date of birth */
    printf("Enter your date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&days,&month, &year);

    /*get current date.*/
    ts = time(NULL);
    ct = localtime(&ts);

    printf("Current Date: %d/%d/%d\n",
           ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);

    days = DaysInMon[month - 1] - days + 1;

    /* leap year checking*/
    if (isLeapYear(year, month))
    {
        days = days + 1;
    }

    /* calculating age in no of days, years and months */
    days = days + ct->tm_mday;
    month = (12 - month) + (ct->tm_mon);
    year = (ct->tm_year + 1900) - year - 1;

    /* checking for leap year feb - 29 days */
    if (isLeapYear((ct->tm_year + 1900), (ct->tm_mon + 1)))
    {
        if (days >= (DaysInMon[ct->tm_mon] + 1))
        {
            days = days - (DaysInMon[ct->tm_mon] + 1);
            month = month + 1;
        }
    }
    else if (days >= DaysInMon[ct->tm_mon])
    {
        days = days - (DaysInMon[ct->tm_mon]);
        month = month + 1;
    }

    if (month >= 12)
    {
        year = year + 1;
        month = month - 12;
    }

    /* print age */
    printf("\n## Hey you are  %d years %d months and %d days old. ##\n", year, month, days);

    return 0;
}


/*C program to guess a random number.*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>


int main8()
{
    int random_genNo=0,count=0,num;
    int stime;
    long ltime;

    //initialise srand with current time, to get random number on every run
    ltime = time(NULL);
    stime = (unsigned) ltime/2;
    srand(stime);

    //generate random number
    random_genNo=rand()%1000;

    //run infinite loop
    while(1)
    {
        //increase counter
        count+=1;

        //read number from user
        printf("\n\nGuess a number from (0 to 1000): ");
        scanf("%d",&num);

        //compare entered number with generated number

        if(random_genNo==num){
            printf("Congratulations, you have guessed a correct number.");
            break;
        }
        else if(random_genNo<num){
            printf("Generated number is less than entered number, try your luck again...");
        }
        else if(random_genNo>num){
            printf("Generated number is greater than entered number, try your luck again...");
        }

        if(count==7){
            printf("\n\n### Maximum limit of atttempt finished, BAD LUCK !!!\n");
            break;
        }
    }

    return 0;
}

/*C program to remove consecutive repeated characters from string.*/

//#include <stdio.h>

int main9()
{

    char str[100];
    int i,j,len,len1;

    /*read string*/
    printf("Enter any string: ");
//    gets(str);

    /*calculating length*/
    for(len=0; str[len]!='\0'; len++);

    /*assign 0 to len1 - length of removed characters*/
    len1=0;

    /*Removing consecutive repeated characters from string*/
    for(i=0; i<(len-len1);)
    {
        if(str[i]==str[i+1])
        {
            /*shift all characters*/
            for(j=i;j<(len-len1);j++)
                str[j]=str[j+1];
            len1++;
        }
        else
        {
            i++;
        }
    }

    printf("String after removing characaters: %s\n",str);

    return 0;
}

/*EMI Calculator (C program to calculate EMI).*/

//#include <stdio.h>
//#include <math.h>

int main10()
{
    float principal, rate, time, emi;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in year: ");
    scanf("%f", &time);

    rate = rate / (12 * 100); /*one month interest*/
    time = time * 12; /*one month period*/

    emi = (principal * rate);

    printf("Monthly EMI is= %f\n", emi);

    return 0;
}


/*C program to implement substring function.*/

//#include <stdio.h>

/*
function : substring
argument list:
1) source - source string
2) from - starting index from where you want to
get substring.
3) n - number of characters to be copied in substring
4) target - target string in which you want to store
targe string.
Return type - int : 0 on success
*/

int substring(char* source, int from, int n, char* target)
{
    int length, i;
    //get string length
    for (length = 0; source[length] != '\0'; length++)
        ;

    if (from > length) {
        printf("Starting index is invalid.\n");
        return 1;
    }

    if ((from + n) > length) {
        //get substring till end
        n = (length - from);
    }

    //get substring in target
    for (i = 0; i < n; i++) {
        target[i] = source[from + i];
    }
    target[i] = '\0'; //assign null at last

    return 0;
}

int main11()
{
    char str[100], targetString[100];
    int from, n;

    printf("Enter any string:");
//    gets(str);

    printf("Enter from index (count from 0): ");
    scanf("%d", &from);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    if (substring(str, from, n, targetString) == 0) {
        printf("Substring is: %s\n", targetString);
    }

    return 0;
}


