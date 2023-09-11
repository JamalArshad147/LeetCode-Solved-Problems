class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> returnArray;
        for(int i = 1; i <= n; i++) {
            bool x = (i%3 == 0);
            bool y = (i%5 == 0);
            if(x && y) returnArray.push_back("FizzBuzz");
            else if(x) returnArray.push_back("Fizz");
            else if(y) returnArray.push_back("Buzz");
            else returnArray.push_back(to_string(i));
        }
        return returnArray;
    }
};