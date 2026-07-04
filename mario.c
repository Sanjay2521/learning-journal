#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1. ask user for height, re-ask while it's < 1 or > 8
    int n;
    do
    {
        n = get_int("Height: ");

    }
    while(n < 1 || n >  8);
    //for each row from 1 to height:
    for(int i = 0; i < n; i++){
        //print the right number of spaces
        for(int k = 0; k < n-i-1; k++){
            printf(" ");
        }
        // print the right number of hashes
        for(int j = 0 ; j < i + 1; j ++){
            printf("#");
        }
        // end the line
        printf("\n");
    }

}
