
#include<iostream>
#include<queue>

using namespace std;

string reorganise(string str) {

    // 1. build a freq map

    int freq[26] = {0};
    for (char ch : str) {
        freq[ch - 'a']++;
    }

    // 2. build a maxheap

    priority_queue<pair<int, char>> maxHeap;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            maxHeap.push({freq[i], i + 'a'});
        }
    }

    // while (!maxHeap.empty()) {

    //     pair<int, char> p = maxHeap.top();
    //     maxHeap.pop();
    //     cout << p.first << " " << p.second << endl;

    // }

    string out = "";

    while (!maxHeap.empty()) {

        if (maxHeap.size() == 1) {

            pair<int, char> maxPair = maxHeap.top(); maxHeap.pop();
            if (maxPair.first > 1) {
                // we cannot reorganise the string
                out = "";
            } else {
                out = out + string(1, maxPair.second);
            }

        } else {

            // maxHeap.size() >= 2

            pair<int, char> firstMaxPair = maxHeap.top(); maxHeap.pop();
            pair<int, char> secondMaxPair = maxHeap.top(); maxHeap.pop();

            out = out + string(1, firstMaxPair.second);
            firstMaxPair.first--;

            out = out + string(1, secondMaxPair.second);
            secondMaxPair.first--;

            if (firstMaxPair.first > 0) {
                maxHeap.push(firstMaxPair);
            }

            if (secondMaxPair.first > 0) {
                maxHeap.push(secondMaxPair);
            }

        }

    }

    return out;

}

int main() {

    string str = "aaaaabbbbcccdd";

    cout << reorganise(str) << endl;

    return 0;
}