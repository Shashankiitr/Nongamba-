#include <bits/stdc++.h>
using namespace std;

void explainPair(){

    //single pair
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    //pair in pair
    pair<int , pair<int , int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p.second.second << " " << p.second.first << endl;

    // pair array
    pair<int, int> p3 = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << p3[3].first << endl;

}

void explainVector(){

    vector<int> v;

    v.push_back(10);
    v.emplace_back(11);

    vector<pair<int, int>> v1;

    v1.push_back({1, 2});
    v1.emplace_back(1, 2); // point of difference

    vector<int> v2(5, 100); // container with 5 instances of 100
    vector<int> v3(5);// container with 5 instances of 0
    // can also wirite (5, 0)

    vector<int> v1(5, 20);
    vector<int> v2(v1); //v2 is copy of v1 

    //iterator
    vector<int>::iterator it = v.begin();//points to the memory of first element of vector v
    it++;
    cout << *(it) << endl;

    it+=2;
    vector<int>::iterator it1 = v.end(); // points to the memory just after the end element

    //print a vector

    for(vector<int>:: it = v.begin() ; it!=v.end() ; it++){
        cout << *(it) << endl;
    }

    for(auto it = v.begin() ; it!=v.end() ; it++){
        cout << *(it) << endl;
    }

    for(auto it : v){//here auto is int
        cout << it << endl;
    }

    //deletion of vector
    //{1, 2, 3, 4, 5}
    v.erase(v.begin()+1)//{1, 3, 4, 5}

    //{1, 2, 3, 4, 5}
    v.erase(v.begin()+1, v.begin()+4)//{1, 5}  [start address, end address)
    
    

     


}

int main(){

    return 0;
}