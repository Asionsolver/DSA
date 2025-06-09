bool primeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}