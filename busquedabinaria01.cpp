#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int arreglo[] = {5,10,15,20,25,30,35,40,45,50,55,60,65,70,75};	
	int arreglo1[] = {80,85,90,95,100,105,110,115,120,125,130,135,140,145,150};
	int arreglo2[] = {155,160,165,170,175,180,185,190,195,200,205,210,215,220,225};
	int A,B,C,dato,A1,B1,C1,dato1,A2,B2,C2,dato2;
	char band= 'F';
	char band1= 'F';
	char band2= 'F';
	dato= 40,dato1= 130, dato2= 200;
	
	A= 0;B= 15;
	A1= 0;B1= 15;
	A2= 0;B2= 15;

	
	
	while(A<=B){
		
		C = (A+B)/2;
		
		if(arreglo[C]== dato){
			band = 'V';
			break;
		} 
		if(arreglo[C]> dato){
			B= C;
			C= (A+B)/2 ;
		}
		if(arreglo[C]< dato){
			A= C;
			C= (A+B)/2;
		}
	}
	
	
	while(A1<=B1){
		
		C1 = (A1+B1)/2;
		
		if(arreglo1[C1]== dato1){
			band = 'V';
			break;
		} 
		if(arreglo1[C1]> dato1){
			B1= C1;
			C1= (A1+B1)/2 ;
		}
		if(arreglo1[C1]< dato1){
			A1= C1;
			C1= (A1+B1)/2;
		}
	}

	
	while(A2<=B2){
		
		C2 = (A2+B2)/2;
		
		if(arreglo2[C2]== dato2){
			band = 'V';
			break;
		} 
		if(arreglo2[C2]> dato2){
			B2= C2;
			C2= (A2+B2)/2 ;
		}
		if(arreglo2[C2]< dato2){
			A2= C2;
			C2= (A2+B2)/2;
		}
	}
	
	if(band == 'V'){
		cout<<"El arreglo esta en la posicion = "<<C<<endl;
	}
	else{
		cout<<"El arreglo no ha sido encontrado";
	}
	
	
	if(band == 'V'){
		cout<<"El arreglo1 esta en la posicion = "<<C1<<endl;
	}
	else{
		cout<<"El arreglo1 no ha sido encontrado";
	}
		

	if(band == 'V'){
		cout<<"El arreglo2 esta en la posicion = "<<C2<<endl;
	}
	else{
		cout<<"El arreglo2 no ha sido encontrado";
	}
		
	getch ();
	return 0;
}
	
	
	
	
