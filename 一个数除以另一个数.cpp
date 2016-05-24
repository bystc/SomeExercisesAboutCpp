#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl; using std::runtime_error;

int main(void)
{
    
    int v1,v2;
    while(cin>>v1>>v2){
    try{
    	if(v2==0)
    	  throw runtime_error("divisor is 0.");
    	else
		  cout<<v1/v2;
    	
	}
	catch(runtime_error err)
	{
		cout<<err.what()
		    <<"\n Try Again ?Enter Y or N  "<<endl;
		char c;
		cin>>c;
		if(!cin||c=='n')
		break;
	}
	}
    return 0;
}
