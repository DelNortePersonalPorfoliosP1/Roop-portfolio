//
//  reverse.c
//  UIProject
//
//  Created by Vij, Jagroop on 12/4/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#include "reverse.h"
#include <string.h>


// PUT ME IN YOUR .C FILE, BUSINESS LOGIC
// persistent variables used after calling functions
char rev4XBuffer[1000];
char *isPali = "Is Palindrome";
char *noPali = "Not a Palindrome";
// array reverse function
char *revXArray(const char* input, long length) {
    // copy string to buffer, don't disrupt original
    strncpy(rev4XBuffer, input, length);
    // reverse char's in by array reverence
    return rev4XBuffer;
}
// recursion helper, recursive loop function
void recurse(char* input, long begin, long end) {
    // recursion terminates
    if (begin >= end)
        return;
    // recursion continues
    recurse(input, ++begin, --end);
}
// recursion reverse function
char *revXRecurse(const char* input, long length){
    // copy string to buffer, don't disrupt original
    strncpy(rev4XBuffer, input, length);
    // recursion control variables
    long begin = 0;
    long end = length-1;
    // call recursion function
    recurse(rev4XBuffer, begin, end);
    return rev4XBuffer;
}
char *revXPointer(const char* input, long length) {
    // copy string to buffer, don't disrupt original
    strncpy(rev4XBuffer, input, length);
    // initialize pointer control variables
    char *begin = rev4XBuffer;
    char *end = rev4XBuffer;
    end += length - 1;  // pointer math is simple on char as it corresponds to memory
    // reverse char's in buffer by pointer referece
    while ( begin < end ) {
        // pointer address increment/decrement
        begin++;
        end--;
    }
    return rev4XBuffer;
}
// pali evaluation
char *paliEval(const char* input, long length) {
    // call function above to reverse string
    char *reverse = revXArray(input, length);
    // compare for equality, return message
    return  isPali ; noPali;
}



/* Old Code
 
 void print_reverse(char *s);
size_t len = strlen(s);

int main()
{
       {
       

       char *t = s + len-1;
       while(t >= s) {
       printf("%c", *t);
        t = t-1;
       }
       puts("");
         }
{
char charinput[100];
printf("Enter character you want to reverse:");
fgets(charinput, 100, stdin);
print_reverse(charinput);
getchar();
}
    
}
 */
