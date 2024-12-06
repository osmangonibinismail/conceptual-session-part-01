// #include<stdio.h>

// int main()
// {
//     int x, y;
//     scanf("%d %d", &x, &y);

//     printf("Value of X: %d\nValue of Y: %d", x, y);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x;
//     int y;

//     printf("Enter number of X: ");
//     scanf("%d", &x);
//     printf("Enter number of Y: ");
//     scanf("%d", &y);

//     printf("Value of X: %d\n", x);
//     printf("Value of Y: %d\n", y);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x;
//     char y;

//     printf("Enter number of X: ");
//     scanf("%d%%", &x);
//     printf("Enter number of Y: ");
//     getchar();
//     scanf("%c", &y);

//     printf("Value of X: %d\n", x);
//     printf("Value of Y: %c\n", y);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     printf("%d\n", x++);
//     printf("%d\n", x);

//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int A = 10;

//     printf("%d\n", A--);

//     printf("%d\n", A);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int A = 10;

//     printf("%d\n",--A);

//     printf("%d\n", ++A);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int A = 10;
//     printf("%d\n", A);

//     int X = A++;
//     printf("%d\n", X);

//     --X;
//     printf("%d\n", X);
//     A--;
//     printf("%d\n", A);

//     int y = --X;
//     printf("%d\n", y);

//     printf("%d\n",y--);
//     printf("%d\n", y);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x = 5;
//     int y = 4;

//     double result = x / (y * 1.0);

//     printf("%lf", result);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     long long int x = 100000;
//     int y = 100000;

//     long long result = x * y;

//     printf("%lld", result);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     if(3 != 5 && 5 < 2){
//         printf("gotna sotto");
//     }
//     // else if(3 != 5 && 5 > 2){
//     //     printf("uporer gotna mitta majer gotna sotto");
//     // }
//     else{
//         printf("gotna mitta");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int opt;
//     scanf("%d", &opt);

//     switch (opt)
//     {
//     case 1:
//         printf("One");
//         break;

//     case 2:
//         printf("Two");
//         break;

//     case 3:
//         printf("Three");
//         break;

//     case 4:
//         printf("Four");
//         break;

//     default:
//     printf("Invalid Number");
//         break;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     if (n % 2 == 0)
//     {
//         if (n < 10)
//         {
//             printf("n is even and n is grettar then 10");
//         }
//         else
//         {
//             printf("n is even and n is less then 10");
//         }
//     }
//     else
//     {
//         if (n < 10)
//         {
//             printf("n is odd and n is grettar then 10");
//         }
//         else
//         {
//             printf("n is odd and n is less then 10");
//         }
//     }
// }


//for loop

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for(int i = n; i <= 100; i+=n){
//         printf("Print number: %d\n", i);
//     }

//     return 0;
// }

//while loop

// #include <stdio.h>
// int main()
// {
//     int i = 0;

//     while (i < 100)
//     {
//         printf("Initialize value: %d; ", i);

//         i += 10;
//         printf("update value: %d\n", i);
//     }
// }

//do while

// #include<stdio.h>
// int main()
// {
//     int i = 11;

//     do{
//         printf("first print: %d; ",i);
//         i++;
//         printf("last print: %d\n",i);
//     }
//     while(i<10);
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){

            count = count + 1;
            printf("%d\n",i);
        }
    }
    if(count == 0){
        printf("-1");
    }

    return 0;
}