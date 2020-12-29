#include"Node.h"

    
    Node::Node() {
        value = -1;
        leftChild = nullptr;
        rightChild = nullptr;
    }

    Node::Node(int val) {
        value = val;
        leftChild = nullptr;
        rightChild = nullptr;
    }
    

    Node* Node::setLeftChild(Node *lChild) {
        leftChild = lChild;
        return leftChild;
    }

    Node* Node::setRightChild(Node *rChild) {
        rightChild = rChild;
        return rightChild;
    }

    void Node::emptyLeftChild() {
        leftChild = nullptr;
    }

    void Node::emptyRightChild() {
        rightChild = nullptr;
    }

    int Node::setValue(int val) {
        value = val;
        return value;
    }

