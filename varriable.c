// #include <stdio.h>

// int main()
// {
//     // int n = 5; //initialization
//     // int a;     //declaration
//     // a = 15;    // assignment

//     int x, y;
//     scanf("%d %d", &x, &y);
//     printf("Output x: %d\n", x);
//     printf("Output y: %d\n", y);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int x, y;
//     int ch;
//     scanf("%d %d %c", &x, &y, &ch);
//     printf("Output x: %d\nOutput y: %d\nCharacter z: %c\n", x,y,ch);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {

//     int x, y;
//     scanf("%d %d", &x, &y);
//     printf("Output x: %d\nOutput y: %d\n", x,y);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x = 100000;
//     int y = 100000;

//     long long result = x * (y * 1LL);
//     printf("%lld", result);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x = 100000;
//     double y = 100000;

//     long long result = x * y;
//     printf("%lld", result);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     if (5 < 6 && 3 < 5)
//     {
//         printf("gotona sotti!\n");
//     }
//     else
//     {
//         printf("gotona sotti noi\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     if (5 > 6 || 3 > 5)
//     {
//         printf("gotona sotti!\n");
//     }
//     else
//     {
//         printf("gotona sotti noi");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     if (5 < 6 && 3 < 5)
//     {
//         printf("gotona sotti!\n");
//     }
//     else if(3 != 2 && 3 > 2)
//     {
//         printf("Uporer gotona mitta\n majer gotona sotto");
//     }
//     else
//     {
//         printf("gotona sotti noi\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     if (5 < 6 && 3 > 5)
//     {
//         printf("gotona sotti!\n");
//     }
//     else if(3 != 2 && 3 > 2)
//     {
//         printf("Uporer gotona mitta\n majer gotona sotto");
//     }
//     else
//     {
//         printf("gotona sotti noi\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     if (5 < 6 && 3 > 5)
//     {
//         printf("gotona sotti!\n");
//     }
//     else if(3 != 3 && 3 > 2)
//     {
//         printf("Uporer gotona mitta\n majer gotona sotto");
//     }
//     else
//     {
//         printf("gotona sotti noi\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int opt;

    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    
    default:
        printf("invalid number");
    }

    return 0;
}