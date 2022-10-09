    void solve(int open, int close, int n, vector<string>&result, string &str){
        
        if(open == n && close == n){
            result.push_back(str);
        }
        
        if(open < n){
            str += "(";
            solve(open+1, close, n, result, str);
        }

        if(close < open){
            str+= ")";
            solve(open,close+1,n,result,str);
        }
        
        str.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string str = "";
        int open = 0;
        int close = 0;
        solve(open,close,n, result,str);
        return result;
    }