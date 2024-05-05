#include <iostream>
using namespace std;
int main(){
    int N;cin>>N;int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }for(int i=1;i<N;i+=2){
        cout<<array[i]<<" ";
    }return 0;
}
/*wkwkwkw lanjut seru banget coding yg ini kek DJ yang lagi remix sound JJ, tapi DJnya milih lagu angka-angka genap doang.
Jadi gini, kamu punya segambreng angka lagu-lagu, terus coding bakal milih yang nomor urutannya genap. Abis itu nge-print angka-angka 
itu satu-satu, dipisah pake spasi. Jadi kalo misal angkanya "8 7 1 2", yang keluar cuma "7 2", soalnya mereka yang punya urutan genap*/