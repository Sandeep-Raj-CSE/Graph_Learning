#include <bits/stdc++.h>
using namespace std;
int main(){

    int vertx , edge;

    cin>>vertx>>edge;


    // 2d vector

    vector<vector<int>>AdjMat(vertx , vector<int>(vertx,0));




    int u , v , weighted; // taki directed and undirected pata chale
  
  
    for(int i=0; i<edge;i++){
        cin>>u>>v>>weighted;
        AdjMat[u][v]=weighted;
        AdjMat[v][u]=weighted;
    }


    


    for(int i=0; i<vertx ; i++){
        for(int j=0; j<vertx;j++){
            cout <<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    


    
    return 0;
}