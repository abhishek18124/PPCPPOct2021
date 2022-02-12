/*

    Given k sorted arrays, merge them and print the sorted output.

    k = 3
    Input : {
                {1, 3, 5, 7}, 
                {2, 4, 6, 8}, 
                {0, 9, 10, 11}
            }

    Output: 0 1 2 3 4 5 6 7 8 9 10 11 

*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class triple {
    public :
        int val;
        int val_idx;
        int arr_idx;

        triple(int val, int arr_idx, int val_idx) {
            this->val = val;
            this->val_idx = val_idx;
            this->arr_idx = arr_idx;
        }
};

class comparator {

    public :

        bool operator()(triple a, triple b) {
            return b.val < a.val;
        }

};


int main() {

    vector<vector<int>> inp = {{1, 3, 5, 7}, 
                               {2, 4, 6, 8}, 
                               {0, 9, 10, 11}};

    int k = inp.size();

    vector<int> out;

    // priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

    // for(int arr_idx=0; arr_idx<k; arr_idx++) {
    //     int val_idx = 0;
    //     int val = inp[arr_idx][val_idx];
    //     minHeap.push({val, arr_idx, val_idx});
    // }

    // while(!minHeap.empty()) {
    //     vector<int> minVec = minHeap.top();
    //     minHeap.pop();

    //     int minVal = minVec[0];
    //     int arr_idx = minVec[1];
    //     int val_idx = minVec[2];

    //     out.push_back(minVal);
    //     if(val_idx+1 < inp[arr_idx].size()) {
    //         int val = inp[arr_idx][val_idx+1];
    //         minHeap.push({val, arr_idx, val_idx+1});
    //     }
    // }

    priority_queue<triple, vector<triple>, comparator> minHeap;

    for(int arr_idx=0; arr_idx<k; arr_idx++) {
        int val_idx = 0;
        int val = inp[arr_idx][val_idx];
        minHeap.push(triple(val, arr_idx, val_idx));
    }

    while(!minHeap.empty()) {
        triple t = minHeap.top();
        minHeap.pop();

        out.push_back(t.val);
        if(t.val_idx+1 < inp[t.arr_idx].size()) {
            int val = inp[t.arr_idx][t.val_idx+1];
            minHeap.push(triple(val, t.arr_idx, t.val_idx+1));
        }
    }

    for(int i=0; i<out.size(); i++) {
        cout << out[i] << " ";
    }


    cout << endl;



    return 0;
}








