#include <iostream>
#include <algorithm>
#include "DSU.h"

using namespace std;

const int N = 2e5+5, M = 1e6+6, OO = 0x3f3f3f3f;

int n, e, u, v, c;

struct Edge{
  int from, to, cost;
  bool operator < (const Edge& e)const{
    return cost < e.cost;
  }
}* graph;

int main(){
  cin >> n >> e;
  graph = new Edge[e];
  for(int i = 0 ; i < e ; ++i){
    cin >> graph[i].from >> graph[i].to >> graph[i].cost;
  }
  // sort(graph, graph+e, [](const Edge& e1, const Edge& e2){
  //   return e1.cost > e2.cost;
  // });

  //Kruskal
  sort(graph, graph+e);
  DSU dsu(n);
  int totalCost = 0;
  for(int i = 0 ; i < e ; ++i){
    if(dsu.sameSet(graph[i].from, graph[i].to)) continue;
    dsu.merge(graph[i].from, graph[i].to);
    totalCost += graph[i].cost;
  }
  cout << totalCost << endl;
  return 0;
}








/*
*/
