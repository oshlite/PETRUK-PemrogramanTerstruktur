#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }for(int i=0;i<N;i++){
        if(array[i]%2!=0){
        cout<<array[i]<<" ";
        }
    }return 0;
}
/*terakhir ngab yang ini mah ngefilter buat nangkep angka-angka ganjil. 
Jadi gini, kamu punya segambreng angka wkwk, terus coding bakal nyaring yang ganjil doang, 
kek 1,3,5,7 gitu. Abis itu, ngeprint angka-angka ganjil itu satu-satu, dipisah pake spasi. 
Jadi kalo misal angkanya "8 7 1 2", yang keluar cuma "7 1", soalnya ygga (yg ganjil ganjil aja).*/