#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i <= (n-1) ; i++){
        if(i == 2){
            printf("%d Prime \n", i);
        }
        else if( i == 3){
            printf("%d Prime \n", i);
        }
        else{
            for(int j = 2; j <= i-1; j++){
                if(i % j == 0){
                    count++;
                }
            }
            if(count == 0){
              //  printf("%d Prime \n", i);
            }
            else{
               printf("%d Not Prime \n", i);
            }

            count = 0;
        }





    }


    return 0;
}

