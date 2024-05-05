#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    char grid[x][y];
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            cin>>grid[i][j];
    for(int i=0;i<x;i++){
        for(int j=0;j<=y-5;j++){
            if(grid[i][j]=='s' && grid[i][j+1]=='n' && grid[i][j+2]=='u' && grid[i][j+3]=='k' && grid[i][j+4]=='e'){
                for(int k=0;k<5;k++)
                    cout<<i+1<<" "<<j+k+1<<endl;
            }if(grid[i][j]=='e' && grid[i][j+1]=='k' && grid[i][j+2]=='u' && grid[i][j+3]=='n' && grid[i][j+4]=='s'){
                for(int k=4;k>=0;k--)
                    cout<<i+1<<" "<<j+k+1<<endl;
            }
        }
    }for(int i=0;i<=x-5;i++){
        for(int j=0;j<y;j++){
            if(grid[i][j]=='s' && grid[i+1][j]=='n' && grid[i+2][j]=='u' && grid[i+3][j]=='k' && grid[i+4][j]=='e'){
                for(int k=0;k<5;k++)
                    cout<<i+k+1<<" "<<j+1<<endl;
            }if(grid[i][j]=='e' && grid[i+1][j]=='k' && grid[i+2][j]=='u' && grid[i+3][j]=='n' && grid[i+4][j]=='s'){
                for(int k=4;k>=0;k--)
                    cout<<i+k+1<<" "<<j+1<<endl;
            }
        }
    }for(int i=0;i<=x-5;i++){
        for(int j=0;j<=y-5;j++){
            if(grid[i][j]=='s' && grid[i+1][j+1]=='n' && grid[i+2][j+2]=='u' && grid[i+3][j+3]=='k' && grid[i+4][j+4]=='e'){
                for(int k=0;k<5;k++)
                    cout<<i+k+1<<" "<<j+k+1<<endl;
            }if(grid[i][j]=='e' && grid[i+1][j+1]=='k' && grid[i+2][j+2]=='u' && grid[i+3][j+3]=='n' && grid[i+4][j+4]=='s'){
                for(int k=4;k>=0;k--)
                    cout<<i+k+1<<" "<<j+k+1<<endl;
            }
        }
    }for(int i=0;i<=x-5;i++){
        for(int j=y-1;j >= 4;j--){
            if(grid[i][j]=='s' && grid[i+1][j-1]=='n' && grid[i+2][j-2]=='u' && grid[i+3][j-3]=='k' && grid[i+4][j-4]=='e'){
                for(int k=0;k<5;k++)
                    cout<<i+k+1<<" "<<j-k+1<<endl;
            }if(grid[i][j]=='e' && grid[i+1][j-1]=='k' && grid[i+2][j-2]=='u' && grid[i+3][j-3]=='n' && grid[i+4][j-4]=='s'){
                for(int k=4;k>=0;k--)
                    cout<<i+k+1<<" "<<j-k+1<<endl;
            }
        }
    }return 0;
}
