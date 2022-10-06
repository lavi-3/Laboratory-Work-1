//implement a queue
#include <iostream>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;
int createQueue() {
    queue<int> q;
    q.push(25);
    q.push(59);
    q.push(11);
    q.push(37);
    q.push(42);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
}

        int createDequeue() {
            deque<int> dq;
            dq.push_back(25);
            dq.push_back(59);
            dq.push_back(11);
            dq.push_back(37);
            dq.push_back(42);

            cout << dq.front() << endl;
            dq.pop_front();
            cout << dq.front() << endl;
            dq.pop_front();
            cout << dq.front() << endl;
            dq.pop_front();
            cout << dq.front() << endl;
            dq.pop_front();
            return 0;
        }

//int searchQueue() {
//    queue<int> q;
//    q.push(25);
//    q.push(59);
//    q.push(11);
//    q.push(37);
//    q.push(42);
//    //search for inputted value
//    int search;
//    cout << "Enter a value to search for: ";
//    cin >> search;
//    if (find(q.front(), q.back(), search) != q.back()) {
//        cout << "Value found" << endl;
//    }
//    else {
//        cout << "Value not found" << endl;
//    }
//}

int sortQueue() {
    deque<int> d;
     d.push_back(25);
     d.push_back(59);
     d.push_back(11);
     d.push_back(37);
     d.push_back(42);
     //sort queue in ascending order
     sort(d.begin(), d.end());
     //print queue
      for (int i = 0; i < d.size(); i++) {
         cout << d[i] << endl;
          }
          return 0;
        }


    //function to reverse a queue
    int reverseQueue() {
        deque<int> d;
        d.push_back(25);
        d.push_back(59);
        d.push_back(11);
        d.push_back(37);
        d.push_back(42);
        //reverse queue
        reverse(d.begin(), d.end());
        //print queue
        for (int i = 0; i < d.size(); i++) {
            cout << d[i] << endl;
        }
        return 0;
    }

//create a priority queue
int createPriorityQueue() {
    priority_queue<int> pq;
    pq.push(25);
    pq.push(59);
    pq.push(11);
    pq.push(37);
    pq.push(42);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    return 0;
}

    //create a circular queue
    int circularQueue() {
        deque<int> d;
        d.push_back(25);
        d.push_back(59);
        d.push_back(11);
        d.push_back(37);
        d.push_back(42);
        //print queue
        for (int i = 0; i < d.size(); i++) {
            cout << d[i] << endl;
        }
        //add value to front of queue
        d.push_front(100);
        //print queue
        for (int i = 0; i < d.size(); i++) {
            cout << d[i] << endl;
        }
        //remove value from back of queue
        d.pop_back();
        //print queue
        for (int i = 0; i < d.size(); i++) {
            cout << d[i] << endl;
        }
        return 0;
    }

    int main() {
       cout <<"Chose an option: " << endl;
         cout << "1. Create a queue" << endl;
            cout << "2. Create a dequeue" << endl;
         //   cout << "3. Search a queue" << endl;
            cout << "4. Sort a queue" << endl;
            cout << "5. Reverse a queue" << endl;
            cout << "6. Create a priority queue" << endl;
            cout << "7. Create a circular queue" << endl;
            cout << "8. Exit" << endl;
            int option;
            cin >> option;
            switch (option) {
            case 1:
                createQueue();
                break;
            case 2:
                createDequeue();
                break;
//            case 3:
//                searchQueue();
//                break;
            case 4:
                sortQueue();
                break;
            case 5:
                reverseQueue();
                break;
            case 6:
                createPriorityQueue();
                break;
            case 7:
                circularQueue();
                break;
            case 8:
                exit(0);
                break;
            default:
                cout << "Invalid option" << endl;
                break;

            }
    }