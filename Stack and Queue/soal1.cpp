#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;cin>>N;
    const int max=1000;
    int queue[max];int depan=0;
    int belakang=-1;int uk=0;
    for(int i=0;i<N;i++){
        string p;cin>>p;
        if(p=="push"){
            int angka;cin>>angka;
            if(uk<max){
                belakang=(belakang+1)%max;
                queue[belakang]=angka;uk++;
            }
        }else if(p=="pop"){
            if(uk>0){
                depan=(depan+1)%max;
                uk--;
            }
        }int indek=depan;
        for(int j=0;j<uk;j++){
            cout<<queue[indek]<<" ";
            indek=(indek+1)%max;
        }cout<<endl;
    }return 0;
}
/*bayanginn lagi antri beli boba. Push:Nah, kalo ada yang pesen, kita tambahin dia ke ujung antrian (queue). Coding 'push' nambahin elemen ke belakang antrian. 
Kalo antriannya masih muat, kitaorang seneng banget nambahin orangnya. Pop: Pas bobanya udah jadi, orang pertama di antrian dapet minumannya.
Coding 'pop' ngapus elemen dari depan antrian (kalo antriannya gak kosong). Setelah setiap perintah 'p', output ngeprint semua elemen di antrian. 
Jadi kek ngumumin nama-nama orang yang lagi nunggu bobanya itu. Aturannya First In, First Out (FIFO). Orang pertama yang masuk antrian, duluan dilayanin!*/