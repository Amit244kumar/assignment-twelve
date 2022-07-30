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
    Nnumber(n-1);
    printf("%d ",n);
}
