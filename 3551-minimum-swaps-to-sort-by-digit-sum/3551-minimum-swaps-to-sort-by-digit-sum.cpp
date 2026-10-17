class Solution {
public:
    int digit_sum(int n){
        int sum = 0;
        while(n > 0){
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<int> after_s(nums);

        auto lambda = [&] (int a, int b) {
            int sa = digit_sum(a);
            int sb = digit_sum(b);

            if(sa == sb) return a < b;
            return sa < sb;
        };

        sort(begin(after_s), end(after_s), lambda);

        unordered_map<int, int> eval;
        for(int i = 0; i < n; i++){
            eval[nums[i]] = i;
        }

        int count = 0;
        for(int i = 0; i < n; i++){
            int expected = after_s[i];
            int current = nums[i];

            if(expected == current) continue;

            int idx = eval[expected];
            nums[i] = expected;
            nums[idx] = current;

            eval[expected] = i;
            eval[current] = idx;

            count++;
        }

        return count;
    }
};