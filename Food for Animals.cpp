#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {


    int a , b , c ;
    cin>>a>>b>>c;
    int x , y ;
    cin>>x>>y;
    int dog = a-x;
    int cat = b-y;

    if(dog<0)
    {
        dog = c+dog;
        c=dog;

    }

    if(cat<0)
    {
        cat = c+cat;
        c=cat;

    }
    if(dog>=0 && cat>=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;

}
