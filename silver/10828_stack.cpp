// 10828 간단한 스택 구현

#include<iostream>
#include<string>
using namespace std;
const int maxSize = 10000;

class stack{
    int stack[maxSize];
    int topIndex = -1;
public:
    void push(int key);
    void pop();
    void size();
    void empty();
    void top();
};

void stack::push(int key){
    if(topIndex == maxSize-1)
        return ;
    stack[++topIndex] = key;
}

void stack::pop(){
    if(topIndex == -1){
        cout << -1 << endl;
        return ;
    }
    cout << stack[topIndex--] << endl;
}

void stack::size(){
    cout << topIndex+1 << endl;
}

void stack::empty(){
    if(topIndex == -1){
        cout << 1 << endl;
        return;
    }
    cout << 0 << endl;
}

void stack::top(){
    if(topIndex == -1){
        cout << -1 << endl;
        return ;
    }
    cout << stack[topIndex] << endl; 
}

int main(){
    stack stack;
    int num = 0;
    cin >> num;

    for(int i = 0; i<num; ++i){
        string option;
        cin >> option;

        if(option == "push"){
            int key = 0;
            cin >> key;
            stack.push(key);
        } else if (option == "pop"){
            stack.pop();
        } else if(option == "size"){
            stack.size();
        } else if(option == "empty"){
            stack.empty();
        } else if(option == "top"){
            stack.top();
        } 
        
    }


    return 0; 
}