#include <bits/stdc++.h>

using namespace std;

int main()
{   double a,b,c,d,e,f,g,h,i,j;
cout<<fixed<<setprecision(2);
    cout << "Isira sua renda anual com sal�rio: " << endl;
    cin>>a;
    cout << "Isira sua renda anual com presta��o de servi�o: " << endl;
    cin>>b;
    cout << "Isira sua renda anual com ganho de capital: " << endl;
    cin>>c;
    cout << "Isira seus gastos m�dicos: " << endl;
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
    i == d + e;
    j == ((a+b+c)/100)*30;


    cout<<"RELAT�RIO DE IMPOSTO DE RENDA"<<endl;

     cout << "Renda anual com sal�rio: " <<a<< endl;
     cout << "Renda anual com presta��o de servi�o: " <<b<< endl;
     cout << "Renda anual com ganho de capital: " <<c<< endl;
     cout << "Gastos M�dicos: " <<d<< endl;
      cout << "Gastos Educacionais: " <<e<< endl;

      cout<<"CONSOLIDA��O DE RENDA"<<endl;
      cout<<"Imposto sobre sal�rio: "<<f<<endl;
      cout<<"Imposto sobre servi�os: "<<g<<endl;
      cout<<"Imposto sobre ganho de capital: "<<h<<endl;

      cout<<"DEDU��ES"<<endl;
      cout<<"M�ximo dedut�vel: "<< j<<endl;
      cout<<"Gastos dedut�veis: "<<i<<endl;

      cout<<"RESUMO"<<endl;
      cout<<"Imposto bruto total: "<<a+b+c<<endl;
      if(i>j){
        cout<<"Abatimento: "<<j<<endl;
         cout<<"Imposto devido: "<<(a+b+c)-j<<endl;
        }
      else{
        cout<<"Abatimento: "<<i<<endl;}
        cout<<"Imposto devido: "<<(a+b+c)-i<<endl;

    return 0;
}
