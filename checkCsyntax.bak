#include <stdio.h>

#define TRUE 1;
#define FALSE 0;

/* Author: scopych
 * Date:   23.12.2018
 * Purpose:check C program for rudimentary
 * syntax errors like unbalanced parentheses,
 * brackets and braces, quotes,both single
 * and double,escape sequences,and comments.
 */
int goahead;
int c;
int parentheses;
int braces;
int brackets;
    
void goToEnd(int end);
int isComent(void);
void goToEndComent(void);
void mark(int ch);
void check(int ch);

int main(void)
{
    extern int c;
    extern int goahead;
    goahead = TRUE;
  
    while (goahead) {
        if (c != '/') {
            c = getchar();
        }
	if (c == '"' || c == '\'') {
	    goToEnd(c);
	} else if (isComent()) {
	    goToEndComent();
	} else if (c == '(' || c == '{' || c == '[') {
	    mark(c);
	} else if (c == ')' || c == '}' || c == ']' || c == EOF) {
	    check(c);
	} 
    }
    printf("Done!\n");
    return 0;
}

void goToEnd(int end)
{
    extern int c;
    extern int goahead;

    while ((c = getchar()) != end) {
        if (c == EOF) {
	    printf("There is no closing %c character\n", end);
            goahead = FALSE;
            break;
        }
    }
}

int isComent()
{
    extern int c;

    if (c == '/') {
       if ((c = getchar()) == '*') {
           return 1;
       } else {
           return 0;
       }
    }
    return 0;
}

void goToEndComent(void)
{
    extern int c;
    extern goahead;

    int notend = TRUE;
    while (notend) {
        c = getchar();
        if (c == '*') {
            if ((c = getchar()) == '/') {
                notend = FALSE;
            }
        }
        if (c == EOF) {
            printf("There are no closing '*/' characters\n");
            goahead = FALSE;
            break;
        }
    }
}

void mark(int ch)
{
    extern int parentheses;
    extern int braces;
    extern int brackets;

    if (ch == '(') {
	parentheses++;
    } else if (ch == '{') {
        braces++;
    } else if (ch == '[') {
        brackets++;
    }
}

void check(int ch)
{
    extern goahead;
    extern int parentheses;
    extern int braces;
    extern int brackets;
    

    if (ch == ')' && parentheses > 0) {
        parentheses--;
    } else if (ch == EOF && parentheses > 0) {
        printf("UNBALANCED PARENTHESES\n");
        goahead = FALSE;
    } else if (ch == '}' && braces > 0) {
        braces--;
    } else if (ch == EOF && braces > 0) { 
        printf("UNBALANCED BRACES\n");
        goahead = FALSE;
    } else if (ch == ']' && brackets > 0) {
        brackets--;
    } else if (ch == EOF && brackets > 0) { 
        printf("UNBALANCED BRACKETS\n");
        goahead = FALSE;
    } else if (ch == EOF) {
        goahead = FALSE;
    }
}
