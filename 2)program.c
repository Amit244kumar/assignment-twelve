int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    Nnumber(n);
    getch();
    return 0;
}
void Nnumber(int n)
{
    if(n==0)
        return;
    printf("%d ",n);
    Nnumber(n-1);
}
