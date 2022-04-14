#include <stdio.h>

int main() {
    int input, i;
    scanf ("%d", &input);
    for (i=2; i<100001; i++){   
        while(input%i==0&&input>=i){
            printf("%d ", i);
            input/=i;
        }
        if(input==1) break;
    }
    printf("\n");
    return 0;
}






