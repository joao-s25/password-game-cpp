#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a,b,c,d,e, round /* rodada */, n /* numero enviado */ ;
	int nw, lnw; /* acertos de numeros e locais */
	int x1,x2,x3,x4,x5; /* numeros isolados de n */
	int i; //contador
	
	
	string lg; //verificação de idioma inicial

	
	vector<string> ptl;
	vector<string> enl;
	
	//pt
	
	ptl.push_back("   Bem-vindo ao Jogo da Senha");
	ptl.push_back("\n\n = Rodada ");
	ptl.push_back("\n - Tente um numero (5 digitos) ");
	ptl.push_back("\n Voce nao esta jogando corretamente...");
	ptl.push_back("\n VOCE ACERTOU!");
	ptl.push_back("\n\n\n Voce perdeu...");
	ptl.push_back("\n O numero correto era: ");
	ptl.push_back("\n | Numeros corretos: ");
	ptl.push_back("\n | Numeros nos lugares corretos: ");
	
	
	
	//en
	
	enl.push_back("   Welcome to the Password Game");
	enl.push_back("\n\n = Round ");
	enl.push_back("\n - Try a number (5 digits) ");
	enl.push_back("\n You shouldn't play this way...");
	enl.push_back("\n YOU GUESSED IT RIGHT");
	enl.push_back("\n\n\n You lost...");
	enl.push_back("\n The correct number was: ");
	enl.push_back("\n | Correct numbers: ");
	enl.push_back("\n | Numbers at the right places: ");





	//idioma selecionado
	vector<string> sl;
	
	round = 1;

	srand(time(0));


    a = rand() % 9 + 1;
	b = rand() % 10;
	c = rand() % 10;
    d = rand() % 10;
	e = rand() % 10;

	
	cout<<"Please, enter a language: "<<endl;
	cout<<"English (enter 'en') Portuguese (enter 'pt') "<<endl;
		
	do{ cin>>lg;}while(!(lg=="pt" or lg=="en"));
	
	// Passe de idioma
	if (lg == "pt"){
		
		for(i=0 ; i<9 ; i++){
		    sl.push_back(ptl[i]);
	
			}
		
		
	}else if (lg == "en"){
		
		for(i=0 ; i<9 ; i++){
		   sl.push_back(enl[i]);
		}
	}

	
	
	
	
	
	
	
	
	cout<<"\n\n\n"<<endl;
	cout<<" ================================="<<endl;
	cout<<sl[0]<<endl;
	cout<<" ================================="<<endl;
	
	
	
	
	
	while (round<=20){
		cout<<sl[1]<<round<<" ="<<endl;
		
		
		lnw = 0;
		nw = 0;
		round++;
	
		
		do{
				
			cout<<sl[2];
			cin>>n;
				
			
				
		if (cin.fail()){
			cout<<sl[3];
			return 0;
		}
			
			
			
		}while( !(n>=10000 and n<=99999) );
		
		
		
		
		
	
	
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
		cout<<sl[4]<<endl;
		cout<<sl[6]<<n<<endl;
		
		return 0;
	}else{		

	cout<<"\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
	cout<<sl[7]<<nw<<endl;
	cout<<sl[8]<<lnw<<endl;
	cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
	}	
	
		


	



}

cout<<sl[5]<<endl;
cout<<sl[6]<<a<<b<<c<<d<<e<<endl;
	
	
	
	return 0;
}
