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
#include<stdio.h>
int main()
{
    int A = 10;
    printf("%d\n", A);

    int X = A++;
    printf("%d\n", X);

    --X;
    printf("%d\n", X);
    A--;
    printf("%d\n", A);

    int y = --X;
    printf("%d\n", y);

    printf("%d\n",y--);
    printf("%d\n", y);


    return 0;
}