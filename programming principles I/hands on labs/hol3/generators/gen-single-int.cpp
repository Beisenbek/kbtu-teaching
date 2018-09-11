#include "testlib.h"
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {

    registerGen(argc, argv, 1);

    int N = atoi(argv[1]);
    int n = rnd.next(1, N);
    printf("%d\n", n);
    
    return 0;
}