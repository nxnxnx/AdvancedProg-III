#include <iostream>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <algorithm>
#include "shape.h"
#include <vector>
#include "circle.h"
#include "square.h"

typedef vector<int> vi;
void main_menu();
void tampil_shape();
void tambah_shape();
void addCircle();
void addSquare();
void delete_shape();
void tampil_semua_shape();
void show_circle();
void menuDeleteCircle(vi & Circle);
void menuDeleteSquare(vi & Square);
void CariRadius(vi & Lingkaran, int a);
void hapusRadius(vi & Lingkaran, int a);
void show_square();
void show_rekt();
void LuasCircle(Circle circle,vi &Circle); //vi = vector <int>
void LuasSquare(Square square,vi &Square);
void KelilingCircle(Circle circle, vi&Circle);
void KelilingSquare(Square square, vi &Square);

Shape shape;    // inisialisasi base class 
Circle circle;  //inisialisasi derived class
Square square;  //

using namespace std;
char param, dummy;

vi Circle, Rektangle, Square;

void printdash(){
  printf("-----------------------------\n\n");
}
void inputCircle(){
  fstream file("circle.txt",std::ios_base::in);
  int inp;
  while(file>>inp){
    Circle.push_back(inp);
   }
  //cout<< int(Circle.size());
}//end input circ;

void inputRekt(){
  fstream file("rectangle.txt",std::ios_base::in);
  int inp;
  while(file>>inp){
    Rektangle.push_back(inp);
   }
  //cout<< int(Rektangle.size());
}//end input rekt

void inputSq(){
  fstream file("square.txt",std::ios_base::in);
  int inp;
  while(file>>inp){
    Square.push_back(inp);
   }
  //cout<< int(Square.size());
}//end input Sq

void addSquare(){
  printf("Masukkan sisi: ");
  int a;
  scanf("%d",&a);
  Square.push_back(a);
  printf("Sisi %d telah berhasil dimasukkan!\n",a);
  sort(Square.begin(),Square.end());
  tambah_shape();
}

void addCircle(){
  printf("Masukkan radius: \n");
  int a;
  scanf("%d",&a);
  Circle.push_back(a);
  sort(Circle.begin(),Circle.end());
  printf("Radius %d telah berhasil dimasukkan!\n",a);
  tambah_shape();
}

void main_menu(){
  printdash();
  printf("1. Tampilkan Shape\n");
  printf("2. Tambah Shape\n");
  printf("3. Delete Shape\n");
  printf("4. Exit\n");
  printdash();
  //getchar();
  cin>>param;
  //cout<<param;
  if (param=='1') tampil_shape();
  else if (param=='2') tambah_shape();
  else if (param=='3') delete_shape();
  else if (param=='4') printf("Bye\n\n");
  else{
    printf("Pilihan tidak sesuai, tekan <enter> key untuk kembali....\n");
    cin>>dummy;
    main_menu();
  }  

}//end main_menu


void tampil_shape(){
  printf("1. Tampilkan Semua Shape\n");
  printf("2. Tampilkan Circle\n");
  printf("3. Tampilkan Square\n");
  printf("4. Tampilkan Rekt-angle\n");
  printf("5. Kembali ke main menu\n");
  printdash();
  cin>>param;  

  if (param=='1')tampil_semua_shape();
  else if (param=='2')show_circle();
  else if (param=='3')show_square();
  else if (param=='4');
  else if (param=='5')main_menu();
  else{
    printf("Pilihan tidak sesuai, tekan <enter> key untuk kembali.....\n"); 
    cin>>dummy;
    tampil_shape();
  }
}//end tampil_shape


void tampil_semua_shape(){
  printdash();
  printf("1. Urutkan berdasarkan lebar\n");
  printf("2. Urutkan berdasarkan keliling\n");
  printf("3. Kembali ke menu Tampilkan Shape\n");
  printdash();

  cin>>param;

  if (param=='1');
  else if (param=='2');
  else if (param=='3') tampil_shape();
  else {
    printf("Pilihan tidak sesuai, tekan <enter> key untuk kembali....\n");
    cin>>dummy;
    tampil_semua_shape();
  }
}//end tampil_semua_shape


void tambah_shape(){
  printdash();
  printf("1. Tambah Circle\n");
  printf("2. Tambah Square\n");
  printf("3. Tambah Rekt-angle\n");
  printf("4. Kembali ke main menu\n");
  printdash();

  cin>>param;

  if (param=='1'){
    addCircle();
    sort(Circle.begin(),Circle.end());
  }
  else if (param=='2'){
    sort(Circle.begin(),Circle.end());
    addSquare();
  }
  else if (param=='3');
  else if (param=='4') main_menu();
  else{
    printf("Pilihan tidak sesuai, tekan <enter> key untuk kembali....\n");
    cin>>dummy;
    tambah_shape();
  }
}//end tambah_shape


void delete_shape(){
  printdash();
  printf("1. Delete Circle\n");
  printf("2. Delete Square\n");
  printf("3. Delete Rekt-angle\n");
  printf("4. Kembali ke menu utama\n");
  printdash();

  cin>>param;

  if (param=='1'){
    menuDeleteCircle(Circle);delete_shape();
  }
  else if (param=='2'){
    menuDeleteSquare(Square);delete_shape();
  }
  else if (param=='3');
  else if (param=='4') main_menu();
  else{
    printf("Pilihan tidak sesuai, tekan <enter> key untuk kembali....\n");
    cin>>dummy;
    delete_shape();
  }
}//end delete_shape


void show_circle(){
  printdash();
  printf("1. Urutkan berdasarkan luas\n");
  printf("2. Urutkan berdasarkan keliling\n");
  printf("3. Kembali ke Menu Tampilkan shape\n");
  printdash();

  cin>>param;

  if (param=='1'){LuasCircle(circle,Circle); show_circle();}
  else if (param=='2'){KelilingCircle(circle, Circle); show_circle();}
  else if (param=='3')tampil_shape();
  else{
    printf("Pilihan tidak sesuai, tekan key <enter> untuk kembali...\n");
    cin>>dummy;
    show_circle();
  }
}

void show_square(){
  printdash();
  printf("1. Urutkan berdasarkan luas\n");
  printf("2. Urutkan berdasarkan keliling\n");
  printf("3. Kembali ke menu tampilkan shape\n");
  printdash();

  cin>>param;

  if (param=='1'){LuasSquare(square,Square); show_square();}
  else if (param=='2'){KelilingSquare(square, Square); show_square();}
  else if (param=='3')tampil_shape();
  else{
    printf("Pilihan tidak sesuai, tekan key <enter> untuk kembali...\n");
    cin>>dummy;
    show_square();
  }
}


int main(){
  inputCircle();
  inputRekt();
  inputSq();
  sort(Circle.begin(),Circle.end());
  sort(Rektangle.begin(),Rektangle.end());
  sort(Square.begin(),Square.end());
  main_menu();
}//end
