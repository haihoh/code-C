/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

long int removeDigit(long int num){
    
    int prev_digit = num % 10;
    
    long int power = 10;
    long int res = prev_digit;
    
    while (num){
        int curr_digit = num % 10;
        
        if (curr_digit != prev_digit)
        {
            res += curr_digit * power;
            
            prev_digit = curr_digit;
            power = power * 10;
        }
        num = num / 10;
    }
    
    return res;
}

int main()

{
    long int num = 122446666888;
    printf("%ld", removeDigit(num));

    return 0;
}
