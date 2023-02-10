bool isSubsequence(char * s, char * t)
{
    int j = 0;
    for (int i = 0; s[j] && t[i]; i++)
        if (s[j] == t[i])
            j++;

    return j < strlen(s) ? false : true;
}