class ListNode {
public: 
    int value; 
    ListNode* next;
    
    ListNode(int val) : value(val), next(nullptr) {}
    ListNode(int val, ListNode* nextNode): value(val), next(nextNode) {}

};


class LinkedList {
private: 
    ListNode* head;
    ListNode* tail;

public:

    LinkedList() {
        head = new ListNode(-1);
        tail = head;
    }

    int get(int index) {

        ListNode* curr = head->next;
        int i = 0; 
        while (curr != nullptr) {
            if (i == index) {
                return curr->value;
            }

            i++;
            curr = curr->next;
        }

        return -1;

    }

    void insertHead(int val) {
        ListNode* newHead = new ListNode(val);
        newHead->next = head->next;
        head->next = newHead;

        if (tail == head) {
            tail = newHead;
        }
    }
    
    void insertTail(int val) {

        ListNode* newTail = new ListNode(val); 
        tail->next = newTail; 
        tail = newTail; 

    }

    bool remove(int index) {
        
        ListNode* prev = head; 
        int i = 0;

        while (prev->next != nullptr) {

            if (i == index) {
                ListNode* del = prev->next;
                prev->next = del->next;
                
                if (del == tail) {
                    tail = prev; 
                }

                delete del; 
                return true;
            }

            prev = prev->next;
            i++;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> values; 
        ListNode* curr = head->next;
        while (curr != nullptr) {
            values.push_back(curr->value);
            curr = curr->next;
        }

        return values;
        
    }
};
