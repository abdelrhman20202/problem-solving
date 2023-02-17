int* plusOne(int* digits, int digitsSize, int* returnSize){
    int carry = 1;
    int* returnDigits = NULL;
    
	
    for (int i = digitsSize - 1; i > -1; i--)
    {
        digits[i] += carry;
        if (digits[i] == 10) 
        {
            digits[i] = 0;
            carry = 1;
        }
        else carry = 0;
    }
    
    if (carry) 
    {
        *returnSize = (digitsSize + 1);
        returnDigits = (int*) malloc(sizeof(int) * (*returnSize));
        returnDigits[0] = carry;
        for (int i = 1; i < (*returnSize); i++) returnDigits[i] = digits[i - 1];
    }
    else
    {
        *returnSize = digitsSize;
        returnDigits = (int*) malloc(sizeof(int) * (*returnSize));
        for (int i = 0; i < (*returnSize); i++) returnDigits[i] = digits[i];
    }
    
    return returnDigits;
}