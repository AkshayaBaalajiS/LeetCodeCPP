// class Solution {
// public:
//     bool isPalindrome(int x) {
        

//     }
// };
class Solution {
public:
    bool isPalindrome(int x) {
        if(x>9)
        {
            std::string var = std::to_string(x);
            std::string result ;
            for(int i=var.size()-1, j=0;i>=0;i--, j++)
            {
                result+= var[i]; 
            }
            if(strcmp(var.c_str(), result.c_str())==0)
            {
                return true;
            }
        }
        else if(x>=0 && x<=9)
        {
            return true;
        }
        return false;

    }
};