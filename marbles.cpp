#include <bits/stdc++.h>


using namespace std;

typedef unsigned long long ull;

ull combinations(ull n, ull k)
{
	//cout<<n<<" n "<<k<<" k"<<endl;
    if (k > n)
        return 0;
    
    // C(n, k) = C(n, n - k)
    if (n - k < k)
        k = n - k;
    
    ull ans = 1;
    for (ull i = 1; i <= k; i++)
    {
        ans *= (n-i+1);
        ans /= i;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t-- )
    {
        ull n, k;
        cin >> n >> k;
        // Select at least one marble of each color.
		//basically we need to divide n items among k people where each gets at least 1.. 
        n-=k;
        //we require c(n+k-1,k-1)...!!!
        cout << combinations(n + k - 1, k-1) << endl;
    }
    return 0;
}

