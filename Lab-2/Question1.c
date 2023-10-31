int main() {
    
    //  For loop
    int n,sum = 0;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for (int i=1;i<n+1;i++){
        if (i%2 !=0){
            sum+=i;
            printf("%d ",i);
        }
    }
    printf("\nSum of %dth Odd number: %d",n,sum);


     // While loop
    int n,sum = 0,i=1;
    printf("Enter a number:\t");
    scanf("%d",&n);
    while (i<=n){
        if (i%2 !=0){
            sum+=i;
            printf("%d ",i);
        }
        i++;
    }
    printf("\nSum of %dth Odd number: %d",n,sum);
    
    // Do While loop
    
    int n,sum = 0,i=1;
    printf("Enter a number:\t");
    scanf("%d",&n);
    do{
        if (i%2 !=0){
            sum+=i;
            printf("%d ",i);
        }
        i++;
    }while(i<=n);
    printf("\nSum of %dth Odd number: %d",n,sum);
    
    return 0;
}