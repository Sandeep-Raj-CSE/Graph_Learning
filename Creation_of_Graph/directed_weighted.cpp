#include <bits/stdc++.h>
using namespace std;
int main(){

    int vertx , edge;

    cin>>vertx>>edge;


    // 2d vector

    vector<vector<bool>>AdjMat(vertx , vector<bool>(vertx,0));




    int u , v , weight; // taki directed and undirected pata chale
  
  // undirected unweighted graph
    for(int i=0; i<edge;i++){
        cin>>u>>v>>weight;
        AdjMat[u][v]=weight;
        
    }


    


    for(int i=0; i<vertx ; i++){
        for(int j=0; j<vertx;j++){
            cout <<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    


    
    return 0;
}