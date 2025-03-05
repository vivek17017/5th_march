#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void set_data(int,int);
        void show_data();
        complex add(complex);
};
void complex::set_data(int x,int y)
{
    a=x;
    b=y;
}
void complex::show_data()
{
    cout<<a<<endl<<b;
}
complex complex::add(complex C)
{
    complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;

}
int main()
{
    complex c1,c2,c3;
    c1.set_data(5,7);
    c2.set_data(32,57);
    c3=c1.add(c2);
    c3.show_data();

}