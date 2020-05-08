#include <bits/stdc++.h>

using namespace std;

int main()
{   double a,b,c,d,e,f,g,h;
cout<<fixed<<setprecision(2);
    cout << "Isira sua renda anual com salário: " << endl;
    cin>>a;
    cout << "Isira sua renda anual com prestação de serviço: " << endl;
    cin>>b;
    cout << "Isira sua renda anual com ganho de capital: " << endl;
    cin>>c;
    cout << "Isira seus gastos médicos: " << endl;
    cin>>d;
    cout << "Isira seus gastos educacionais: " << endl;
    cin>>e;
    if(a/12.0<3000) {
            f == 0.00;}
    if(a/12.0>=3000&&a<5000) {
            f == a/10;}
    if(a/12.0>=5000) {
            f == (a/100)*20;}
    g == b/100*15;
    h==c/100*20;

    cout<<"RELATÓRIO DE IMPOSTO DE RENDA"<<endl;

     cout << "Renda anual com salário: " <<a<< endl;
     cout << "Renda anual com prestação de serviço: " <<b<< endl;
     cout << "Renda anual com ganho de capital: " <<c<< endl;
     cout << "Gastos Médicos: " <<d<< endl;
      cout << "Gastos Educacionais: " <<e<< endl;

      cout<<"CONSOLIDAÇÃO DE RENDA"<<endl;
      cout<<"Imposto sobre salário: "<<f<<endl;
      cout<<"Imposto sobre serviços: "<<g<<endl;
      cout<<"Imposto sobre ganho de capital: "<<h<<endl;
    return 0;
}
