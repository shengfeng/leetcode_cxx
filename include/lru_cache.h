#pragma once

#include <unordered_map>

class Node {
public:
    int key, value;
    Node *prev, *next;
    Node(int k = 0, int v = 0): key(k), value(v) {}
};

class LRUCache {
public:
    LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);
private:
    int capacity;
    Node* dummy;
    std::unordered_map<int, Node*> key_to_node;

    void remove(Node *x);
    void push_front(Node *x);
    Node* get_node(int key);
};