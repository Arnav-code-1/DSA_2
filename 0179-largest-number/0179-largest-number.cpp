struct mycmp{
    bool operator()(string &a , string &b){
        string temp1 = a + b;
        string temp2 = b + a;
        if(temp1 > temp2)return true;
        return false;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for(auto x : nums){
            int number = x;
            string str = "";
            if(number == 0)str = "0";
            while(number){
                char ch = ((number%10)+'0');
                str = ch + str;
                number = number / 10;
            }
            temp.push_back(str);
        }
        sort(temp.begin() , temp.end() , mycmp());
        string result = "";
        for(auto str : temp){
            if(str == "0" && result.size()==0)return "0";
            result += str;
        }
       return result;
    }
};