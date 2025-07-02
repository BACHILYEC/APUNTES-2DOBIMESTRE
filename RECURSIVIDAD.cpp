#include <iostream>
#include <utility>
using namespace std;
int factorial(int fact)
{
if(fact==1)
return fact;
return fact *factorial(fact-1);
}
int p_numerofact()
{
    int n = 0;
    cout << "Numero del factorial"<< endl;
    cin >> n;
    return n;
}
pair<int,int> p_numeromult()
{
    int a,b;
    cout<< "numero para multiplicar" <<endl;
    cin >> a;
    cout<< "numero multiplicador" << endl;
    cin>> b;
    return make_pair(a,b);

}
int multiplicacion(int a,int b)
{
   int c = 0;
   if ( a == 0 || b==0)
   return c;
    else if(b>=1)
    {
        c = a + multiplicacion(a, b-1);
      return c;
    }
    else if(b<0 && a>0)
    {
        c = multiplicacion(a,b+1) - a;
        return c;
    }
      else if(a<0 && b>0)
    {
        c = multiplicacion(a+1,b) - b;
        return c;
    }
      else if(b<0 && a<0)
    {
        a *= -1;
        b *= -1;
        c = a + multiplicacion(a,b-1);
        return c;
    }
    return c;
}

int main()
{
    pair<int,int> a = p_numeromult();
    int n = p_numerofact() ;
    int fact = factorial(n) ;
    cout << endl;
    int multi = multiplicacion(a.first,a.second);
    cout << fact << endl<< multi << endl;
}
