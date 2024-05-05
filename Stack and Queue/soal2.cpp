#include <iostream>
using namespace std;
int main(){
    int N;cin>>N;
    const int max=1000;
    int stack[max];int topr=-1;
    for(int i=0;i<N;i++){
        char pr[5];cin>>pr;
        if(pr[0]=='p' && pr[1]=='u') {
            int angka;cin>>angka;
            if(topr<max-1){
                stack[++topr]=angka;
            }
        }else if(pr[0]=='p' && pr[1]=='o'){
            if(topr>=0){topr--;
            }
        }for(int j=topr;j>=0;j--){
            cout<<stack[j]<<" ";
        }cout<<endl;
    }return 0;
}
/*bayangin tumpukan piring di dapur. Kamu cuma bisa nambahin atau ngambil piring dari atas 'topr' tumpukan (stack). 
Nah, 'push' itu kek nambahin piring ke atas tumpukan. Kalo masih ada ruang, kita tumpuk aja! Terus, 'pop' kek ambil piring paling atas. 
Setelah semua perintah 'pr', terus nampilin semua elemen yang ada di stack. Ya kek pamer koleksi piring wkwk!
Inget kalo stack itu Last In, First Out (LIFO), jadi piring yang terakhir ditambahin bakal jadi yang pertama diambil!*/