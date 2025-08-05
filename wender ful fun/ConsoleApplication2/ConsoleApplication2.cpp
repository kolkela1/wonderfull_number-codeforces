#include <iostream>
using namespace std;
typedef long long ll;
ll count(ll);
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x;
    cin >> x;
    if (x == 1) {
        cout << "YES";
    }
    else {
        ll y = count(x);
        int A[1000] = { 2 };
        int o = x;
        int u = 0;
        while (o > 0) {
            int i = o;
            o /= 2;
            i %= 2;
            A[u] = i;
            u++;
        }
        int f = y - 1;
        int z = f / 2;
        int c = 0;
        if (f % 2 == 0) {
            for (int i = 0; i < z; i++) {
                if (A[i] == A[f]) {
                    f--;
                    c++;

                }
                else {
                    break;
                }


            }
            if (c == z)
                cout << "YES";
            else
                cout << "NO";

        }
        else {


            for (int i = 0; i <=z; i++) {
                if (A[i] == A[f]) {
                    f--;
                    c++;

                }
                else {
                    break;
                }
            }
            z=z+1 ;
            if (c == z) 
                cout << "YES";
            
            else
                cout << "NO";

        }


        }

    }



    ll count(ll count ){
        int p = 0;
        while (count > 0) {
             count /= 2;
             p++;
        }
        return p;
}
  
