//clase2
//ivàn Rejòn
//fecha
#include <vector>
#include <iostream>
using namespace std;
int main(){
  size_t talla=14;
  vector<int>edad(talla);
    int suma=0;
  for (int i=0,i<talla,i++)
    {
      cout<<"¿A qué edad te graduaste?"<<endl;
      cin>>edad[i];
      suma+=edad[i];
    }
  for (int j=0;j<talla;)
    cout<<edad[j]<<",";
  cout<<"la edad promedio es " <<(suma)/talla<<endl;
return=0
  }
