#include <iostream>
using namespace std;

#define PI 3.14159
//参数宏
#define MIN(a, b) (a < b ? a : b)
//条件编译
#define DEBUG
#define MKSTR(x) #x
int main()
{

// #if 0
    cout << MKSTR(HELLO C++) << endl;
// #endif

    int i, j;
    i = 100;
    j = 30;
    cout << "较小的值为:" << MIN(i, j) << endl;

    cout << "Value of PI :" << PI << endl;
#ifdef DEBUG
    cerr << "Trace:Coming out of main function" << endl;
#endif
    return 0;
}
