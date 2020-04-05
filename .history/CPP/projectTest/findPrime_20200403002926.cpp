/* long prime_ls[MAX + 1]; //store prime number
long generatePrime()
{
    long p[MAX + 1];
    long cnt = 0; //#prime number
    long i, j;
    for (i = 0; i <= MAX; i++)
    {
        p[i] = 1;
    }

    p[0] = p[1] = 0;
    for (i = 2; i <= MAX; i++)
    {
        if (p[i] == 1)
        {
            prime_ls[cnt++] = i;
            for (j = i; j <= MAX; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    return cnt;
}
 */