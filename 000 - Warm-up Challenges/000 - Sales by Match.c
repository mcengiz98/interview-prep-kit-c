int sockMerchant(int n, int ar_count, int *ar)
{
    int colors[100] = {0};
    int pairs = 0;

    for (int i = 0; i < n; ++i)
    {
        colors[--(*ar)]++;
        ar++;
    }

    int flag = 0;
    for (int i = 0; i < 100; ++i)
    {
        if (0 == colors[i])
        {
            continue;
        }
        pairs += colors[i] / 2;
    }

    return pairs;
}