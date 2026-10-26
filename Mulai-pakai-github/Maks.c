/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int Max(int a, int b) {
        if(a > b) {
            printf("%i",a);
        }
        if(b > a) {
            printf("%i",b);
        }
    }
    
    Max(35,40);

    return 0;
}
