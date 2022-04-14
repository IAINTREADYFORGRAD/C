#include <stdio.h>
#include <string.h>

int main(){//toupper
    char input[100400]={'\0'};
    char* input_pointer=input; 
    int len, i, chosen;
    scanf("%s", input);
    scanf("%d", &chosen);
    len=strlen(input);
    
    if(chosen==1){
        for(i=0; i<len; i++){
            if(input_pointer[i]>='a'){
                input_pointer[i]-=32;
            }
        }
        printf("%s\n", input);
    }

    else if(chosen==2){
        for(i=0; i<len; i++){ 
            if(input_pointer[i]<='Z'){
                input_pointer[i]+=32;
            }
        }
        printf("%s\n", input);
    }

    else if(chosen==3){
        for(i=0; i<len; i++){ 
            if(i%2==1 && input_pointer[i]<'a'){
                input_pointer[i]+=32;
            }        
            else if(i%2==0 && input_pointer[i]>'Z'){
                input_pointer[i]-=32;
            }
        } 
        printf("%s", input); 
    }
}
 


