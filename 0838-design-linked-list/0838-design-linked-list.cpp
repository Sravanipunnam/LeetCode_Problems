class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node* prev;
        Node(int v) : val(v), next(nullptr), prev(nullptr) {}
    };

    Node* head;  // dummy head
    Node* tail;  // dummy tail
    int size;

public:
    MyLinkedList() {
        head = new Node(0);
        tail = new Node(0);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* curr = head->next; // first real node
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return; // allow index == size

        Node* prevNode = head;
        for (int i = 0; i < index; i++) {
            prevNode = prevNode->next;
        }

        Node* nextNode = prevNode->next;
        Node* newNode = new Node(val);

        newNode->next = nextNode;
        newNode->prev = prevNode;
        prevNode->next = newNode;
        nextNode->prev = newNode;

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        Node* curr = head->next;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }

        Node* prevNode = curr->prev;
        Node* nextNode = curr->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;

        delete curr;
        size--;
    }
};
