#include <stdio.h>

#define MAXLINE 1000

int getLine(char s[], int maxline);

int main() {
    int len, i;
    char line[MAXLINE];

    while((len = getLine(line, MAXLINE)) > 0) {    

        for(i = len - 1; i >= 0; i--) 
            printf("%c", line[i]);
     
    }
    
    return 0;
}

int getLine(char s[], int lim) {
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) 
        s[i] = c;

    if(c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}