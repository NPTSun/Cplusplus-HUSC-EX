#include <bits/stdc++.h>

using namespace std;

int main() {
        string s;
    while(getline(cin, s)){
        int a = 0;
        int b = 0;

        for(int i = 0; i <= s.size(); i++){
            if(isupper(s[i]))
                a++;
            else if(islower(s[i]))
                b++;
        }
        
        if( a > b){
            for(int i=0; i<=s.size(); i++)
                s[i]=toupper(s[i]);
        }
        else{
            for(int i=0; i<=s.size(); i++)
                s[i] = tolower(s[i]);
        }
        cout << s << '\n';
    }
    return 0;
}
