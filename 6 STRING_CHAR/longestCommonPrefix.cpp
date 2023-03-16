// class Solution {
// public:
// string longestCommonPrefix(vector<string>& strs) {
//     string ans = "";
//     int n = strs.size();
//     int i = 0;
//     for (i = 0; i < n; i++) {
//         char ch = strs[0][i];
//         bool match = true;
//         for (int j = 1; j < n; j++) {
//             if (ch != strs[j][i]) {
//                 match = false;
//                 break;
//             }
//         }
//         if (match == true) {
//             ans.push_back(strs[0][i]);
//         } else {
//             break;
//         }
//     }
//     return ans;
// }

// };


// class Solution {
// public:
// string longestCommonPrefix(vector<string>& strs) {
//     string ans = strs[0];
//     if(strs.size()==0) return "";
//     for (int i=1;i<strs.size();i++){
//         for(int j=0;j<strs[i].size();j++){
//             if(ans[j]!=strs[i][j]){
//                 break;
//             }
//             //first break then update the substring
//             ans=ans.substr(0,j);
//         }
//     }
//         return ans;
//     }
// };
//this is the best solution go ahead
class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";//"" -> means empty
    }
    
    string ans = strs[0];
    
    for (int i = 1; i < strs.size(); i++) {
        int j;
        for (j = 0; j < strs[i].size(); j++) {
            if (ans[j] != strs[i][j])
                break;
        }
        ans = ans.substr(0, j);
        // if (ans == "")
        //     return ans;
    }
    
    return ans;
}
};





