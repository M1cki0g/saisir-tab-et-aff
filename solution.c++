#include <iostream>

using namespace std;

void saisir(int t[]){
for(int i=0 ; i<5 ; i++){
    cin>>t[i];
}
}


void aff(int t[]){
for(int i=0 ; i<5 ; i++){
    cout<<t[i];
}
}

int main()
{int t[5];
saisir(t);
aff(t);
    return 0;
}
