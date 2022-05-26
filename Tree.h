#pragma once
#include "Node.h"

template <typename T>
class Tree {
    private:
        Node<T>* root;
    public:
        Tree() {
            root = nullptr;
        }

        template <typename type1>
        void addNode(char position, const type1& newValue) {
            Node* newNode = new Node<type1>(newValue);
            if(root == nullptr) {
                root = newNode;
            }
            else {
                if(position == 'r') {
                    root->right = newNode;
                }
                else if(position == 'l') {
                    root->left = newNode;
                }
            }
        }

        template <typename type2>
        void setNode(const type2& newValue) {
            root->value = newValue;
        }

        void delNode() {
            delete root;
        }
};