#include <stdio.h>
#include <string.h>

int isPalindrome(char str[],int start, int length){
    int left=start;
    int right=start+length-1;
    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1; 
}
int calculateScore(char str[]){
    int score=0;
    int len=strlen(str);
    
    for (int i = 0; i <= len - 4; i++) {
        if (isPalindrome(str, i, 4)) {
            score += 5;
        }
    }

    
    for (int i = 0; i <= len - 5; i++) {
        if (isPalindrome(str, i, 5)) {
            score += 10;
        }
    }

    return score;
    
}
int main() {
    
    char str[100];
    int score;
    
    printf("Enter a string: ");
    scanf("%s", str);

    score = calculateScore(str);    
    printf("Score: %d\n", score);

    return 0;
}
