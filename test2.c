//
// Created by eidur on 5/19/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define DELIM "."
float poly(float a[], int, float);

/*
Function : extractIpAddress
Arguments :
1) sourceString - String pointer that contains ip address
2) ipAddress - Target variable short type array pointer that will store ip address octets
*/
void extractIpAddress(unsigned char *sourceString,short *ipAddress)
{
    unsigned short len=0;
    unsigned char  oct[4]={0},cnt=0,cnt1=0,i,buf[5];

    len=strlen(sourceString);
    for(i=0;i<len;i++)
    {
        if(sourceString[i]!='.'){
            buf[cnt++] =sourceString[i];
        }
        if(sourceString[i]=='.' || i==len-1){
            buf[cnt]='\0';
            cnt=0;
            oct[cnt1++]=atoi(buf);
        }
    }
    ipAddress[0]=oct[0];
    ipAddress[1]=oct[1];
    ipAddress[2]=oct[2];
    ipAddress[3]=oct[3];
}


int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

float deriv(float a[], int deg, float x)
{
    float d[10], pd = 0, ps;
    int i;

    for (i = 0; i <= deg; i++) {
        d[i] = (deg - i) * a[deg - i] * ps;
        pd = pd + d[i];
    }

    return pd;
}

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

void emi(){
    float principal, rate, time, emi;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in year: ");
    scanf("%f", &time);

    rate = rate / (12 * 100); /*one month interest*/
    time = time * 12; /*one month period*/


    printf("Monthly EMI is= %f\n", emi);
}

int validateDate(int d, int m, int y)
{
    //check year validity
    if (y >= 1800 && y <= 2999) {
        //check month validity
        if (m >= 1 && m <= 12) {
            //check day validity
            if (d >= 1 && d <= 31) {
                if ((d >= 1 && d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11))
                    return 1; //valid date
                else if ((d >= 1 && d <= 30) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
                    return 1; //valid date
                else if ((d >= 1 && d <= 28) && (m == 2))
                    return 1; //valid date
                else if (d == 29 && m == 2 && ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)))
                    return 1; //valid date
                else
                    return 0; //invalid day
            }
            else {
                return 0; //day is invalid
            }
        }
        else {
            return 0; //month is invalid
        }
    }
    else {
        return 0; //year is invalid
    }
}

int wd(int year, int month, int day)
{
    int wday = 0;
    wday = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5)
            + (365 * (year + 4800 - ((14 - month) / 12)))
            + ((year + 4800 - ((14 - month) / 12)) / 4)
            - ((year + 4800 - ((14 - month) / 12)) / 100)
            + ((year + 4800 - ((14 - month) / 12)) / 400)
            - 32045)
           % 7;
    return wday;
}

int valid_digit(char* ip_str)
{
    while (*ip_str) {
        if (*ip_str >= '0' && *ip_str <= '9')
            ++ip_str;
        else
            return 0;
    }
    return 1;
}

/* return 1 if IP string is valid, else return 0 */
int is_valid_ip(char* ip_str)
{
    int i, num, dots = 0;
    char* ptr;

    if (ip_str == NULL)
        return 0;

    ptr = strtok(ip_str, DELIM);

    if (ptr == NULL)
        return 0;

    while (ptr) {

        /* after parsing string, it must contain only digits */
        if (!valid_digit(ptr))
            return 0;

        num = atoi(ptr);

        /* check for valid IP */
        if (num >= 0 && num <= 255) {
            /* parse remaining string */
            ptr = strtok(NULL, DELIM);
            if (ptr != NULL)
                ++dots;
        }
        else
            return 0;
    }

    /* valid IP string must contain 3 dots */
    if (dots != 3)
        return 0;
    return 1;
}


int main()
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

    float  dy1;

    printf("Enter the degree of polynomial equation: ");
    scanf("%d", &deg);

    printf("Ehter the value of x for which the equation is to be evaluated: ");
    scanf("%f", &x);

    for (i = 0; i <= deg; i++) {
        printf("Enter the coefficient of x to the power %d: ", i);
        scanf("%f", &a[i]);
    }

    y1 = poly(a, deg, x);
    dy1 = deriv(a, deg, x);

    printf("The value of polynomial equation for the value of x = %.2f is: %.2f", x, y1);
    printf("\nThe value of the derivative of the polynomial equation at x = %.2f is: %.2f", x, dy1);

    int xy;

    printf("Enter an integer number: ");
    scanf("%d", &xy);

    if (xy == 0)
        printf("%d", 0);
    else if (xy % 9 == 0)
        printf("%d", 9);
    else
        printf("%d", xy % 9);

    printf("\n");

    float principal, rate, years, ci;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &years);

    // calculate compound interest


    printf("Compound interest is: %f\n", ci);

    emi();


    int DaysInMon[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
    int days, month, year;
    time_t ts;
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


    char yName[40], pName[40];
    int sum, sum1, choice;
    float perc = 0;

    do {
        printf("Enter your name: ");
        fflush(stdin);


        printf("Enter your partner's name: ");
        fflush(stdin);

        sum = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum += tolower(yName[i]);
        }

        sum1 = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum1 += tolower(pName[i]);
        }

        perc = (sumOfDigits(sum) + sumOfDigits(sum1)) + 40;
        if (perc > 100)
            perc = 100;

        printf("Your love percentage is: %.02f\n\n", perc);

        printf("Want to calculate with some one else (0 to exit, 1 to continue) ???: ");
        scanf("%d", &choice);

    } while (choice != 0);

    int day;
    int wDayNo = 0;
    char dayNames[][12] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    //input date
    printf("Input date (DD-MM-YYYY): ");
    scanf("%d-%d-%d", &day, &month, &year);

    //check date is correct or not
    if (validateDate(day, month, year) == 1) {
        printf("Date is correct [%02d/%02d/%02d].\n", day, month, year);
        //get weekday number
        wDayNo = wd(year, month, day);
        //print weekday according to wDayNo
        printf("week day is: %s\n", dayNames[wDayNo]);
    }
    else
        printf("Date is in-correct.\n");

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

    time_t T = time(NULL);
    struct tm tm = *localtime(&T);

    printf("System Date is: %02d/%02d/%04d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("System Time is: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);



    unsigned char ip[20]={0};
    short ipAddress[4];

    printf("Enter IP Address (xxx.xxx.xxx.xxx format): ");
    scanf("%s",ip);

    extractIpAddress(ip,&ipAddress[0]);

    printf("\nIp Address: %03d. %03d. %03d. %03d\n",ipAddress[0],ipAddress[1],ipAddress[2],ipAddress[3]);

    if(ipAddress[0]>=0 && ipAddress[0]<=127)
        printf("Class A Ip Address.\n");
    if(ipAddress[0]>127 && ipAddress[0]<191)
        printf("Class B Ip Address.\n");
    if(ipAddress[0]>191 && ipAddress[0]<224)
        printf("Class C Ip Address.\n");
    if(ipAddress[0]>224 && ipAddress[0]<=239)
        printf("Class D Ip Address.\n");
    if(ipAddress[0]>239)
        printf("Class E Ip Address.\n");


    int dd,mm,yy;

    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);

    //check year
    if(yy>=1900 && yy<=9999)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }


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


