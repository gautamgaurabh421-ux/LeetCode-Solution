class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        if(num/10==0){
            return 1;
        }
        int digit;
        int real_num = num;
        while(num>0){
           
            digit = num % 10;
            if(real_num % digit == 0){
                count++;
            }
            num/=10;
        }
        return count;
    }
};