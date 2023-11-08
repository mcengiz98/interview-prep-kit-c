long repeatedString(char *s, long n)
{
    char *iter = s;
    long ret_count = 0;
    long count_full = 0;
    long len = strlen(s);

    if (len == 1)
    {
        if (*s == 'a') // probably this line is wrong 
        {
            return n;
        }
        else
        {
            return 0;
        }
    }

    for (int i = 0; i < len; ++i)
    {
        if (*iter == 'a')
        {
            count_full++;
        }
        iter++;
    }
    iter = s;
    for (int i = 0; i < (n % len); ++i)
    {
        if (*iter == 'a')
        {
            ret_count++;
        }
        iter++;
    }

    ret_count += (count_full * ((n / len)));
    return ret_count;
}