#include<bits/stdc++.h>//万能头万岁！
using namespace std;

#define int long long//不开long long见祖先
int head, nxt, n, d;
// head是首项， nxt 是第二项， n是项数

signed main()
{
    scanf("%lld %lld %lld", &head, &nxt, &n);//输入
    d = nxt - head;//求公差。
    printf("%lld", n * head + n * (n - 1) * d / 2);//套公式
    return 0;
}