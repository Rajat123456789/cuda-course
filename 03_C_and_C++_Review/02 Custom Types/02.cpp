// // exact same as 02.c
// // #include <stdio.h>
// #include <iostream>

// using namespace std;

// typedef struct {
//     float x;
//     float y;
// } Point;

// int main() {
//     Point p = {1.1, 2.5};
//     // printf("size of Point: %zu\n", sizeof(Point));  // Output: 8 bytes = 4 bytes (float x) + 4 bytes (float y)
//     cout << "size of Point: " << sizeof(Point) << endl;
    
// }


#include <iostream>
#include <vector>   // Include the header for vector
#include <utility>  

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> graph[n+1];  


    for(int i = 0; i < n; i++){        
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back(make_pair(v,w));
    }

    return 0;
}



