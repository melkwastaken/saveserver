#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hey, We just wiped your ass.");
   return 0;

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

goto label;
... .. ...
... .. ...
label: 
statement;

// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>

int main() {

   const int maxInput = 100;
   int i;
   double number, average, sum = 0.0;

   for (i = 1; i <= maxInput; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);
      
      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }

jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   return 0;
}
Output

1. Enter a number: 3
2. Enter a number: 4.3
3. Enter a number: 9.3
4. Enter a number: -2.9
Sum = 16.60
Average = 5.53
  one:
for (i = 0; i < number; ++i)
{
    test += i;
    goto two;
}
two: 
if (test > 5) {
  goto three;
}
... .. ...
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}


#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}

#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}

nclude <stdio.h>
int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    // if user enters negative number, sign of the number is changed to positive
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	int i,testc,n,nby3,nby5,pint;
	scanf("%d", &testc);
	while(testc--)
	{
		scanf("%d", &n);
		if (n<3)
		{
			printf("-1\n");
			continue;
		}
		nby5=n%5;
		if (nby5==0)
		{
			pint=(n>=15)?1:0;
			if (pint)
				while(n>=15)
				{
					printf("555555555555555");
					n-=15;
				}
			for (i = 0; i < n; ++i)
				printf("3");
			printf("\n");
		}
		else if (nby5==1)
		{
			if (n-6<0)
			{
				printf("-1\n");
				continue;
			}
			pint=(n-6)>=15?1:0;
			if (pint)
				while(n-6>=15)
				{
					printf("555555555555555");
					n-=15;
				}
			printf("555555");
			for (i = 0; i < n-6; ++i)
				printf("3");
			printf("\n");
		}
		else if (nby5==2)
		{
			if (n-12<0)
			{
				printf("-1\n");
				continue;
			}
			pint=(n-12)>=15?1:0;
			if (pint)
				while(n-12>=15)
				{
					printf("555555555555555");
					n-=15;
				}
			printf("555555555555");
			for (i = 0; i < n-12; ++i)
				printf("3");
			printf("\n");
		}
		else if (nby5==3)
		{
			if (n-3<0)
			{
				printf("-1\n");
				continue;
			}
			pint=(n-3)>=15?1:0;
			if (pint)
				while(n-3>=15)
				{
					printf("555555555555555");
					n-=15;
				}
			printf("555");
			for (i = 0; i < n-3; ++i)
				printf("3");
			printf("\n");
		}
		else if (nby5==4)
		{
			if (n-9<0)
			{
				printf("-1\n");
				continue;
			}
			pint=(n-9)>=15?1:0;
			if (pint)
				while(n-9>=15)
				{
					printf("555555555555555");
					n-=15;
				}
			printf("555555555");
			for (i = 0; i < n-9; ++i)
				printf("3");
			printf("\n");
			
		}
	}
	return 0;
}
