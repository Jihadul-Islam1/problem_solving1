#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(12) << sum / n << endl;
   
    return 0;
}
n=int(input())
s=list(map(int,input().split()))
result=sum(s)/n
print(f"{result:.12f}")