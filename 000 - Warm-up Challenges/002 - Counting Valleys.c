int countingValleys(int steps, char *path)
{
    int altitude = 0;
    int valleyCount = 0;
    int flag = 0;
    for (int i = 0; i < steps; ++i)
    {
        if (*path == 'U')
        {
            altitude++;
        }
        else
        {
            altitude--;
        }
        if (altitude > 0)
        {
            flag = 1;
        }
        if ((!flag) && (altitude == 0))
        {
            valleyCount++;
        }
        if ((altitude == 0))
        {
            flag = 0;
        }
        path++;
    }
    return valleyCount;
}