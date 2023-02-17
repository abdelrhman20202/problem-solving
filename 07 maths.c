bool isHappy(int n){
  if (n < 10) {
    if (n==1 || n==7)
      return true;
    return false;
  }
  
  int squareSum = 0;
  while (n!=0) {
    squareSum += pow(n % 10, 2);
    n /= 10;
  }
  
  return isHappy(squareSum);
}