// ================================================

// ==> Nombre del programa: Punto de Venta

// ==> Archivo : CapurroDanna-PuntoVenta.cpp
// ==>Autor: Danna Capurro
// ==>Fecha de elaboración: 2022-04-29
// ==>Fecha última actualización: 2022-05-16
// ================================================ =


# include <iostream>
using namespace std ;
int  main ()
{
int Dc_C=0, Dc_B, flag1;
	float Dc_A=0, Dc_X, Dc_s, Dc_Vdsc, Dc_V1, Dc_Ivav, Dc_Fn;
	cout<<"\n //==> Programa para conocer el Punto de Venta <==//\n "<<endl;
	cout<<"Ingrese el valor de los productos a sumar"<<endl;
	cin>>Dc_B;
	do{
		cout<<"Ingrese el valor de su compra "<<Dc_C+1<<endl;
		cin>>Dc_X;
		Dc_C=Dc_C+1;
		Dc_A=Dc_A+Dc_X;
	}while (Dc_C<Dc_B);
	cout<<"Ingrese el Valor del Descuento: "<<endl;
	cin>>Dc_s;
	
cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Punto de Venta " <<endl;
cout<< " //==> Archivo : CapurroDanna-PuntoVenta.cpp " <<endl;
cout<< " //==>Autor: Danna Capurro " <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-29 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-16 " <<endl;
cout<< " //============================================ ===== " <<endl;

cout<<"Valor Bruto de Compra: "<<Dc_A<<endl;
	Dc_Vdsc=(Dc_A*Dc_X)/100;
	cout<<"Valor de su Descuento: "<<Dc_Vdsc<<endl;
	Dc_V1=Dc_A-Dc_Vdsc;
	Dc_Ivav=Dc_V1*0.12;
	cout<<"Valor Obtenido del IVA: "<<Dc_Ivav<<endl;
	Dc_Fn=(Dc_A-Dc_Vdsc)+Dc_Ivav;
	cout<<"Valor Final: "<<Dc_Fn<<endl;
return 0;
}
