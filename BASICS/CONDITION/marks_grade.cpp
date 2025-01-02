
#include<iostream>
using namespace std;
int main()
{
    int m,s,e;                                 /* m = maths, s = science and e = english */
    cout<<"Enter Maths marks: ";
    cin>>m;
    cout<<"Enter Science marks: ";
    cin>>s;
    cout<<"Enter English marks: ";
    cin>>e;
    if(m>90)
    {
        cout<<"student is passed with grade ' A ' in Maths"<<endl;
    }
    if(s>90)
    {
        cout<<"student is passed with grade ' A ' in Science"<<endl;
    }
    if(e>90)
    {
        cout<<"student is passed with grade ' A ' in English"<<endl;
    }
    else if(m<90)
    {
        cout<<"student is failed in Maths "<<endl;
    }
    else if(s<90)
    {
        cout<<"student is failed in Science "<<endl;
    }
    else if(e<90)
    {
        cout<<"student is failed in English "<<endl;
    }
    return 0;
}