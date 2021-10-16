#include <iostream>
using namespace std;
int main()
{
    float n,i,num,max=0,min=0;
    cout<<"Enter n of students : ";
    cin>>n; cout<<endl;

    for(int i=0; i<n; i++)
    {
    	cout<< i + 1 <<". Enter a score of adv-programming : ";
        cin>>num;
        
        if(i==0)
            min=num;
        if(num>max)
            max=num;
        if(num<=min)
            min=num;
    }
   
    cout<<"\nReusult is:"<<endl;
    cout<<"\nMaximum number is :"<<'\t'<<max<<'\t';
    cout<<"Mininum number is :"<<'\t'<<min<<'\t';
    cout<<"Average of the scores is :"<<'\t'<<(double)(max+min)/2<<'\t';
    return 0;

}
