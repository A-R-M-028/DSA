class Solution {
public:
bool isPrime(int num){
    if(num<=1) return false;
    // for(int i=2;i<num;i++){//2<2 is false for loop
      for(int i=2;i<=sqrt(num);i++){
          //sqrt of 3,5,7?????; clear as sqrt will give decimal point value!
        if(num%i==0){
            return false;
        }
    }
    return true;
}
    int countPrimes(int n) {
        int count=0;
        //here 1 to n check prime or not not a particular num as always
        for(int i=0;i<n;i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
    }
};