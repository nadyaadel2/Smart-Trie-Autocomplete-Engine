#ifndef TRIE_H
#define TRIE_H

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


class TrieNode {
private:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

public:
    TrieNode() : isEndOfWord(false) {}
    friend class Trie;
};


class Trie {
private:
    TrieNode* root;

    void clearHelper(TrieNode* node) {
        for (auto& pair : node->children) {
            clearHelper(pair.second);
        }
        delete node;
    }

public:
    Trie() {
        root = new TrieNode();
    }

    ~Trie() {
        clearHelper(root);
    }


    void insert(const string& word) {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
        }
        current->isEndOfWord = true;
    }

    bool search(const string& word) const {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return current->isEndOfWord;
    }


    bool startsWith(const string& prefix) const {
        TrieNode* current = root;
        for (char ch : prefix) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return true;
    }
};

#endif
