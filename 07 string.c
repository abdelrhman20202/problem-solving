char * longestCommonPrefix(char ** strs, int strsSize) {
    if (strsSize == 1) {
        return strs[0];
    } else {
        int i = 0, j = 0;
        char ch = strs[i][j];
        
        while ((strsSize > 1) && i++ < strsSize) {
            if ((ch == '\0') || (ch != strs[i][j])) {
                break;
            }
            if (ch == strs[i][j] && i == strsSize - 1) {
                ch = strs[i = 0][++j];
            }
        }

        if (j == 0) {
            return "";
        } else {
            strs[0][j] = '\0';
            return strs[0];
        }
    }
}