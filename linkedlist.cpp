#include <iostream>

using namespace std;

class MyNode {
    public:
        int value;
        MyNode *next;
};

int main() {
    MyNode *head = new MyNode();
    MyNode *body = new MyNode();
    MyNode *tail = new MyNode();

    head->value = 77;
    body->value = 88;
    tail->value = 99;

    head->next = body;
    body->next = tail;

    MyNode *temp = head;

    while(temp) {
        cout << "Value is : " << temp->value << endl;
        temp = temp->next;
    }

    MyNode *middle = new MyNode();
    middle->value = 89;

    body->next = middle;
    middle->next = tail;

    temp = head;

    while(temp) {
        cout << "Value is : " << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}
