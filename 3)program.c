int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    OddNumber(n);
    getch();
    return 0;
}
void OddNumber(int n)
{
    if(n==0)
        return;
    OddNumber(n-1);
    printf("%d ",n*2-1);

}
