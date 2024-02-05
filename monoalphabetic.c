// key[26] = "qwertyuiopasdfghjklzxcvbnm"

#include <stdio.h>
#include<ctype.h>

int main() {
    // char abcd[26] = "abcdefghijklmnopqrstuvwxyz";
    char p_text[100], c_text[100], key[26];
    
    printf("Enter plain text: ");
    scanf("%[^\n]", p_text);

    getchar();  // To consume the newline charecter at the end of the array.

    printf("Enter key: ");
    scanf("%[^\n]", key);

    for (int i = 0; i < 26; i++){
        if(isalpha(p_text[i])){
            if(p_text[i] >= 'A' && p_text[i] <= 'Z'){
                c_text[i] = key[p_text[i] - 'A'];
            }
            else if(p_text[i] >= 'a' && p_text[i] <= 'z'){
                c_text[i] = key[p_text[i] - 'a'];
            }
        }
        else{
            c_text[i] = p_text[i];
        }
    }
    printf("\nCipher Text: %s", c_text);   

    return 0;
}