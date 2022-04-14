/*#include <stdio.h>
#include <string.h>

void str_read(char str[]){
    int i=0;
    while(1){ //while會一路往後跑嗎，不用for迴圈那種++
        scanf("%c", &str[i]);
        if (str[i]=='\n') break;
        i++;
    }
    str[i]='\0';
}


for(i=0;i<100;i++){
        scanf("%s", words[i]);
    }//讀不出空格，為什麼

int main(){
    int i, j, len_words, len_wantedword, count;
    char words[1004000]={'\0'}, wantedword[104]={'\0'};
    str_read(words);
    len_words=strlen(words);
    scanf("%s", wantedword);
    len_wantedword=strlen(wantedword);

    i=0;
    count=0;
    while(i<len_words){
        if (i>=len_words) break;
        j=0; 
        while(i<len_words && j<len_wantedword && words[i]==wantedword[j]){
            j++;
            i++;            
        if ((words[i]==' ' || i==len_words) && j==len_wantedword) count++;
        }
        while(words[i]!=' '){
            i++;
        }
        i++;   
    }
    
printf("%d", count);
}*/


/*#include <stdio.h>
#include <string.h>

void str_read(char str[]){
    int i=0;
    while(1){ 
        scanf("%s", str[i]);
        if (str[i]=='\n') break;
        i++;
    }
    str[i]='\0';
}

int main(){
    int i, j, len_words, len_wantedword, count;
    char words[100400]={'\0'}, wantedword[104]={'\0'};
    str_read(words);
    len_words=strlen(words);
    scanf("%s", wantedword);
    len_wantedword=strlen(wantedword);

    i=0;
    count=0;
    while(i<len_words){
        
        j=0; 
        while(i<len_words && j<len_wantedword && words[i]==wantedword[j]){
            j++;
            i++;            
        if ((words[i]==' ' || i==len_words) && j==len_wantedword) count++;
        
        }
       
        while(words[i]!=' '){
            i++;
        }
        i++;   
    }
    
printf("%d", count);
}*/

#include <stdio.h>
#include <string.h>

void str_read(char str[]){
    int i=0;
    while(1){ 
        scanf("%c", &str[i]);
        if (str[i]=='\r') break;
        i++;
    }
    str[i]='\0';
}

int main(){
    int i, j, len_words, len_wantedword, count;
    char words[100400]={'\0'}, wantedword[104]={'\0'};
    str_read(words);
    len_words=strlen(words);
    scanf("%s", wantedword);
    len_wantedword=strlen(wantedword);

    i=0;
    count=0;
    while(i<len_words){
        
        j=0; 
        while(i<len_words && j<len_wantedword && words[i]==wantedword[j]){
            j++;
            i++;            
        if ((words[i]==' ' || i==len_words) && j==len_wantedword) count++;
        }
       
        while(words[i]!=' '){
            i++;
        }
        i++;   
    }
    
printf("%d", count);
}

/*#include <stdio.h>
#include <string.h>

int main(){
    int i, j, len_words, len_wantedword, count;
    char words[100400]={'\0'}, wantedword[104]={'\0'};
    scanf("%[^\n]s", words);
    len_words=strlen(words);
    scanf("%s", wantedword);
    len_wantedword=strlen(wantedword);

    i=0;
    count=0;
    while(i<len_words){
        
        j=0; 
        while(i<len_words && j<len_wantedword && words[i]==wantedword[j]){
            j++;
            i++;            
        if ((words[i]==' '|| i==len_words) && j==len_wantedword) count++;
        
        }
       
        while(words[i]!=' '){
            i++;
        }
        i++;   
    }
    
printf("%d", count);
}*/


