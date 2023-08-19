public:

bool isValid(vector<int> &stalls, int k, int mid) {
    int cow = 1;
    int position = stalls[0];
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - position >= mid) {
            cow++;
            position = stalls[i];
        }
    }
    return cow >= k;//return true// else return false
}

int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(), stalls.end());
    int ans = -1;
    int start = 0;
    int end=stalls[stalls.size()-1]-stalls[0];//this is the game//if last element is 9 
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isValid(stalls, k, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}