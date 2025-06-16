// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        unordered_map<int, int> mpp;
        vector <pair<int, int>> v;
        Node *curr = head;
        while(curr){
            if(mpp.find(target - curr->data)!=mpp.end()){
                v.push_back(make_pair(target - curr->data, curr->data));
            }
            mpp[curr->data] = 1;
            curr = curr->next;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};