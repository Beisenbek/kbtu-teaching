#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {

    registerGen(argc, argv, 1);

    int N = atoi(argv[1]);
    int M = atoi(argv[2]);

    int n = rnd.next(1, N);
    for (int i = 1; i <= n; ++ i) {
        int x = rnd.next(1, M);
        if (i == n)
            printf ("%d\n", x);
        else
            printf("%d ", x);
    }
    return 0;
}