#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a,b,c,d,e, round /* rodada */, n /* numero enviado */ ;
	int nw, lnw; /* acertos de numeros e locais */
	int x1,x2,x3,x4,x5; /* numeros isolados de n */


	
	round = 1;

	srand(time(0));


    a = rand() % 9 + 1;
	b = rand() % 10;
	c = rand() % 10;
    d = rand() % 10;
	e = rand() % 10;

	

	cout<<" ================================="<<endl;
	cout<<"   Bem-vindo ao Password Game! "<<endl;
	cout<<" ================================="<<endl;
	
	
	
	
	
	
	
	while (round<=20){
		cout<<"\n\n = Rodada "<<round<<" ="<<endl;
		
		
		lnw = 0;
		nw = 0;
		round++;
	
		
		do{
			
		cout<<"\n - Tente um numero: ";
		cin>>n;
			
			
			
		}while( !(n>10000 and n<=99999   ) );
		
		
		
		
		
	
	
	x1 = (n/10000); //um valor abcde se torna a.bcde, o numero inteiro despreza as casas decimais, restando a
	x2 = ((n/1000)-(x1*10)); // um valor abcde se torna ab.cde, e é retirado o valor a (calculado acima)* 10, por estar em dezena, resta b
	x3 = ( (n/100) - ((x2*10) + (x1*100)) ); 
	x4 = ( (n/10) - ((x3*10) + (x2*100) + (x1*1000)) );
	x5 = ( n - ((x4*10) + (x3*100) + (x2*1000) + (x1*10000))  );	
		
		
		
		
	if ( x1 == a or x1 == b or x1 == c or x1 == d or x1 == e ){ nw++; }
	
	if ( x2 != x1 and (x2 == a or x2 == b or x2 == c or x2 == d or x2 == e )){ nw++; }
	
	if ( x3 != x2 and x3 != x1 and (x3 == a or x3 == b or x3 == c or x3 == d or x3 == e )){ nw++; }
	
	if ( x4 != x3 and x4 != x2 and x4 != x1 and (x4 == a or x4 == b or x4 == c or x4 == d or x4 == e )){ nw++; }
	
	if ( x5 != x4 and x5 != x3 and x5 != x2 and x5 != x1 and (x5 == a or x5 == b or x5 == c or x5 == d or x5 == e )){ nw++; }
	
	
	if ( x1 == a ){ lnw++; }
	if ( x2 == b ){	lnw++; }
	if ( x3 == c ){ lnw++; }	
	if ( x4 == d ){	lnw++; }	
	if ( x5 == e ){	lnw++; } 	
	
	
	
	
	
	
		
	if (x1==a and x2==b and x3==c and x4==d and x5==e  ){
		cout<<"\n VOCE ACERTOU!"<<endl;
		cout<<"\n O numero correto era: "<<n<<endl;
		
		
		break;
	}else{		

	cout<<"\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
	cout<<"\n - Numeros corretos: "<<nw<<endl;
	cout<<"\n - Numeros nos lugares corretos: "<<lnw<<endl;
	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
	}	
	
		


	



}

cout<<"\n\n\n Voce perdeu!"<<endl;
cout<<"\n O numero correto era: "<<a<<b<<c<<d<<e<<endl;
	
	
	
	return 0;
}
