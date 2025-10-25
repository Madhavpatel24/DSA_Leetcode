class Solution {
public:
    bool isPalindrome(int x) {
        int c=x;
        long long newdig=0;
        if (x<0) 
        {
            return false; // Negative numbers are not palindromes
        }
        else{
 while(c!=0)
        {
           int digit=c%10; //find last digit  
            newdig= newdig*10+digit; //append last digit
            c=c/10; //remove last digit
        }
        if(newdig==x)
        {
            return true; // It's a palindrome
        }
        return false;
        }
       
        
        
    }
};