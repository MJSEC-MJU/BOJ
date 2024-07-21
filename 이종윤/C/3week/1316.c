#include <stdio.h>
#include <stdbool.h>

#define MAX_WORD_LENGTH 100

bool is_group_word(const char *word) {
    bool appeared[26] = {false};  
    char last_char = '\0';        
    
    for (int i = 0; word[i] != '\0'; i++) {
        char current_char = word[i];
        
        if (current_char != last_char) {
 
            if (appeared[current_char - 'a']) {
   
                return false;
            }
            appeared[current_char - 'a'] = true;
            last_char = current_char;
        }
    }
    
    return true;
}

int main(void) {
    int N;
    scanf("%d", &N);
    
    char word[MAX_WORD_LENGTH + 1];  
    int group_word_count = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%s", word);
        if (is_group_word(word)) {
            group_word_count++;
        }
    }
    
    printf("%d\n", group_word_count);
    
    return 0;
}
