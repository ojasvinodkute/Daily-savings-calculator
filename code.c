 #include <stdio.h>
int fun(int n) {
    if (n == 1)
    return 1;
    else
    return n+fun(n - 1);
}
int main(){
    int n;
    printf("Enter how many days you saved money  ");
    scanf("%d", &n);
    if (n<=0)
    printf("Please enter a positive integer\n");
    else {
        int sum =fun(n);
        printf("Total savings in %d days is : %d\n" n, sum);
    }
    return 0;
}
