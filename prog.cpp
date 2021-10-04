#include<iostream>
using namespace std; 

void solve(string str){
    int count[256] = {0}; 

    for(int i = 0; i< str.length(); i++){

        count[str[i]]++; 
    }

    int mx = -1; 

    for(int i = 0; i< 256; i++){

        mx = max(mx, count[i]); 
    } 
    string res = "";  
    // now traverese the original string 
    for(int i = 0; i< str.length(); i++){
        bool flag = true; 
        for(int j = 0; j < i; j++){
            if(str[i] == str[j]){
                flag = false; 
                break;
            }
        }
        int count = 1; 
        if(flag){
            for(int j = i+1; j< str.length(); j++){
                if(str[i] == str[j]){
                    count++; 
                }
            }
        }
        if(count == mx){
            res.push_back(str[i]);
            res.push_back(',');
        }
    }
    res.pop_back(); 

    cout << res; 

}

int main(){

    string str;

    getline(cin, str); 

    solve(str);

    return 0; 

}