#include <stdio.h>
#include <stdbool.h>

struct Color {
     int rchannel : 10;
     int gchannel : 10;
     int bchannel : 10;
    bool fig1 : 1;
    bool fig2 : 1;
};

int main()
{
    struct Color c = {512, 256, 128, };

    printf("R = %u\n", c.rchannel);
    printf("G = %u\n", c.gchannel);
    printf("B = %u\n", c.bchannel);
    printf("Fig1 = %d\n", c.fig1);
    printf("Fig2 = %d\n", c.fig2);

    return 0;
}
