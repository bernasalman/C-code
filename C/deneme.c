
void main()
{
    int *p, a[] = {1,2,3,4,5}; 
    printf("%x\n", a);
    p=a;
    ++*p;
    printf("%d\n", p);
    *p++;
    printf("%d\n", p);
    p+=2;
    printf("%d\n", p);
    printf("%x\n", p);
    printf("%d\n", a[0]);
}