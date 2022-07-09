#include<iostream>
#include<algorithm>
#include<limits>
#include<queue>
#include<stack>
#include<vector>
#include<math.h>
#include<string>
#include<stdio.h>
#include<set>
#include<string.h>
#include<map>
#include<iomanip>
#include<cmath>

using namespace std;

int n,m;
const int maxn=1e5+10;
int nums[maxn];

/* 
next 数组的含义：  
next[i]: 
nextp[maxn]//next 在某个头文件用过了
表示的是以i为终点的后缀
和从1开始的前缀相等的所有后缀中，长度最长的
后缀

s为要被匹配的串  p为要匹配的串
对p做kmp，得next数组
那么如果有一个点i，next[i]=j
那么根据定义
p[1,j]=p[i-j+1,i];//p的下标从1开始


s i-1  i
p j    j+1
s[i-1]与p[j]匹配
下面匹配s[i]与 p [j+1]
 */
int main()
{
    //freopen("out.txt","w",stdout);
   
   return 0;
}
