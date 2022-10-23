#include <iostream>
#include <sstream>  // std::istringstream
#include<fstream>    
#include <string>       // std::string
#define MAX 100

using namespace std;

class Graph{
	private:
		int** arr;
		int size;
	public:
		Graph(char*,int);
		void nhapMaTranKe();
		void nhapDanhSachKe();
		void nhapDanhSachCanh();
		void maTranKe();
		void danhSachCanh();
		void danhSachKe();
		void Xuat();
		void laydinh();
};

Graph :: Graph (char file[], int type){
	ifstream in(file);
	string mt;
		getline(in,mt);
			std::istringstream iss (mt);
			iss >> size;
	arr = new int*[size];
		for( int k = 0; k<size;k++){
			arr[k] = new int[size];
		}
	switch (type){
		case 1: { // ma tran ke
			
			
			for(int i = 0; i < size; i++){
				getline(in,mt);
				std::istringstream iss(mt);
				for(int j = 0; j<size;j++){
				iss >> arr[i][j];
				}
			}
			cout<< size<<endl;
	for(int k = 0; k<size;k++){
		for ( int l = 0; l< size; l++){
			cout<<arr[k][l]<<" ";
		}
		cout<<endl;
	}
			break;
		}
	
			
	}
}

void Graph :: laydinh(){
	int s;
for(int i = 0; i < size;i++)
	{
			 s=0;

		for(int j = 0;j < size;j++)
		{
			
			s += arr[i][j];
			
		}
		//cout<<"\nBac cua dinh" <<i+1<<" la "<<s;
		cout<<"\nBac cua dinh "<<i+1<<" la: "<<s<<endl;
		//s=0;
		
	}
	}
//int dinh,canh;
//int a[MAX][MAX];
//
//void Graph :: nhapMaTranKe(){
//	ifstream in("MaTranKe1.txt");
//	string mt;
//	getline(in,mt);
//	std::istringstream iss (mt);
//	iss >> dinh;
//	for(int i = 1; i <= dinh; i++){
//		getline(in,mt);
//		std::istringstream iss(mt);
//		for(int j = 1; j<=dinh;j++){
//			iss >> a[i][j];
//		}
//	}
//	
//}
//
//void Graph :: nhapDanhSachKe(){
//	ifstream in("DanhSachKe1.txt");
//	string mt;
//	getline(in,mt);
//	std::istringstream iss (mt);
//	iss >> dinh;
//	for(int i = 1 ; i<= dinh; i++){
//		getline(in,mt);
//		std::istringstream iss(mt);
//		int j;
//		while(!iss.eof()){
//			iss >> j;
//			a[i][j] = 1;
//			a[i][i] =0;
//		}
//	}
//	cout<< dinh<<endl;
//	for(int k = 1; k<=dinh;k++){
//		for ( int l = 1; l<= dinh; l++){
//			cout<<a[k][l]<<" ";
//		}
//		cout<<endl;
//	}
//	
//}
//
//void Graph :: nhapDanhSachCanh(){
//	ifstream in("DanhSachCanh1.txt");
//	string mt;
//	getline(in,mt);
//	std::istringstream iss (mt);
//	iss >> dinh >> canh;	
//	for(int i = 1; i<= canh;i++){
//		getline(in, mt);
//		std::istringstream iss(mt);
//		int x,y;
//		iss >> x >> y;
//		a[x][y] = a[y][x] = 1 ;
//	}
//	cout<< dinh<<endl;
//	for(int k = 1; k<=dinh;k++){
//		for ( int l = 1; l<= dinh; l++){
//			cout<<a[k][l]<<" ";
//		}
//		cout<<endl;
//	}
//	
//}


int main()
{
	//Graph a;
//	a.nhapMaTranKe();
	//a.Xuat();
	//a.nhapDanhSachKe();
//	a.nhapDanhSachCanh();
  	Graph a("MaTranKe1.txt",1);
  	a.laydinh();


 return 0;
}
//void Graph :: Xuat(){
//	for(int k = 1; k<=dinh;k++){
//		for ( int l = 1; l<= dinh; l++){
//			cout<<a[k][l]<<" ";
//		}
//		cout<<endl;
//	}
//}

