// max priority queue class

#include <vector>

class PriorityQueue {
    // Declare the data members here
    vector<int> pq;

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        pq.pushback(element);
        int childIndex = pq.size()-1;
        while(childIndex>0){
            int parentIndex = (childIndex-1)/2;
            if(pq[parentIndex]<pq[childIndex]){
                //swap
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[childIndex];
                pq[childIndex] = temp;
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
    }

    int getMax() {
        // Implement the getMax() function here
        if(pq.empty()){
            return 0;
        }
        else{
            return pq[0];
        }
    }

    int removeMax() {
        // Implement the removeMax() function here
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        int parentIndex = 0;
        while(parentIndex<pq.size()){
            int maxIndex = parentIndex;
            int leftChild = 2*parentIndex+1;
            int rightChild = 2*parentIndex+2;
            if(leftChild<pq.size() && pq[leftChild]>pq[maxIndex]){
                maxIndex = leftChild;
            }
            else if(rightChild<pq.size() && pq[rightChild]>pq[maxIndex]){
                maxIndex = rightChild;
            }

            if(maxIndex!=parentIndex){
                //swap
                int temp = pq[maxIndex];
                pq[maxIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else{
                break;
            }
            parentIndex = maxIndex;
        }
        return ans;
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size() == 0;
    }
};