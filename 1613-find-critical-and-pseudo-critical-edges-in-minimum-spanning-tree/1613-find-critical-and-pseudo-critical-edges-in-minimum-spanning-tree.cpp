class Solution {
public:
    int comp,V;
    vector<int>parent;
    int find(int u){
    while(1){
if(parent[u]<0){
return u;
}
u=parent[u];
}
}
void union_find(int u,int v){
int p1=find(u);
int p2=find(v);
if(p1==p2) return;
if(abs(p1)>abs(p2)){
parent[p1]+=parent[p2];
parent[p2]=p1;
}
else{
parent[p2]+=parent[p1];
parent[p1]=p2;
}
comp--;
}
int kruskal(vector<vector<int>>&edges,int inc,int skip){
parent.resize(V);
comp=V;
for(int i=0;i<V;i++){
parent[i]=-1;
}
int sum=0;
if(inc!=-1){
sum+=edges[inc][0];
union_find(edges[inc][1],edges[inc][2]);
}
for(int i=0;i<edges.size();i++){
if(i==skip){
continue;
}
int wt=edges[i][0],u=edges[i][1],v=edges[i][2];
int p1=find(u),p2=find(v);
if(p1!=p2){
sum+=wt;
union_find(p1,p2);
}
}
return comp!=1?INT_MAX:sum;
}
vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>&
edges) {
vector<vector<int>>ans(2,vector<int>());
this->V=n;
for(int i=0;i<edges.size();i++){
int u=edges[i][0];
int v=edges[i][1];
int w=edges[i][2];
edges[i][0]=w;
edges[i][1]=u;
edges[i][2]=v;
edges[i].push_back(i);
}
sort(edges.begin(),edges.end());
int minwt=kruskal(edges,-1,-1);
for(int i=0;i<edges.size();i++){
int skipwt=kruskal(edges,-1,i);
int inclwt=kruskal(edges,i,-1);
if(skipwt>minwt){
ans[0].push_back(edges[i][3]);
}
else if(inclwt==minwt){
ans[1].push_back(edges[i][3]);
}
}
return ans;
}
};