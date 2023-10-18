/*Hacer un programa que calcule el total de una venta a partit de una cantidad de articulos y precio dado por el usurario, si la cantidad es 10 o mas entonces que otorgue 10% de descuento. Al final que imprima el total a pgar y el valor decontado*/

#include<iostream>

using namespace std;

int main(){
    //     int art=0;
    //     int precio=0;
    //     int descuento=0;
    //     int Total;
    //     cout<<"Cuanto articulos son:"<<endl;
    //     cin>>art;
    //     cout<<"Cual es el precio del articulo: "<<endl;
    //     cin>>precio;
    //     descuento=(precio*0.9)*art;
    //     Total=precio*art;
    //     if(art>=10){
    //         cout<<"Usted paga esto:"<< descuento<<endl;
    //         cout<<"Se desconto: "<< Total-descuento<<endl;
    //     }else{
    //         cout<<"Usted paga esto: "<< Total<<endl;
    //     }
    
    
    //con operadores ternarios
    int art = 0;
    int precio = 0;
    int Total=0;
    cout<<"Cuanto articulos son:"<<endl;
    cin>>art;
    cout<<"Cual es el precio del articulo: "<<endl;
    cin>>precio;
    
    Total = precio*art; 
   
    int descuento = (art>=10) ? (precio*0.9)*art : Total;



    cout<<"Usted pag esto: "<< descuento <<endl;
    cout<<"Se le desconto: " << Total - descuento <<endl; 


}