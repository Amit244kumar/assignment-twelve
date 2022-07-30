int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    EvenNumber(n);
    getch();
    return 0;
}
void EvenNumber(int n)
{
    if(n==0)
        return;
    EvenNumber(n-1);
    printf("%d ",n*2);
}
