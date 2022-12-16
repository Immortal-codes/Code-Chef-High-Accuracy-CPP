#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int marks;
	    cin>>marks;
	    int cq1=marks/3;
	    int cq2=marks%3;
	    if(cq2==0)
	    {
	        cout<<"0"<<endl;
	    }
	    else cout<<(((cq1+1)*3)-marks)<<endl;
	
	    
	    
	}
	return 0;
}
