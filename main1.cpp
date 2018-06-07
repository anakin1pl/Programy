#include <iostream>

using namespace std;

class Klasa
{
    private:
        int mojazmienna;
    public:
        Klasa(int mojazmienna)
        {
            this->mojazmienna=mojazmienna;
        }
        int getZmienna()
        {
        return mojazmienna;    
        }
        friend class ZaprzyjaznionaKlasa;
        friend void modify(Klasa & k);
};

class ZaprzyjaznionaKlasa
{
    public:
        void modify(Klasa &k){
            k.mojazmienna=0;
            
        }
    
};

void modify(Klasa & k){
    k.mojazmienna=2;
}


class Point
{
    private:
        float x,y;
    public:
        float getX(){
            return x;
        }
        float getY(){
            return y;
        }
        friend istream& operator >>(istream &st, Point &point);
        friend ostream& operator <<(ostream &st, Point &point);
};

     ostream& operator <<(ostream &st, Point &point)
     {
             st<<point.x<<" "<<point.y<<endl;
             return st;
     }


class Points
{
    private:
    Point **tab;
    int n;
    public:
    Points (int n){
        this->n =n;
        tab= new Point*[n];
    }
    
    Point&operator [](int x){
        
        try
        {
            if(x>=n)
            {    
            throw out_of_range("x");
            }
            return *tab[x];
        }
        catch(out_of_range&m)
        {
            cout<<"Hello"<<endl;
        }
    }
    
    friend ostream& operator <<(ostream &st, Points &points){
        
        for(int i=0;i<points.n;i++)
        {
            st<<points.tab[i];
        }
    }
    
};
istream& operator >>(istream &st, Point &point)
{
st>>point.x;
st>>point.y;
return st;
}

int main()
{
/*

   Klasa k(5);
   ZaprzyjaznionaKlasa x;
   
   cout<<k.getZmienna ()<<endl;
   x.modify (k);
   cout<<k.getZmienna ()<<endl;
   modify(k);
   cout<<k.getZmienna ()<<endl;
   */
  
Point p;
Points x =Points(2);
cin>>p;
cout<<x;

    
    
    return 0;
}
