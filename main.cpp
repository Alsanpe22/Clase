#include <iostream>
#include <vector>
using namespace std;
//float Media(vector<int> & n){
//    float med{0};
//    for (int i{0}; i < n.size(); i++){
//        med = med + n.at(i);
//    }
//    med = med / n.size();
//    return med;
//}

int main()
{


vector<int> vectores;

int vec {1};
while(vec !=0){
    cout << "Introduce numero positivo y cuando quieras parar pon Basta: ";
    cin >> vec;
if(vec<0){
    cout << " ese no es positivo ";
}else{
    if(vec !=0)
    vectores.push_back(vec);

}

}


unsigned short int Suma{0};

for(unsigned int i{0}; i <vectores.size(); i++)
{
 Suma = Suma + vectores.at(i);



}

float Media = (Suma/vectores.size());

cout << "Has introducido " << vectores.size() << "  numeros." << endl;

cout << "La media de los datos introducidos es: " << Media << endl;





    return 0;
}
