#include<bits/stdc++.h>

using namespace std;

struct Faculty{
    string name;

    int pub;

    double cgpa;


};

typedef struct Faculty f;


void Filter(f *f1, f *f2){

    if (f1->cgpa>f2->cgpa){
            if(f1->pub>f2->pub){
                cout<<f1->name<<endl;
            }
    }

    else
    {
        if (f2->cgpa>f1->cgpa)
        {
            if(f2->pub>f1->pub)
            {
                cout<<f2->name<<endl;
            }
        }
    }


}

int main()
{
    f f1,f2;

    cin>>f1.name>>f1.pub>>f1.cgpa;

    cin>>f2.name>>f2.pub>>f2.cgpa;


    Filter(&f1,&f2);


}

