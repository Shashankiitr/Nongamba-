//for min heap

#include <vector>

class PriorityQueue {
    vector<int> pq;

    public;

    PriorityQueue(){

    }

    bool isEmpty(){
        return pq.size()==0;
    }
    //return the size of priority queue - no of elements present
    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()){
            return 0;//PriorityQueue is empty
        }
        return pq[0];
    }

    void insert(int element){
    pq.push_back(element); // Add the element to the end of the vector

    int childIndex = pq.size()-1; // Index of the newly added element

    while(childIndex > 0){
        int parentIndex = (childIndex-1)/2; // Calculate the index of the parent

        if(pq[childIndex] < pq[parentIndex]){ // If the child is smaller than the parent
            int temp = pq[childIndex]; // Swap the child and parent
            pq[childIndex] = pq[parentIndex];
            pq[parentIndex] = temp;
        }
        else{
            break; // If the child is greater than or equal to the parent, break out of the loop
        }

        childIndex = parentIndex; // Move up to the parent level
    }
}

int removeMin() {

    if(pq.empty()) { // If the priority queue is empty
        return 0; // Return 0
    }
    int ans = pq[0]; // Store the minimum value to be returned
    pq[0] = pq[pq.size() - 1]; // Replace the root with the last element
    pq.pop_back(); // Remove the last element from the vector

    int parentIndex = 0; // Start with the root index

    while (parentIndex < pq.size()) {
        int minIndex = parentIndex; // Assume the parent is the minimum
        int leftChild = 2 * parentIndex + 1; // Calculate the index of the left child
        int rightChild = 2 * parentIndex + 2; // Calculate the index of the right child

        // Check if the left child index is within bounds and if it is smaller than the current minimum
        if (leftChild < pq.size() && pq[minIndex] > pq[leftChild]) {
            minIndex = leftChild; // Update the minimum index to the left child index
        }

        // Check if the right child index is within bounds and if it is smaller than the current minimum
        if (rightChild < pq.size() && pq[minIndex] > pq[rightChild]) {
            minIndex = rightChild; // Update the minimum index to the right child index
        }

        if (minIndex != parentIndex) { // If the minimum index is different from the parent index
            int temp = pq[parentIndex]; // Swap the parent with the minimum element
            pq[parentIndex] = pq[minIndex];
            pq[minIndex] = temp;
        } else {
            break; // If the parent is already the minimum, break out of the loop
        }

        parentIndex = minIndex; // Update the parent index for the next iteration
    }

    return ans; // Return the minimum value
}


};