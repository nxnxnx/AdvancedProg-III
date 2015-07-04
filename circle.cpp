#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include "shape.h"
#include "circle.h"

using namespace std;
typedef vector<int> vi;


void CariRadius(vi & Lingkaran, int a);
void hapusRadius(vi & Lingkaran, int a);

void LuasCircle(Circle circle, vi&Lingkaran){

		printf("Radius\t\tLuas\n");
	for (vi::const_iterator i = Lingkaran.begin(); i!=Lingkaran.end();++i){
		int radius = *i;
		circle.setPi();
		circle.setRadius(radius);
		double hasil = circle.luas_circle();
		printf("%d\t\t%.3f\n",radius,hasil);
	}
}

void KelilingCircle(Circle circle, vi &Lingkaran){

		printf("Radius\t\tKeliling\n");
	for (vi::const_iterator i = Lingkaran.begin(); i!=Lingkaran.end();++i){
		int radius = *i;
		circle.setPi();
		circle.setRadius(radius);
		double hasil = circle.keliling_circle();
		printf("%d\t\t%.3f\n",radius,hasil);	
	}
}

void menuDeleteCircle(vi & Lingkaran){
	int inp;
	printf("Masukkan radius yang akan dihapus: ");
	scanf("%d",&inp);
	CariRadius(Lingkaran, inp);
}

void CariRadius(vi & Lingkaran, int inp){

	while(binary_search(Lingkaran.begin(),Lingkaran.end(),inp)){
		hapusRadius(Lingkaran,inp);
	}

	if (!binary_search(Lingkaran.begin(),Lingkaran.end(),inp)){
		printf("Tidak ada lingkaran dengan radius %d\n",inp);
	}

}

void hapusRadius(vi & Lingkaran, int inp){
 vi::const_iterator a = Lingkaran.begin();
	for (vi::const_iterator i = Lingkaran.begin(); i<Lingkaran.end();++i){
		if (*i == inp){
			Lingkaran.erase(Lingkaran.begin()+(i-a));
			i=Lingkaran.end();
		}
	}
}
