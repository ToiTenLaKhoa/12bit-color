#include <bits/stdc++.h>
using namespace std;
#define rand rd

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());

const int INF = 1e9 + 7;
int szcnt = 0;

void swap(string &a, string &b)
{
    auto tmp = a;
    a = b;
    b = tmp;
}

long long Rand(long long l, long long h)
{
    if (l > h)
        swap(l, h);
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

long long Randabs(long long x, long long y)
{
    return abs(Rand(x, y));
}

void shuffle(vector<string> &vs)
{
    int T = Randabs(0, (int)sqrt(Randabs(0, (int)sqrt(INF)))) * pow(2, 24);
    while (T--)
        swap(vs[Randabs(0, INF) % szcnt], vs[Randabs(0, INF) % szcnt]);
}

int main()
{
    srand(time(NULL));
    vector<string> code;
    ifstream fi;
    ofstream fo;
    fi.open("color.txt");
    fo.open("shuffled.txt");
    string s = "";
    while (fi >> s)
    {
        code.push_back(s);
        szcnt++;
    }
    fi.close();
    shuffle(code);
    for (auto i : code)
        fo << i << endl;
    fo.close();
    return 0;
}