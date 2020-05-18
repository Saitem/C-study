#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);

int main(){
    int len, i;
    char line[MAXLINE];
    char newLine[MAXLINE];
    int space;


    while((len = getLine(line, MAXLINE)) > 0) {
        space = 0;
        for(i = 0; i < len; i++) {
            if(line[i] != ' ') {
                printf("%c", line[i]);
                space = 0;
            } else if(space == 0) {
                printf("%c", line[i]);
                space = 1;
            }
        }

    }

}



int getLine(char s[], int lim){
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if(c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}
