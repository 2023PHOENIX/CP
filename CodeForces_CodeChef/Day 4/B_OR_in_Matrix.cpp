#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;    cin>>m>>n;

    int A[m + 1][n + 1], C[m + 1][n + 1];
    int B[m + 1][n + 1];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
            A[i][j] = 0;
            C[i][j] = 1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (B[i][j] == 0)
            {
                for (int x = 0; x < m; x++)
                {
                    C[x][j] = 0;
                }
                for (int x = 0; x < n; x++)
                {
                    C[i][x] = 0;
                }
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(C[i][j]){
                for(int x=0;x<m;x++){
                    A[x][j] = 1;
                }   
                for(int x=0;x<n;x++){
                    A[i][x] = 1;
                }
            }
        }
    }



    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(B[i][j]!=A[i][j]){
                cout<<"NO\n";
                return 0;
            }
        }
    }

    cout<<"YES\n";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }cout<<endl;
    }
}
