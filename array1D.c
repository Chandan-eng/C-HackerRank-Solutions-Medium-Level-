# C-HackerRank-Solutions-Medium-Level-
HackerRank Medium Level Solution In C Language

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,arr[max],i,sum=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     for(i=0;i<n;i++){
     sum=sum+arr[i];
     }
     printf("%d",sum);
    return 0;
}
