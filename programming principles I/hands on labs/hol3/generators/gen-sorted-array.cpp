#include "testlib.h"
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {

    registerGen(argc, argv, 1);

    int N = atoi(argv[1]);
    int M = atoi(argv[2]);

    int n = rnd.next(1, N);
    vector < int > v;
    for (int i = 1; i <= n; ++ i) {
        int x = rnd.next(1, M);
        v.push_back (x);
    }
    sort (v.begin(), v.end());
    
    printf("%d\n", n);
    for (int i = 0; i < n - 1; ++ i)
        printf ("%d ", v[i]);
    printf ("%d\n", v[n - 1]);
    return 0;
}