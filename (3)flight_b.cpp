#include<iostream>
using namespace std;
int main()
{
int ch;

int n=4,st,end;
	char x;
	int a[n][n];


do{
cout<<"******WELCOME******";
cout<<"\n1.Enter flight data\n2.Search for flights\n3.Display all flights\n4.Check COnnectivity\n0.Exit\n";
cin>>ch;

switch(ch)
{
	case 3:{for(int i=0;i<=n-1;i++)
	{
	    for(int j=0;j<=n-1;j++)
		{
		    if(i!=j)
			{
			    if(a[i][j]==0)
				{
				cout<<"Flights are NOT AVAILABLE from city "<<i+1<<" to city "<<j+1<<endl;
				}
				
			    else
				{cout<<"Flights are AVAILABLE from city "<<i+1<<" to city "<<j+1<<endl;
				 cout<<"Time of flight :"<<a[i][j]<<endl;
				}			
			}
		}

        
	}break;
	}

	case 2:{char c;
		do{
    		cout<<"*****Welcome*****\n";
    		cout<<"Available cities are :\n";
		cout<<"1.Pune\n2.Mumbai\n3.Delhi\n4.Banglore\n";
    		
    		cout<<"Enter the starting location\t";
    		cin>>st;
    		cout<<"Enter the ending location\t";
   		 cin>>end;
    		int i=st-1,j=end-1;

    
   		 if(i==j)
   		 {
   		     cout<<"Invalid entry please try again \n";
   		 }
   		 if(a[i][j]!=0 && i!=j)
   		 {
    		    cout<<"Flights are available \n";
    		    cout<<"Time of flight : "<<a[i][j]<<endl;
    		}
   		 else
    		{
    		    cout<<"\nSorry, Flights are not available!!\n\n";
   		 }
   		 cout<<"Do you wish to search again ?(y/n)\n";
   		 cin>>c;

    
    
   		 }while(c=='y');
		break;
		}

	case 1: 
	
	{cout<<"*****Welcome*****\n";
        cout<<"Available cities are :\n";
        cout<<"1.Pune\n2.Mumbai\n3.Delhi\n4.Banglore\n";
	for (int i=0;i<=n-1;i++)
        {
            for (int j=0;j<=n-1;j++)
        
            {   a[i][j]=0;
            	if(i!=j)
            
            	{
            	
            	cout<<"\nAre flights available from location "<<i+1<<" to "<<j+1<<" ? (y/n)\n";
            	cin>>x;
            	if (x=='y' || x=='Y')
            	{
            	    cout<<"Enter the time of flight in minutes :\t";
             	   cin>>a[i][j];
           	 }
            	}

        	}
        
    	}
	break;
	}
	case 4: {bool flag=0;
		for(int i=0;i<=n-1;i++)
		{
			for(int j=0;j<=n-1;j++)
			{if(i!=j && a[i][j]==0) flag=1;
			}	
		}
		if (flag==1) cout<<"\nGraph is NOT CONNECTED\n";
		else cout<<"\nGraph IS CONNECTED\n";
		}
		break;

}
}while(ch!=0);
}
