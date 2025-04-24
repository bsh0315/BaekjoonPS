// 원형 큐 구현.
#include<bits/stdc++.h>
using namespace std;

#define SIZE 10

template<typename T>
class circularQueue{
public:
    T arr[SIZE];
    T front = 0, rear = 0;
    
    bool isEmpty(){
        return front == rear;
    }
    bool isFull(){
        return front == (rear+1)%SIZE;
    }
    void front_print(){
        if(isEmpty()){
            cout << "Error, queue is empty" << '\n';
        }
        else{
            cout << "front index loc :"  << this->front << '\n';
            cout << "front index val :"  << this->arr[front] << '\n';
        }
    }
    void rear_print(){
        if(isEmpty()){
            cout << "Error, queue is empty" << '\n';
        }
        else{
            cout << "rear index loc :"  << this->rear << '\n';
        }
    }
    void print_queue(){
        if(isEmpty()){
            cout << "Error, queue is empty" << '\n';
        }
        else{
            int i = front;
            while (i != rear) {
                cout << "index : " << i << ", value : " << arr[i] << '\n';
                i = (i + 1) % SIZE;
            }
            cout << "front : " << this->front << '\n';
            cout << "rear : " << this->rear << '\n';
        }
    }
    T size(){
        if(front <= rear) {return rear-front;}
        else {return SIZE - (front - rear);}
    }
    void enQueue(T element){
        if(!isFull()){
            arr[rear++] = element;
            rear %= SIZE;
        }
        else{
            cout << "Error! full queue.";
        }
    }
    void dequeue(){
        if(!isEmpty()){
            cout << "ouput value : " << arr[front++] << '\n';
            front = (front)%SIZE;
        }
        else{
            cout << "Error! full queue.";
        }
    } 
};


int main(){
    circularQueue<int> cq;
    int n;
    while(1){
        cout << "------------------------------" << '\n';
        cout << "----------M E N U-------------" << '\n';
        cout << "------------------------------" << '\n';
        cout << "1. front_print   2. rear_print" << '\n';
        cout << "3. queue_print   4. size_print" << '\n';
        cout << "5. enqueue       6. dequeue" << '\n';
        cout << "7. exit" << '\n' << '\n';
        cout << "Input number : _\b";
        
        cin >> n;
        switch(n){
            case 1: {
                cq.front_print();
                break;
            }
            case 2: {
                cq.rear_print();
                break;
            }
            case 3: {
                cq.print_queue();
                break;
            }
            case 4: {
                cout << "size of queue : " << cq.size() << '\n';
                break;
            }
            case 5: {
                int num;
                cout << "input number to enqueue : _\b";
                cin >> num;
                cq.enQueue(num);
                cout << '\n';
                cq.print_queue();
                break;
            } 
            case 6: {
                cq.dequeue();
                cq.print_queue();
                break;
            }
            case 7: {
                cout << "exit program." << '\n';
                exit(1);
            }
            default: {
                cout << "Invalid Input!, plz try again." << '\n';
            }
        }
    }

}