
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int l=0, r=strlen(str)-1;
    while(l<r){
        if(str[l++]!=str[r--]) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d",&n);
    char words[100][100];
    for(int i=0;i<n;i++) scanf("%s",words[i]);

    for(int i=0;i<n;i++){
        if(isPalindrome(words[i])){
            printf("%s",words[i]);
            return 0;
        }
    }
    printf("None");
    return 0;
}
