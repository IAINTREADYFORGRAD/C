#include <stdio.h>
#include <string.h>

int main(){
    int chosen, num, i, j, len; 
    char words[100][104]; 
    scanf("%d", &chosen);
    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%s", words[i]);
    }
    if(chosen==2){
        for(i=0; i<num; i++){
            len=strlen(words[i]);
            for(j=0; j<len; j++){
                if(words[i][j]<='Z'){
                    words[i][j]+=32;
                }
            }
        }
        for(i=1; i<num; i++){
            len=strlen(words[0]);
            for(j=0; j<len && words[0][j]==words[i][j]; j++) {
            }
            for(;j<len;j++){
                words[0][j]='\0';
            }
        }
        if(strlen(words[0])!=0) printf("%s\n", words[0]);
        else printf("No longest common prefix");
    }
    else{
        for(i=1; i<num; i++){
            len=strlen(words[0]);
            for(j=0; j<len && words[0][j]==words[i][j]; j++){
            }
            for(;j<len;j++){
                words[0][j]='\0';
            }
        }
        if(strlen(words[0])!=0) printf("%s\n", words[0]);
        else printf("No longest common prefix");

    }
}

