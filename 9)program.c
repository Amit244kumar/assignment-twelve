int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d--> ",n);
    DtoO(n);
    getch();
    return 0;
}

void DtoO(int n)
{
    if(n==0)
        return;
    DtoO(n/8);
    printf("%d",n%8);
}
