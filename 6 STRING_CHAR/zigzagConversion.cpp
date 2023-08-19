class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        // Divide the input string into multiple strings, each forming a zigzag pattern
        vector<string> str(numRows);
        int i = 0; // to iterate row inside vector of str
        int j = 0; // to iterate column inside original string
        int direction = 1; // if 1 then top to bottom else bottom to up
        while(true){
            if(direction){
                // move from top to bottom
                while(i < numRows && j < s.size()){
                    str[i++].push_back(s[j++]);
                }
                i = numRows - 2; // for reverse direction
            }
            else{
                // move from bottom to up
                while(j < s.size() && i >= 0){
                    str[i--].push_back(s[j++]);   
                }
                i = 1; // for top to bottom direction
            }
            if(j >= s.size()) break;  
            direction = !direction; // change direction
        }
        
        // concatenate all strings inside the vector to ans
        string ans = "";
        for(int i = 0; i < str.size(); i++){
            ans += str[i];
        }
        return ans;    
    }
};
