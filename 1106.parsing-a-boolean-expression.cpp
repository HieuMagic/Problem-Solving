#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        for (char x : expression){
            if (x == '!' || x == '&' || x == '|' ||
             x == 'f' || x == 't'){
                st.push(x);
            }
            else if (x == ')') {
                bool existT = false;
                bool existF = false;
                bool foundCommand = false;
                //Pop the stack until u found a command
                //While then check if T or F exist
                while(!foundCommand){
                    char current = st.top();
                    st.pop();
                    if (current == 't') existT = true;
                    else if (current == 'f') existF = true;
                    else {
                        foundCommand = true;
                        if (current == '!'){
                            if (existF) st.push('t');
                            else if (existT) st.push('f');
                        }
                        else if (current == '&') {
                            if (existF) st.push('f');
                            else st.push('t');
                        }
                        else {
                            if (existT) st.push('t');
                            else st.push('f');
                        }
                    }
                }
            }
        }
        if (st.top() == 'f') return false;
        return true;
    }
};


