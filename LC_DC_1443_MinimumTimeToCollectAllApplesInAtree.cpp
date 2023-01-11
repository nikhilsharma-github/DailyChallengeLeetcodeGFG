class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        //Creating an Adjancecy List of vertices.
        vector<vector<int>> adjList;
        for(int i=0;i<n;i++){
            vector<int> v;
            adjList.push_back(v);
        }

        for(vector<int> e:edges){
            int u=e[0];
            int v=e[1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        //Main function which will give us the result.
        // first parameter is current vertex index which is 0.
        // second parameter is adjacency list which we created above.
        // third parameter is hasApple boolean vector we have already given 
        // fourth paramenter is parent Node Index which we have taken as -1 
        return shortestPathLengthToCollectApples(0,adjList,hasApple,0);
    }

    int shortestPathLengthToCollectApples(int currIdx,vector<vector<int>> &adjList,
    vector<bool> hasApple,int parentIdx){
        //CurrentPathLength
        int pathLength=0;

        //Traversing the adjacency list of current vertex
        for(int nbr:adjList[currIdx]){
            //If both parent and child are same, continue.
            if(nbr==parentIdx)
                continue;

            //Call the function as changing the current vertex as the
            // current traversing vertex's neighbour and parent as this current vertex.
            pathLength+=shortestPathLengthToCollectApples(nbr,adjList,hasApple,currIdx);
        }

        //If the current index is 0 and either current vertex is an apple vertex or path length is greater than 0, means either we have traversed from it or it is the starting vertex so add 2 as the path length of going and coming back from that vertex. 
        if(currIdx!=0&&(hasApple[currIdx]==true||pathLength>0))
        pathLength+=2;

        //return final pathLength at last for the current and final calls. 
        return pathLength;
    }
};