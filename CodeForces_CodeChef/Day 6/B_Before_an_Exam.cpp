#include <iostream>

using namespace std;

void bubble_sort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j + 1] > a[j])
                swap(a[j + 1], a[j]);
        }
    }
}


int main(){
    int n,sm;  cin>>n>>sm;

    int *a = new int[n];
    int *b = new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int sum = sm;
    // bubble_sort(b,n);
    // for(int i=0;i<n;i++)cout<<b[i];


    for(int i=0;i<n;i++){
        sum -= b[i];
        if(sum <= 0)
            break;
    }

    (sum <= 0)?cout<<"YES":cout<<"NO";
    cout<<endl;

    
    if(sum<=0){
        int temp = 0;

        for(int i=0;i<n;i++){
            if(temp + b[i] >= sm){
                cout<<sm-temp<<endl;
                return 0;
            }

            temp += b[i];
            cout<<b[i]<<" ";
        }
    }
}