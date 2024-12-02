#include <stdio.h>

int main(){
  int nn, count, perfect, sum;

    scanf("%d", &nn);
 
    count = 0;
    perfect = 2;

    while(count < nn){
        sum = 0;

        for (int i = 1; i <= (perfect/2); i++){
            if (perfect % i == 0)
                sum += i;
        }

        if (sum == perfect){
            printf("%d ", perfect);
            count++;
        }
    
        perfect++;
    }

    printf("\n");

    return 0;
}
