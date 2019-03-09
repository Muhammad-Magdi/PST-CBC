class DSU{
public:
  DSU(int n){
    parent = new int[n];
    sz = new int[n];
    for(int i = 0 ; i < n ; ++i){
      parent[i] = i;
      sz[i] = 1;
    }
  }
  void merge(int u, int v){
    u = findParent(u);
    v = findParent(v);
    // if(rand()%2)  swap(u, v);
    if(sz[u] > sz[v]) swap(u, v);
    parent[u] = v;
    sz[v] += sz[u];
    // if(sz[u] > sz[v]) parent[v] = u;
    // else parent[u] = v;
  }
  bool sameSet(int u, int v){
    return findParent(u) == findParent(v);
  }
  ~DSU(){
    delete [] parent;
  }
private:
  int findParent(int u){  //O(1)
    if(parent[u] == u)  return u;
    return parent[u] = findParent(parent[u]);
  }
  void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
  }
  int* parent;
  int* sz;
};
