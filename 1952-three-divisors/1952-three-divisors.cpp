class Solution {
public:
    bool isThree(int n) {
        int divisors = 1;
       for(int i = 1;i<=n/2;i++){
        if(n%i==0){
            divisors++;
        }
       } 
       cout<<divisors<<endl;
       if(divisors == 3){
        return true;
       }
       else{
        return false;
       }
    }
};