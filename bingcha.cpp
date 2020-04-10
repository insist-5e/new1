int f[maxn];
int find(int tmp){
    return f[tmp]==tmp?tmp:f[tmp]=find(f[tmp]);
}