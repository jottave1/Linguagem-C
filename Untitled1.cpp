#include<iostream>
using namespace std;
#include<conio.h>
main()
{
	int x[20], i, p, y, flag,q;
	float s=0,m;
	
	do{
	
	cout<< "digite uma lista com "<<q<<" valores para calcular a media\n\n";
	cin>>q;
}while(q>20);
	for (i=0; i<q;i++)
	{
		cin>>x[i];
	}
	
	cout<<"\n\nLista de Valores\n\n";
	system("cls");
	
	for (i-0; i<q; i++)
	{
		s+x[i];
		
		cout << x[i]<<" ";
	}
	
	m=s/q;  
	
	cout << "\nMédia dos valores= "<< m <<"\n\n";
	
	cout << "Deseja verificar o valor de qual posição de lista: ";
	
	cin >> p;
	
	cout << "O valor escolhido da posicao"<< p << "é o valor " <<x [p-1];
	
	flag= -1;
	
	cout << "Qual numero deseja encontrar na lista";
	
	cin>> y;
	
	for(i=0; i<q; i++)
	{
		if(y==x[i])
		{
			flag=i;
			i=19; 
		}
	}
	
	if(flag!=-1){
	
	cout<<"o valor"<<y<< "se encontra ma posicao"<<flag+1<<"\n";
	
	}
	else cout<<"o valor "<<y<< "nao se encontra na lista\n\n";
	system("pause"
	);
	
	
	}
