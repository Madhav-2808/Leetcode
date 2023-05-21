class Solution {
public:
    bool isPerfectSquare(int num) {
        long long start = 1;
        long long end = num;
        while(start<=end){
            long long mid = start-(start-end)/2;
            long long pow = mid*mid;
            if(pow < num)   start = mid+1;
            else if(pow > num)  end = mid-1;
            else    return true;
        }
    return false;
    }
};
