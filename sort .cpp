#include<stdio.h>

int main(){
    int num[100005], size, n; //寫1000000005不ㄟ
    char sort[105];

    scanf("%d", &size); //strlen是不是只能用在char型別
    for (n = 0; n<size ; n++){
        scanf("%d", &num[n]); //獨到空格會自己換下一行嗎
    }
    scanf("%s", sort);

    if (sort[0]=='B'){ //sort=="BUBBLE" //result of comparison against a string literal is unspecified
        int n, i, j;
        for (i = 0; i < size-1; i++){
            for (j = 0; j < size-i-1; j++){ //要用&&，不是用,
                if (num[j]>num[j+1]){
                    int temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                }
            }
            for (n = 0; n < size; n++){
                printf("%d" " ", num[n]);
            }
            printf("\n");
        }
    }

    else if(sort[0]=='I'){
        int i, n;
        for (i = 1; i < size; i++){
            int temp = num[i], j=i-1;
            while(num[j]>temp && j>-1){
                num[j + 1] = num[j];
                j--;
            }
            num[j + 1] = temp;
            for (n = 0; n < size; n++){
                printf("%d" " ", num[n]);
            }
            printf("\n");
        }
         
    }

    else{
        int n, i, j;
        for (i = 0; i < size-1; i++){
            int temp = num[i];
            int *ptr;
            for (j=i+1; j<size; j++){
                if (temp>num[j]){
                    ptr = &num[j];
                    temp = num[j];
                }   
            }
            if(temp!=num[i]){
                *ptr = num[i];
                num[i] = temp;
                
                
            }
            for (n = 0; n < size; n++){
                printf("%d" " ", num[n]);
            }
            printf("\n");
        }
        
    }

    
}