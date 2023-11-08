int hourglassSum(int arr_rows, int arr_columns, int **arr)
{
    int col = 0, row = 0;
    int sum = 0;
    int biggest = -37; // lowest possible is -36 // when i was writing this i was thinking about the lowest possible sum, but probably this is wrong.
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (sum > biggest)
                biggest = sum;
        }
    }
    return biggest;
}