int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    reverse(n);
    getch();
    return 0;
}
void reverse(int n)
{
    if(n==0)
        return 0;
    printf("%d",n%10);
    reverse(n/10);
}
