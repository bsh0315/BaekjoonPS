#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string s;
    cin >> s;
    int cro_size = croatian.size();
    int loc;

    for(int i = 0; i<cro_size; ++i){
        while(1){
            loc = s.find(croatian[i]);
            if(loc == string::npos){
                break;
            }
            s.replace(loc, croatian[i].size(), "#");        
        }
    }
    cout << s.size() << '\n';

}