//
//  reverse.c
//  UIProject
//
//  Created by Vij, Jagroop on 12/4/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#include "reverse.h"
#include <string.h>

void print_reverse(char *s) {
size_t len = strlen(s);

char *t = s + len-1;
while(t >= s) {
printf("%c", *t);
 t = t-1;
}
puts("");
  }
int main()
   {
char charinput[100];
printf("Enter character you want to reverse:");
fgets(charinput, 100, stdin);
print_reverse(charinput);
getchar();
    }
