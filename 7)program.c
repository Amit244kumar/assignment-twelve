int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    square(n);
    getch();
    return 0;
}
void square(int n)
{
    if(n==0)
        return;
    square(n-1);
    printf("%d -- %d\n",n,n*n);

}
