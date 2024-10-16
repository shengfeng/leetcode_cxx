#include "lru_cache.h"

LRUCache::LRUCache(int capacity): capacity(capacity), dummy(new Node) {
    dummy->prev = dummy;
    dummy->next = dummy;
}

void LRUCache::remove(Node *x) {
    x->prev->next = x->next;
    x->next->prev = x->prev;
}

void LRUCache::push_front(Node *x) {
    x->prev = dummy;
    x->next = dummy->next;
    x->prev->next = x;
    x->next->prev = x;
}

Node *LRUCache::get_node(int key) {
    auto it = key_to_node.find(key);
    if (it == key_to_node.end()) {
        return nullptr;
    }
    auto node = it->second;
    remove(node);
    push_front(node);
    return node;
}

int LRUCache::get(int key) {
    auto node = get_node(key);
    return node ? node->value : -1;
}

void LRUCache::put(int key, int value) {
    auto node = get_node(key);
    if (node) {
        node->value = value;
        return;
    }
    key_to_node[key] = node = new Node(key, value);
    push_front(node);
    if (key_to_node.size() > capacity) {
        auto back_node = dummy->prev;
        key_to_node.erase(back_node->key);
        remove(back_node);
        delete back_node;
    }

}