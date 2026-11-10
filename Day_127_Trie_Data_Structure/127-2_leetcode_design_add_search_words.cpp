class WordDictionary {
public:
    struct Node {
        Node* links[26];
        bool flag;

        Node() {
            flag = false;
            for (int i = 0; i < 26; i++) {
                links[i] = nullptr;
            }
        }
    };

    Node* root;

    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {
        Node* node = root;

        for (char ch : word) {
            int idx = ch - 'a';

            if (node->links[idx] == nullptr) {
                node->links[idx] = new Node();
            }

            node = node->links[idx];
        }

        node->flag = true;
    }

    bool search(string word) {
        return dfs(word, 0, root);
    }

    bool dfs(string &word, int index, Node* node) {
        if (index == word.size()) {
            return node->flag;
        }

        char ch = word[index];

        if (ch == '.') {
            for (int i = 0; i < 26; i++) {
                if (node->links[i] != nullptr) {
                    if (dfs(word, index + 1, node->links[i])) {
                        return true;
                    }
                }
            }

            return false;
        }

        int idx = ch - 'a';

        if (node->links[idx] == nullptr) {
            return false;
        }

        return dfs(word, index + 1, node->links[idx]);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */