class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
          int s = 0;
        int e = numbers.size() - 1;
        int a,b;
        while(s<e){
        if(target > numbers[s] + numbers[e]){
            s++;
        }
        else if(target < numbers[s] + numbers[e]){
           e--;
        }
        else{
            a = s+1;
            b = e+1;
            break;
        }
     } 
       return {a,b}; 
    }
};