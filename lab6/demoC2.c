#include<stdio.h>

int main()
{
    int r, g, b;
    float red, green, blue;
    float white, cyan, magenta, yellow, black;

    printf("Enter Red, Green and Blue values (0-255): ");
    scanf("%d%d%d", &r, &g, &b);

    // Special case
    if(r==0 && g==0 && b==0)
    {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;

        printf("Cyan = %.2f\n", cyan);
        printf("Magenta = %.2f\n", magenta);
        printf("Yellow = %.2f\n", yellow);
        printf("Black = %.2f\n", black);

        return 0;
    }

    // Convert RGB to values between 0 and 1
    red = r / 255.0;
    green = g / 255.0;
    blue = b / 255.0;

    // Find White (maximum)
    white = red;

    if(green > white)
        white = green;

    if(blue > white)
        white = blue;

    // Calculate CMYK
    cyan = (white - red) / white;
    magenta = (white - green) / white;
    yellow = (white - blue) / white;
    black = 1 - white;

    printf("Cyan = %.2f\n", cyan);
    printf("Magenta = %.2f\n", magenta);
    printf("Yellow = %.2f\n", yellow);
    printf("Black = %.2f\n", black);

    return 0;
}