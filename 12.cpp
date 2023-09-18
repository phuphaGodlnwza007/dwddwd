//arrayexl.c
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{   string name[4];
	int num[4],i,total=0,max=0,min=9999999999999999;
    for(int i =0;i<4;i++)
	{
		cout<<"Name  |"<<i<<"| : ";
		cin>>name[i];
		cout<<"Score |"<< i << "| : ";
		cin>>num[i];
	}
	cout<<"----------------------------"<<endl;
	cout<<"Name\t\tScore"<<endl;
	cout<<"----------------------------"<<endl;
	
	for(int i = 0; i<4;i++)
    {
		cout<<name[i]<<"\t"<<"\t"<<num[i]<<endl;
	    total = total+num[i];
		if(num[i] > max)
			max = num[i];
		if(num[i] <= min)
			min = num[i];
	}
	  cout<<"Max Score = "<<max<<endl;
	  cout<<"Min Score = "<<min<<endl;
	  cout<<"Total Score  = "<<total<<endl;
	  cout<<"Average = "<<(float)total/4<<endl;
	system("pause");
	return 0;
}