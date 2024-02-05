#include<stdio.h>
#include<ctype.h>
#include<string.h>

int linearSearch(char arr[], char c){// itssg 123 $%
    int pos=0;
    for (int i = 0; i < strlen(arr); i++){
        if(arr[i]!=c){
            pos++;
        }
        else if(arr[i] == c){
            return pos;
        }
    }
    return pos;
}

int main(){
    char c_text[100], key[100], p_text[100];
    printf("Enter cipher text: ");
    scanf("%[^\n]", c_text);
    getchar();
    printf("Enter key: ");
    scanf("%[^\n]", key);

    for (int i = 0; i < strlen(c_text); i++){
            if (isalpha(c_text[i])){
                if (c_text[i]>='A' && c_text[i]<='Z'){
                    int pos = linearSearch(key, c_text[i]);
                    p_text[i] = pos + 'A';
                }
                else if (c_text[i]>='a' && c_text[i]<='z'){
                    int pos = linearSearch(key, c_text[i]);
                    p_text[i] = pos + 'a';
                }    
            }else{
                p_text[i] = c_text[i];
            }
    }
    p_text[strlen(c_text)] = '\0';
        
    printf("Decrypted Text is: %s", p_text);
    return 0;   
}