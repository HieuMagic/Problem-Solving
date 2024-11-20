#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define f0r(i,a,b) for(int i = a; i <= b; i++)
#define SQ(a) (a)*(a)
#define all(x) (x).begin(), (x).end();
#define sz(x) (int)(x).size()

//https://usaco.org/index.php?page=viewproblem2&cpid=855

struct bucket{
    int capacity;
    int milk;
};

int main(){
    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");
    cin.sync_with_stdio(0);
    cin.tie(0);
    //CODE
    vector<bucket> buckets;
    f0r(i, 1, 3){
        bucket new_bucket;
        fin >> new_bucket.capacity;
        fin >> new_bucket.milk;
        buckets.pb(new_bucket);
    }
    int n = 100;
    int i = 0;
    while(n--){
        int curr = i%3;
        int next = (i+1)%3;
        if (buckets[curr].milk <= buckets[next].capacity - buckets[next].milk){
            buckets[next].milk += buckets[curr].milk;
            buckets[curr].milk = 0;
        }
        else {
            buckets[curr].milk -= buckets[next].capacity - buckets[next].milk;
            buckets[next].milk += buckets[next].capacity - buckets[next].milk;
        }
        i++;
    }
    f0r (i, 0, 2){
        fout << buckets[i].milk << "\n";
    }
    //END
    fin.close();
    fout.close();
    //
    return 0;
}