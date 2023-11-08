int *rotLeft(int a_count, int *a, int d, int *result_count)
{
    int *arr = (int *)malloc(a_count * sizeof(int));
    int *a_temp = a + d;
    int *arr_temp = arr;
    *result_count = a_count;

    for (int i = 0; i < (a_count - d); ++i)
    {
        *(arr_temp++) = *(a_temp++);
    }

    for (int i = 0; i < d; ++i)
    {
        *(arr_temp++) = *(a++);
    }

    return arr;
}