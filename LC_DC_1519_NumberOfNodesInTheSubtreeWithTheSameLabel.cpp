class Solution {
public:
    vector<int> DFS(unordered_map<int,vector<int>> &adj,int curr,int parent,
    vector<int> &result,string &labels){
       //26 because of 26 letters max in label from a to z.
       vector<int> my_count(26,0);
       //Storing the current Label value.
       char myLabel=labels[curr];     

        //Marking the current label as 1 in the current node vector.
       my_count[myLabel-'a']=1;

        //Traversing every neighbour of our edge and checking
       for(int &v:adj[curr]){
           //If parent and child are same, continue and move on.
           if(v==parent)
           continue;

           //Creating a new vector of child count which will store the callback returned value
           vector<int> child_count(26,0);
           child_count=DFS(adj,v,curr,result,labels);

            //Adding the all the past result values to the current node vector.
           for(int i=0;i<26;i++){
               my_count[i]+=child_count[i];
           }
       }

        //Mentioning the final result of the current node as the
        // total count of this node in our result vector
       result[curr]=my_count[myLabel-'a'];

        // return my_count vector 
       return my_count;

    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        //Creating a map which stores the nodes and their corresponding vector values as
        // 0-> 1 3 5
        // 2-> 5 6 4 etc type.
        unordered_map<int,vector<int>> adj;

        //Filling up this map from the given 2d vector of edges and nodes.
        for(auto &vec:edges){   
            int u=vec[0];
            int v=vec[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        //Creating our result vector.
        vector<int> result(n,0);

        //Calling simple DFS with parameters as
        //Adj list, current node as 0, parent of 0 as -1, result and labels.
        DFS(adj,0,-1,result,labels);

        return result;
    }
};