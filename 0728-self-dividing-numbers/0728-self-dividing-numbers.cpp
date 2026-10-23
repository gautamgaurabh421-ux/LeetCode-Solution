class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;

        while (left <= right) 
        {
            int num = left;
            bool isSelfDividingNumber = true;
            while (num != 0) 
            {
                int digit = num % 10;
                num /= 10;

                if (digit == 0 || left % digit != 0) 
                {
                    isSelfDividingNumber = false;
                    break;
                }
            }
            if (isSelfDividingNumber)
                result.push_back(left);

            left++;
        }

        return result;
    }
};