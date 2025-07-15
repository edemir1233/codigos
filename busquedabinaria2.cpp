#include<bits/stdc++.h>
using namespace std;
bool f(int x) {
    return true;
}
pair<int,int> binary_search(int l, int r) {
    // asumimos la monotonia
    // f(x) implica f(x+1)
    if (f(l) == true) {
        return {-1, l}; // todo es verdadero
    }
    if (f(r) == false) {
        return {r, -1}; // todo es falso
    }

    // f(l) = false
    // f(r) = true
    while (r - l > 1) {
        int mid = (l + r) / 2;
        if (f(mid) == false) {
            l = mid;
        } else {
            r = mid;
        }
    }
    return {l, r};
}
