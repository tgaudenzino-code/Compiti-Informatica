#include <iostream>
using namespace std;

/*
  Trova la posizione del massimo e inserisce un
  nuovo numero in quella posizione.
*/

int main() {
    int n;
    cin>>n;
    int v[n+1];
    for(int i=0; i<n; i++) cin>>v[i];
    //Trova posizione massimo
    int max=v[0], pos=0;
    for(int i=1; i<n; i++){
        if(v[i]>max){
            max=v[i];
            pos=i;
        }
    }
    //Inserimento nuovo numero in quella pos
    int num;
    cout<<"Nuovo numero: ";
    cin>>num;
    for(int i=n; i>pos; i--) v[i]=v[i-1];
    v[pos]=num;
    n++;
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    return 0;
}