#include<iostream>
#include<cstring>

using namespace std;

int main() {

    int arr[3][4] = {
        {10, 15, 20, 25},
        {30, 35, 40, 45},
        {50, 55, 60, 65}
    };

    int m = 3;
    int n = 4;

    for (int i = 0; i <= m - 1; i++) {

        // print the ith row

        for (int j = 0; j <= n - 1; j++) {

            cout << arr[i][j] << " ";

        }

        cout << endl;

    }

    cout << endl << endl;

    int brr[2][4] = {
        {10, 20, 30, 40},
        {50, 60}
    };

    int mm = 2;
    int nn = 4;

    for (int i = 0; i < mm; i++) {
        for (int j = 0; j < nn; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int crr[3][4] = {}; // zero init

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int drr[4][5];

    memset(drr, 0, sizeof(drr)); // zero init

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << drr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}