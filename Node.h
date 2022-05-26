#pragma once

template <typename T>
class Node {
    private:
        T value;
        Node* left;
        Node* right;
    public:
        Node(const T& newValue) {
            value = newValue;
            left = nullptr;
            right = nullptr;
        }
};