// Created by GCA on 2015/10/27

#include  <bits/stdc++.h>

using namespace std;

const int maxn = 200005;
char str[maxn];
int maps[300];
int vis[maxn];

int main() {
    int n, m;
    memset(maps, 0, sizeof(maps));
    memset(vis, 0, sizeof(vis));
    for(char c='a';c<='z';c++) {
        maps[c]=c;
    }
    scanf("%d %d\n", &n, &m);
    scanf("%s\n", str);
    while (m--) {
        char f ,s;
        scanf("%c %c%*c",&f,&s);
        for(char c='a';c<='z';c++) {
            if(maps[c]==f)
                maps[c]=s;
            else if (maps[c]==s)
                maps[c]=f;
        }
    }

    for(int i=0;i<n;i++) {
        str[i]=maps[str[i]];
    }
    puts(str);
}