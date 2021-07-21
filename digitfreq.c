# C-HackerRank-Solutions-Medium-Level-
HackerRank Medium Level Solution In C Language

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch[1000];
    int count;
    scanf("%s",ch);
    int s=strlen(ch);
    for(int i=48;i<=57;i++){
        count=0;
     for(int j=0;j<s;j++){
         if(i==ch[j])
         count++;
     }
     printf("%d ",count);
    } 
    return 0;
}
