int *fairCandySwap(const int *a, int a_length, const int *b, int b_length, int *result_length)
{
    int *result = NULL;
    *result_length = 0;

    long long sum_a = 0, sum_b = 0;
    for (int i = 0; i < a_length; ++i)
        sum_a += a[i];
    for (int i = 0; i < b_length; ++i)
        sum_b += b[i];

    bool b_elements[100001] = {false};
    for (int i = 0; i < b_length; ++i)
        b_elements[b[i]] = true;
    
    for (int i = 0; i < a_length; ++i)
    {

        int bar1 = a[i];
        int bar2 = (sum_b - sum_a + bar1 * 2) / 2;
        if (1 <= bar2 && bar2 <= 100000 && b_elements[bar2])
        {
            result = malloc(2 * sizeof(int));
            result[0] = bar1;
            result[1] = bar2;
            *result_length = 2;
            break;
        }
    }
    return result;
}