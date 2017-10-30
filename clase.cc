//clase
//Ivàn Rejòn
//30/oct/17
#include <iostream>
using namespace std;
int main() {
  size_t talla=0;
  int *edad[talla];
  int suma=0;
  for(int i=0;i<talla;i++)
    {
      cout<<"¿Cuàntas personas se van a encuestar?"<<endl;
      cin>>talla;
  cout<<"¿A qué edad terminaste la carrera?"<<endl;
      cin>>edad[i];
  suma+=edad[i];
    }
 for (int j=0;j<talla;j++)
   cout<<edad[j]<<","
 cout<<"la edad promedio es: "<<(suma)/talla<<endl;

 delete []edad;
 return 0;
   }

      
