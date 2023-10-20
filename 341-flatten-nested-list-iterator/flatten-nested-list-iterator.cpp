/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
private:
vector<int> items; 
int cur = 0; 
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(int i = 0; i < nestedList.size(); i++){
            if(nestedList[i].isInteger()){
                items.push_back(nestedList[i].getInteger()); 
            }
            else
            {
                auto j = NestedIterator(nestedList[i].getList()); 
                while (j.hasNext()) items.push_back(j.next()); 
            }
        }
        
    }
    
    int next() {
        return items[cur++];
        
    }
    
    bool hasNext() {
        return (cur < items.size());
        
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */