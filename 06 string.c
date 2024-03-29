
char * addStrings(char * num1, char * num2){

    int sizeNum1 = strlen(num1);
    int sizeNum2 = strlen(num2);
    int sizeOutput = (sizeNum1 > sizeNum2 ? sizeNum1 : sizeNum2) + 1;
    char * output = (char *)malloc(sizeOutput + 1);
    int sum = 0;
    
    output[sizeOutput] = '\0';
    
    while(sizeNum1 > 0 || sizeNum2 > 0 || sum > 0) {
        
        if(sizeNum1 > 0) {
            sum += num1[--sizeNum1] - '0';
        }
        if(sizeNum2 > 0) {
            sum += num2[--sizeNum2] - '0';
        }
        output[--sizeOutput] = sum % 10 + '0';
        sum /= 10;
    }
    return output + sizeOutput;   
}