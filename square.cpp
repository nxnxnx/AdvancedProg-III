#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include "shape.h"
#include "square.h"

typedef vector<int> vi;


void CariSisi(vi & Persegi, int a);
void hapusSisi(vi & Persegi, int a);


void LuasSquare(Square square, vi &Square){
	printf("Sisi\t\tLuas\n");
	for (vi::const_iterator i = Square.begin(); i!=Square.end();++i){
		int sisi = *i;
		square.setSide(sisi);
		printf("%d\t\t%d\n",sisi,square.luas_square());
	}
}


void KelilingSquare(Square square, vi &Square){
	printf("Sisi\t\tKeliling\n");
	for (vi::const_iterator i = Square.begin(); i!=Square.end();++i){
		int sisi = *i;
		square.setSide(sisi);
		printf("%d\t\t%d\n",sisi,square.keliling_square());
	}
}

void menuDeleteSquare(vi & Persegi){
	int inp;
	printf("Masukkan panjang sisi yang akan dihapus: ");
	scanf("%d",&inp);
	CariSisi(Persegi, inp);
}

void CariSisi(vi & Persegi, int inp){

	while(binary_search(Persegi.begin(),Persegi.end(),inp)){
 		hapusSisi(Persegi,inp);
	}
	if (!binary_search(Persegi.begin(),Persegi.end(),inp)){
		printf("Tidak ada persegi dengan sisi %d\n",inp);
	}
}

void hapusSisi(vi & Persegi, int inp){
 vi::const_iterator a = Persegi.begin();
	for (vi::const_iterator i = Persegi.begin(); i<Persegi.end();++i){
		if (*i == inp){
			Persegi.erase(Persegi.begin()+(i-a));
			i=Persegi.end();
		}
	}
}

