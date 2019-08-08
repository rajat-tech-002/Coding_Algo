#include <iostream>
#include<bits/stdc++.h>
#include<ctime>

using namespace std;

# define MAX 100

struct d{
	string key;
	int value;
	int ttl;
};


int main() {

	vector <d> D;

	while(1)
	{
		int n;
		cout<<"Please Enter Choice:\n";
		cout<<"1: Set Key Value: \n";
		cout<<"2: Get Value given a key\n";
		cout<<"3: Flush Dictionary:\n";
		cout<<"4: Save Dictionary in a file:\n";
		cout<<"5: Load Dictionary in a file:\n";
		cout<<"6: Exit:\n";
		cin>>n;

		switch(n)
		{
			case 1:

				{string str;
				int val,ttl;
				d temp;
				cout<<"Enter Key as string:\n";
				cin>>str;
				cout<<"Enter value as integer:\n";
				cin>>val;
				cout<<"Enter ttl in seconds if needed else enter 0\n";
				cin>>ttl;
				temp.key=str;
				temp.value=val;
				time_t result = time(nullptr);
				if(ttl!=0)
					temp.ttl=ttl+result;
				else
					temp.ttl=0;
				D.push_back(temp);
				break;
				}
			case 2:
			    {
				cout<<"Enter Key:\n";
				string key;
				cin>>key;
				int flag=0;
				for(unsigned int i=0;i<D.size();i++)
				{
					time_t result = time(nullptr);
					if(D[i].key==key && (D[i].ttl>result || D[i].ttl==0))
						{ flag=1;
						cout<<D[i].value<<endl;
						}
				}
				if(flag==0)
					cout<<endl<<"nil"<<endl;


				break;
			    }

			case 3:
			{
				D.clear();
				cout<<"Flushed Input";
				break;
			}

			case 4:
			{
				fstream F;
				F.open("C:/Users/Rajat/Desktop/data.txt");

				for(int i=0;i<D.size();i++)
				{
					F<<D[i].key;
					F<<endl;
					F<<D[i].value;
					F<<endl;
					F<<D[i].ttl;
					F<<endl;

				}

				F.close();
				break;
		}
			case 5:
			{
				fstream F;
				F.open("C:/Users/Rajat/Desktop/data.txt");
                string x;
                int y;
                int z;

				while (F >> x >>y >>z)
				{
					d temp;
					temp.key=x;
					temp.value=y;
					temp.ttl=z;
					D.push_back(temp);
				}

				F.close();
				break;

			}
			default:
				{exit(0);
				break;}




		}
	}





	return 0;
}

