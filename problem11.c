int longestPalindrome(char * s){

    int slen = strlen(s);
    int charCount[64] = { 0 };
    for (int i=0; i<slen; i++) {
        int idx = s[i] - 65;
        charCount[idx]++;
    }

    int plen = 0;
    int middleChar = 0;
	
    for (int i=0; i<64; i++) {
        if (charCount[i] > 1) {
            plen += (charCount[i] / 2) * 2;
        }
        if ((charCount[i] == 1 || charCount[i] % 2 == 1 ) && middleChar == 0) {
            plen += 1;
            middleChar = 1;
        }
    }
    return plen;
}