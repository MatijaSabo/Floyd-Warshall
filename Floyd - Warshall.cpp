#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int a;
	cout<<"Projekt iz kolegija DSTG - Matija Sabolic, Marko Srnec, Mario Selek"<<endl;
	cout<<"Floyd - Warshall algoritam"<<endl<<endl;
	cout<<"Unesite velicinu polja: ";
	cin>>a;
	
	int matrica[a][a];
	
	cout <<endl<<"Ukoliko se na nekom mjestu u tablici nalazi INF (beskonacno) na to mjesto upisite -1"<<endl;
	
	for(int i = 0; i < a; i++){
		cout<<endl<<"Unesite vrijendosti za " << i+1 << ". red!"<<endl;
		for(int j = 0; j < a; j++){
			cin>> matrica[i][j];
		}
	}
	
	cout<<endl<<"Vasa matrica"<<endl;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			cout<< matrica[i][j] <<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl<<"Zapocinjem Floyd - Wrshall algoritam"<<endl;
	
	for(int i = 0; i < a; i++){
		
		cout<<endl<<"Matrica za "<< i+1 <<". korak"<<endl;
		
		for(int j = 0; j < a; j++){
			 for(int k = 0; k < a; k++){
			 	
			 	if ((matrica[j][i] != -1) && (matrica[i][k] != -1) && (j != k))
                {
                    
					if ((matrica[j][i] + matrica[i][k] < matrica[j][k]) || (matrica[j][k] == -1))
                    {
                        matrica[j][k] = matrica[j][i] + matrica[i][k];
                    }
                    
                }
                
			 }
		}
		
		for(int j = 0; j < a; j++){
			for(int k = 0; k < a; k++){
				cout<<matrica[j][k]<<"\t";
			}
			cout<<endl;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
