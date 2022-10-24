class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1; i<=n; i++){
            int a, b;
            a = (i%3==0);
            b = (i%5==0);
            
            if(a && b){
                answer.push_back("FizzBuzz");
            }
            else if(a){
                answer.push_back("Fizz");
            }
            else if(b){
                answer.push_back("Buzz");
            }
            else{
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};
