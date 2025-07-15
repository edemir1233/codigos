#include <bits/stdc++.h>
using namespace std;
const int maxn = 100'005;
int arr[maxn], n;
int linear_search(int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
int binary_search(int x) {
    int l = 0, r = n - 1;
    while (l < r) {
        int mid = (l + r) / 2;
        if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    if (arr[l] == x) {
        return l;
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for (int i = 0; i< n;i++) {
        cin>>arr[i];
    }
    int Q; // cantidad de consultas
    cin >> Q;
    while (Q--) {
        int x;
        cin >> x;
        // int pos = linear_search(x);
        int pos = binary_search(x);
        cout << pos << '\n';
    }
    return 0;
}
