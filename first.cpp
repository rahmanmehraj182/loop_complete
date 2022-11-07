#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int result = 0;
    int sum = 0;
    for(int j = 1; j <= n ; j++ ){
        for(int i = j; i>=1 ; i--){
            long long int x =0;
            x = pow(10, i-1)*(j-i+1);

            result = result + x;


        }
        sum = sum + result;
        printf("%d \n", result);
        result = 0;
    }
    printf("%d", sum);


    return 0;
}
