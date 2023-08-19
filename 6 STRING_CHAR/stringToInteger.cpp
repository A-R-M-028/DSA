class Solution {
public:
    int myAtoi(string s) {
        // int ans=atoi( s.c_str());
        //1 ignore the spaces
        int i=0;int number=0;int sign=1;//let 1 means is positive
        while(s[i]==' '){
            i++;
        }
        //now i on the out of spaces
        //check i out of bound or not also and sign
        if(i<s.size()&&(s[i]=='-'||s[i]=='+')){
            sign=s[i]=='+'?1:-1;
            i++;
        }
        while(i<s.size()&&isdigit(s[i])){
            //this is the game*****************
            if(number>INT_MAX/10||(number==INT_MAX/10&&s[i]>'7')){
                return sign==1?INT_MAX:INT_MIN;
            }
            //char to num by ascii value
            number=number*10+(s[i]-'0');
            //if number is out of bound
            i++;
        }
 

        return number*sign;
    }
};