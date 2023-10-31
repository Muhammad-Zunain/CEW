#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++){
        for (int j=1;j<n-i;j++){
            printf(" ");
        }
        for (int k=0;k<=i;k++){
            printf("* ");
        }printf("\n");
    
    }
    
   
    

    return 0;
}