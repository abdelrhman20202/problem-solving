int sumBase(int n, int k){
    
    int * new_n = (int*)malloc(sizeof(int)*32);
    int x = n;
    int i = 0;
    while (x > 0){
        int d = x % k;
        new_n[i] = d;
        i++;
        x = x / k;
    }

    
    int sol = 0;
    for (int j = 0; j < i; j++){
        sol += new_n[j];
    }

    free(new_n);

    return sol;
}