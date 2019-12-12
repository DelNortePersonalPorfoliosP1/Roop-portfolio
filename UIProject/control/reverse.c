//
//  reverse.c
//  UIProject
//
//  Created by Vij, Jagroop on 12/4/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#include <stdio.h>
#include "reverse.h"
#include <string.h>
#include <stdlib.h>

char *areverse(char *input){
  if (!input || ! *input)
    return input;
  int i = strlen(input) - 1, j = 0;
  char ch;
  while (i > j)
  {
    ch = input[i];
    input[i] = input[j];
    input[j] = ch;
    i--;
    j++;
  }
  return input;
}
char *recurse(char *input)
{
   char *p1, *p2;
   if (! input || ! *input)
      return input;
   for (p1 = input, p2 = input + strlen(input) - 1; p2 > p1; ++p1, --p2)
   {
      *p1 ^= *p2;
      *p2 ^= *p1;
      *p1 ^= *p2;
   }
   return input;
}
char *pointerrev(char *input)
{
char *begin = input;
char *end = input;
end += strlen(input) - 1;
  while ( begin < end ) {char c = *begin; *begin = *end; *end = c;begin++; end--;}
  return input;
}
char *palendrome(char *input, char *reverse)
{
int x = strcmp(input, reverse);
  if (x == 0) {
    input = "yes";
  }
  else{
    input = "no";
  }
   
  return input;
}
