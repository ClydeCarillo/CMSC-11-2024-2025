#include <stdio.h>

int main(){
    int num, level, space, pyramid; 
    
    scanf("%d", &num);
    
    for (level = 0; level < num; level++){
        for (space = 0; space < num - level - 1; space++){
            printf(" ");
        }

        for (pyramid = 0; pyramid < 2 * level + 1; pyramid++){
        printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
