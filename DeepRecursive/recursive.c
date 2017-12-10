
unsigned long fact(unsigned int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

unsigned long tail_fact(unsigned int n, unsigned long a)
{
    if (n == 0 || n == 1)
    {
        return a;
    }
    else
    {
        return tail_fact(n-1, n*a);
    }
}
