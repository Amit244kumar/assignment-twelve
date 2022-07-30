int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d--> ",n);
    DtoB(n);
    getch();
    return 0;
}
void DtoB(int n)
{
    if(n==0)
        return;
    DtoB(n/2);
    printf("%d",n%2);
}
