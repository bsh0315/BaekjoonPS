#include<iostream>
#include<string>

using namespace std;
int main() {
    int N = 0;
    cin >> N; 
    string* sArray = new string[N];

    for(int i = 0; i<N; ++i) {
        cin >> sArray[i];
    }
    
    
    for(int i = 0; i<N; ++i){
        int lSize = 0, rSize = 0, detector = 0;
        
        for(int j = 0; j<sArray[i].size(); ++j){
            if(sArray[i][j] == '('){
                ++lSize;
            }
            else if(sArray[i][j] == ')'){
                ++rSize;
            }

            if(lSize < rSize){
                cout << "NO" << endl;
                detector = 1;
                break;
            }

        }
        if(lSize == rSize){
                cout << "YES" << endl;
            }
        else if(detector != 1){
            cout << "NO" << endl;
        }
    }

}