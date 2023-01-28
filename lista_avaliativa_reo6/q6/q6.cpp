#include <iostream>
using namespace std;
struct dadosMeme{
	int num_do_meme;
	string nome_do_arquivo;
	string assunto;
	string site;
};

void lerDadosMemes(dadosMeme meme[], int qntMemes){
	int i;
	for(i = 0; i < qntMemes; i++){
		cin >> meme[i].num_do_meme;
		cin >> meme[i].nome_do_arquivo;
		cin >> meme[i].assunto;
		cin >> meme[i].site;
	}
}

void ordenaMeme(dadosMeme meme[], int tamanho){
	dadosMeme aux;
	int i, j;
	int indiceMenor;
	for(i = 0; i < tamanho; i++){
		indiceMenor = i;
		for(j = (i + 1); j < tamanho; j++){
			if(meme[j].num_do_meme < meme[indiceMenor].num_do_meme){
				indiceMenor = j;
			}
		}
		aux = meme[i];
		meme[i] = meme[indiceMenor];
		meme[indiceMenor] = aux;
	}
}
void buscaPeloSite(dadosMeme meme[], string nomeSite, int tamanho){
	int i;
	bool memeEncontrado = 1;
	for(i = 0; i < tamanho; i++){
		if(nomeSite == meme[i].site){
			cout << meme[i].num_do_meme << ' ';
			cout << meme[i].nome_do_arquivo << ' ';
			cout << meme[i].assunto << ' ';
			cout << meme[i].site << endl;
			memeEncontrado = 0;
		}
	}
	if(memeEncontrado){
		cout << "Inexistente" << endl;
	}
}
int main(){
	int qntMemes;
	cin >> qntMemes;
	dadosMeme meme[qntMemes];
	
	
	lerDadosMemes(meme, qntMemes);
	ordenaMeme(meme, qntMemes);

	string siteBuscado;
	cin >> siteBuscado;
	buscaPeloSite(meme, siteBuscado, qntMemes);
	
	return 0;
}
