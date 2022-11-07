#include <stdio.h>
#include <math.h>
int main(){
    int n, z, test, count = 0, sum = 0;
    scanf("%d", &n);
    z = n;
    test = z;

    while ( z != 0){
        count++;
        z = z /10;
    }

    while ( n != 0){
        int x = n % 10;
        if(count > 1){
            x = pow(10, count -1 )*x;
        }
        sum = sum + x;
        n = n /10;
        count--;
    }

    if(sum == test){
        printf("Palindrome!!");
    }else{
        printf("Not Palindrome!!");
    }
    return 0;
}
