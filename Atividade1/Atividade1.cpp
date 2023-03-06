// Atividade1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

# include  <iostream> _ _
using  namespace  std;

int  main()

{
	cout << " Nome P1 e P2 " << endl;

	double p1, p2, media;
	string NOME;

	cout << " Digite seu NOME: \n ";
	cin >> NOME;

	cout << " Digite a nota da P1: \n ";
	cin >> p1;

	cout << " Digite a nota da P2: \n ";
	cin >> p2;

	media = (p1 + p2) / 2;
	cout << media;

	if (media >= 6);
	cout << " Aprovado ";

}
