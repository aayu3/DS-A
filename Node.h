
#ifndef NODE_H
#define NODE_H
class Node {
    private:
    int value;
    Node* leftChild, *rightChild;

    public:
    Node();
    Node(int val);
    Node* getLeftChild() {
        return leftChild;
    };
    Node* getRightChild() {
        return rightChild;
    };
    int getValue()
    {return value;};
    Node* setLeftChild(Node *lChild);
    Node* setRightChild(Node *rChild);
    void emptyLeftChild();
    void emptyRightChild();
    int setValue(int val);
};

#endif
