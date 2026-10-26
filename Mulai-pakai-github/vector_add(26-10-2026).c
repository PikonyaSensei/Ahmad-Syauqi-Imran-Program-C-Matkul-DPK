/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>

void vector_add(int *a, int *b, int *c, int n) {
    for(int i = 0; i < n; i++ ) {
        c[i] = a[i] + b[i];
    }
}

int main()

{
    int n = 5, a[] = {1, 2, 3, 4, 5}, b[] = {10, 20, 30, 40, 50}, c[n];
    
    vector_add(a, b, c, n);
    

    return 0;
}
