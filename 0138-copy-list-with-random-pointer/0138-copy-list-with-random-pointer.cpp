/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    if(head==NULL)
    return NULL;
    
    unordered_map<Node*, Node*> nodeMap;
    
    // Create new nodes and populate the hashmap
    Node* current = head;
    while (current) {
        nodeMap[current] = new Node(current->val);
        current = current->next;
    }
    
    // Update next and random pointers
    current = head;
    while (current) {
        nodeMap[current]->next = nodeMap[current->next];
        nodeMap[current]->random = nodeMap[current->random];
        current = current->next;
    }
    
    return nodeMap[head];
}
};