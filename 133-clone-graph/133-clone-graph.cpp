/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* cur,unordered_map<Node*,Node*>&mp){
        if (!cur)
            return NULL;
        
        if (mp.find(cur)!=mp.end()){
            return mp[cur];
        }
        auto clone=new Node(cur->val);
        mp[cur]=clone;
        vector<Node*>v;
        for (auto it: cur->neighbors){
            
            v.push_back(dfs(it,mp));
        }
        clone->neighbors=v;
        return clone;
    }
    Node* cloneGraph(Node* node) {
        if (!node)
            return NULL;
        unordered_map<Node*,Node*>mp;
        return dfs(node,mp);
    }
};