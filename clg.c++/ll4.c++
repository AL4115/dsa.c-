#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    // Display Linked List
    void display(Node* head) {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Delete a node
    void deleteNode(Node* node) {
        if (node == NULL || node->next == NULL) {
            return;
        }

        Node* temp = node->next;

        node->data = temp->data;
        node->next = temp->next;

        delete temp;
    }
};

int main() {

    LinkedList list;

    // Creating Linked List
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original List:" << endl;
    list.display(head);

    // Delete node 30
    list.deleteNode(head->next->next);

    cout << "After Deletion:" << endl;
    list.display(head);

    return 0;
}