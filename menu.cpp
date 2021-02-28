// Definimos las librerias a utiizar.
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h>
#include <iosfwd>
#include <ios>
#include <ostream>
#include <math.h>
#include <windows.h>
#include <cmath> 
#include "multiplicaciongrafica.cpp"
using namespace std;
char opcionp;
int x=20,y=10;
int main()
{
	while (1) // Funcion que sirve para crear un ciclo hasta que el usuario ordene romperl

{
	int opc; 
	cout <<"----------------------------------------menu 20 programas--------------------------------------"<< endl<< endl;
    cout <<"1) Suma,Resta,Multiplicacion y Division de dos numeros"<< endl;
    cout <<"2) Determinar si un numero es par o impar "<< endl;
    cout <<"3) Conversiones"<< endl;
	cout <<"4) Determinar si una palabra o un numero es palindromo"<< endl;
	cout <<"5) Conversion de numeros arabigos a romanos"<< endl;
	cout <<"6) Conversion de numeros enteros a letras"<< endl;
	cout <<"7) Conversion de numeros enteros con decimales a letras"<< endl;
	cout <<"8) Tabla de multiplicar"<< endl;
	cout <<"9) Todas las tablas de multiplicar del 1 al 10"<< endl;
	cout <<"10) Crear de forma grafica la multiplicacion manual"<< endl;
	cout <<"11) Conversion de numeros decimales a binarios"<< endl;
	cout <<"12) Conversion de numeros decimales a hexodecimales"<< endl;
	cout <<"13) Crear figuras geometricas basicas"<< endl;
	cout <<"14) Mover un punto por toda la pantalla"<< endl;
	cout <<"15) Simulacion de un cajero "<< endl;
	cout <<"16) Calcular la hipotenusa"<< endl;
	cout <<"17) Raiz cuadrada de un numero "<< endl;
	cout <<"18) Calculo del volumen de un cilindro en cm "<< endl;
	cout <<"19) Ingrese tres notas y le diremos su promedio "<< endl;
	cout <<"20) Numeros del dia del mes"<< endl;
	cout <<"21) *********** SALIR ***********"<< endl;
	cin >> opc;
	system("CLS");
	
	switch (opc)
	{
		case 1:
			int n1, n2, sum, res, mul, div;
			cout <<"Ingrese el primer numero: "<< endl;
			cin>> n1;
			cout<<"Ingrese el segundo numero: "<< endl;
			cin >> n2;
			sum = n1 + n2;
			res = n1 - n2;
			mul = n1 * n2;
			div = n1 / n2;
			cout << "Los resultados son:  "<< sum << " SUMA, " << res << " RESTA, " << mul << " MULTIPLICACION," << div << " DIVISION. " << endl; 
			break;
		case 2:	
			int n;
			cout <<"Ingrese el numero: "<< endl;
			cin >> n; 
			if (n % 2 == 0){
				     cout<< " El numero es par" << endl;
			}
			else{
				cout << " El numero es impar" << endl;
			}
			break;
		case 3:
		    int opciones;
			cout << "1) Kilometros a millas " << endl;
			cout << "2) Millas a kilometros " << endl; 
			cout << "3) Metros a pulgadas " << endl;
			cout << "4) pulgadas a metros " << endl;
			cout << "5) Libras a kilos " << endl;
			cout << "6) Kilos a libras " << endl;
			cin >> opciones;
			switch (opciones)
			{
				case 1:
					float c1, km, milla;
					cout << " Ingrese los kilometros" << endl;
					cin >> c1;
					milla = c1 * 0.6214;
					cout << " Su conversion de kilometros a millas es:  millas " << milla << endl;
					break;
				case 2:
					 float c2, millas, kilometros;
					cout << " Ingrese las millas " << endl;
					cin >> c2;
					km = c2 * 1.609;
					cout << " Su conversion de millas a kilometros es: kilometros "<< km << endl;
					break; 
				case 3:
					float c3, mt, pulg;
					cout << " Ingrese la cantidad de metros "<< endl;
					cin >> c3;
					mt = c3 * 0.0254;
					cout << " Su conversion de pulgadas a metros es: metros  "<< mt << endl;
					break;
				case 4: 	
				    float c4, mts,pul;
					cout << " Ingrese la cantidad de pulgadas " << endl;
					cin >> c4;
					pul = c4 * 39.37;
					cout << " Su conversion de metros a pulgadas es: pul "<< pul << endl;	
					break;
				case 5:
					float c5, lb,kg;
					cout << " Ingrese la cantidad de libras: "<< endl;
					cin >> c5;
					kg = c5 * 0.45;
					cout << " Su conversion de libras a kilos es: kilos " << kg << endl;
					break;
				case 6:
					float c6, lbs, kil;
					cout << " Ingrese la cantidad de kilos: " << endl;
					cin >> c6;
					lbs = c6 * 2.20;
					cout << " Su conversion de kilos a libras es:  libras " << lbs << endl;
					break;
				 } 	
				 break;
		case 4:
		{
			string palabra;
			cout << " Ingrese la palabra: " << endl;
			cin >> palabra;
			size_t longitud = palabra.length() -1;
			size_t i=0;
			bool esPalindromo = true;
			     for(i=0 ; i<palabra.length()/2 && esPalindromo ;i++){
			     	if(palabra[i]!=palabra[longitud-i])
			     	esPalindromo = false;
				 }
			cout <<((true == esPalindromo)? "es palindromo" : "no es palindromo") << endl;	 
			break;
				 }
		 		 
	    case 5:
	    {
			int a,num;
			cout << "Transformacion de numero arabigos a romanos" << endl;
            cin >> a;
            num=a;
	        while(num!=0)
	        {
	        if (num<= 3999 && num>= 1000)
	        {
	        cout << "M" << endl;
	        num = num -1000;
	        }
            else if(num <1000 && num>=900)
            {
            cout << "CM" << endl;
            num = num - 900;
            }
            else if(num < 900 && num>500)
            {
            cout << "D" << endl;
            num = num - 500;
            }
            else if (num == 500)
            {
            cout << "D" << endl;
            num = num -500;
            }
            else if (num<500 && num>= 400)
            {
            cout << "CD" << endl;
            num = num - 400;
            }
            else if (num<400 && num >99)
            {
            cout << "C" << endl;
            num = num -100;
            }
           else if (num< 100 && num>89)
           {
           cout << "XC" << endl;
           num = num - 90;
           }
           else if (num< 90 && num>59)
           {
           cout << "L" << endl;
           num = num - 50;
           }
      	   else if(num<60 && num >50)
      	   {
           cout << "L" << endl;
           num = num - 50;
           }
           else if (num ==50)
           {
           cout << "L" << endl;
           num = num -50;
           }
           else if(num<50 && num>39)
           {
           cout << "XL" << endl;
           num = num - 40;
           }
           else if(num< 40 && num> 10)
           {
           cout << "X" << endl;
           num = num - 10;
           }
           else if(num == 10)
           {
           cout << "X" << endl;
           num = num -10;
           }
           else if(num==9)
           {
           cout << "IX" << endl;
           num = num - 9;
           }
           else if(num<=8 && num>=6)
           {
           cout << "V" << endl;
           num = num - 5;
           }
           else if (num == 5)
           {
           cout << "V" << endl;
           num = num - 5;
           }
           else if (num == 4)
           {
           cout << "IV" << endl;
           num = num - 4;
           }
           else if (num<= 3 && num>=1)
           {
           cout << "I" << endl;
           num = num - 1;
           }
           }
           system ("pause>nul");
           cin.get();
           break;
       }
       case 6:
		{
			int x;
    		cout<<"ingrese un numero"<<endl;
    		cin>>x;
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
				else
		    {
        		if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       				else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       				else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       				else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       				else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       				else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       				else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       				else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       				else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       				else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        			if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            		if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            		if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            		if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            		if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            		if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            		if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            		if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            		if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            		if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            		if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            		if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            		if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            		if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            		if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            		if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        			if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       				else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       				else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       				else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       				else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       				else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       				else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        			if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        			if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        			if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            		if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       				else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       				else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       				else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       				else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       				else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       			}
    			cout<<endl;
				cin.ignore();
		   	break;
		   }
		case 7:
		{
			float x;
            cout<<"ingrese un numero"<<endl;
            cin>>x;
            if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
                else

           {
                    if(x>=900)   {cout<<"NOVECIENTOS  " ;x=x-900;}
                    if(x>=800)   {cout<<"OCHOCIENTOS  " ;x=x-800;}
                    if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
                    if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
                    if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
                    if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
                    if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
                    if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
                    if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
                    if(x>=100)  {cout<<"CIEN "     ;x=x-100;}
                    if(x>90.999) {cout<<"NOVENTA Y "   ;x=x-90; }
                    if(x>=90)   {cout<<"NOVENTA "  ;x=x-90; }
                    if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
                    if(x>=80)   {cout<<"OCHENTA "  ;x=x-80; }
                    if(x>70) {cout<<"SETENTA Y ."   ;x=x-70; }
                    if(x>=70)   {cout<<"SETENTA "  ;x=x-70; }
                    if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
                    if(x>=60)   {cout<<"SESENTA"  ;x=x-60; }
                    if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
                    if(x>=50)   {cout<<"CINCUENTA"    ;x=x-50; }
                    if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
                    if(x>=40)   {cout<<"CUARENTA" ;x=x-40; }
                    if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
                    if(x>=30)   {cout<<"TREINTA"  ;x=x-30; }
                    if(x>20) {cout<<"VEINTI"       ;x=x-20; }
                    if(x>=20)   {cout<<"VEINTE"       ;x=x-20; }
                    if(x>=16)    {cout<<"DIECI "        ;x=x-10; }
                    if(x>=15)   {cout<<"QUINCE"       ;x=x-15; }
                    if(x>=14)   {cout<<"CATORCE"  ;x=x-14; }
                    if(x>=13)   {cout<<"TRECE"        ;x=x-13; }
                    if(x>=12)   {cout<<"DOCE"     ;x=x-12; }
                    if(x>=11)   {cout<<"ONCE"     ;x=x-11; }
                    if(x>=10)   {cout<<"DIEZ"     ;x=x-10; }
                    if(x>=9)    {cout<<"NUEVE"        ;x=x-9;  }
                    if(x>=8)    {cout<<"OCHO"     ;x=x-8;  }
                    if(x>=7)    {cout<<"SIETE"        ;x=x-7;  }
                    if(x>=6)    {cout<<"SEIS"     ;x=x-6;  }
                    if(x>=5)    {cout<<"CINCO"        ;x=x-5;  }
                    if(x>=4)    {cout<<"CUATRO"       ;x=x-4;  }
                    if(x>=3)    {cout<<"TRES"     ;x=x-3;  }
                    if(x>=2)    {cout<<"DOS"      ;x=x-2;  }
                    if(x>=1)    {cout<<"UNO"      ;x=x-1;  }
                    if(x>=0.9) {cout<<" CON NUEVE "  ; x=x-0.9;}
                    if(x>=0.8) {cout<<" CON OCHO "  ; x=x-0.8;}
                    if(x>=0.7) {cout<<" CON SIETE "  ; x=x-0.7;}
                    if(x>=0.6) {cout<<" CON SEIS "  ; x=x-0.6;}
                    if(x>=0.5) {cout<<" CON CINCO "  ; x=x-0.5;}
                    if(x>=0.4) {cout<<" CON CUATRO "  ; x=x-0.4;}
                    if(x>=0.3) {cout<<" CON TRES "  ; x=x-0.3;}
                    if(x>=0.2) {cout<<" CON DOS "  ; x=x-0.2;}
                    if(x>=0.1) {cout<<" CON UNO "  ; x=x-0.1;}
            }
            cout<< endl;
		    break;
		}
		case 8:
			{
				char  seguir;
				int i, numero;
				do
				{
					printf(" \n Ingrese un numero entero: ",163);
					scanf( "%d", &numero );
					printf(" \n La tabla de multiplicar del %d es:\n", numero);
					/* Inicio del anidamiento */
					for ( i = 1 ; i <=10 ; i++)
					     printf("\n %d * %d = %d", i, numero, i * numero );
					/* Fin del anidamiento */     
				} while ( seguir != 'n' );
			break;	
			}
		   
		case 9:
		{
			    float i;
	            float j;
	            for (i=0;i<=10;i++) {
	        	for (j=0;j<=10;j++) {
			cout << i << " * " << j << " = " << i*j << endl;
		    }
	        }
			break;
			}
		
		case 10:
		{
		     	control();
		     	void control();
	         break;	
			 }

		case 11:
	    {
	    	cout << "ingrese un numero decimal: \n";
				int numeros;
				string binario = "";
				cin >>numeros;
				if (numeros > 0) {
       				 while (numeros > 0) {
            			if (numeros%2 == 0) {
            			    binario = "0"+binario;
            			} else {
            			    binario = "1"+binario;
           				 }
           				 numeros = (int) numeros/2;
       				 }
   				 } else if (numeros == 0) {
        		binario = "0";
    			}else {
    		    binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
   				 }
    			cout << "El resultado de la conversion es: " << binario<< endl;
			}
			break;
		
		case 12:
			{
	    	int decimal, c = 0, i = 0, hex, salida = 100;
	    	cout << " Ingrese un numero decimal: ";
	    	cin >> decimal;
	    	while(decimal > 0)
	    	{
	    		salida += decimal % 16;
	    		salida += 100;
	    		decimal /= 16;
	    		c++;
			}
			 cout << "Hexadecimal: ";
			     while(salida > 0)
			     {
			     	hex = salida % 100;
			     	if(i > 0 && i <= c)
			     	if(hex < 11)
			     	cout << hex;
			else
			    cout << (char)(55 + hex);
			    salida /= 100;
			    i++;
				 }
			cout << endl;
			break;	 
		}
		case 13:
			{
				int n5 ;
    			cout << " Ingrese un numero : " ;
    			cin >> n5 ;
    			for (int j = 0; j < n5 ; ++j) {
        		for (int i = 0; i < n5-j-1; ++i)
        		    cout << " ";
        			for (int i = 0; i < 2*j+1; ++i)
            		 cout << "*" ;
        			cout << endl ;
    			}

   				 for (int j=n5-2; j>=0; --j) {
    			    for (int i=0; i<n5-j-1; ++i)
        		    cout << " " ;
        			for (int i=0; i<2*j+1; ++i)
        		    cout << "*" ;
       				 cout << endl ;
    			}
				break;
		    }
		case 14:
			{
				if(opcionp!='z'){
				while (opcionp!='z'){
					system("cls");
					gotoxy(20,1);cout<<" Datos para mover el punto: ";
					gotoxy(20,2);cout<<" W-ARRIBA, S-ABAJO, A-IZQUIERDA, D-DERECHA, Z-SALIR ";
					gotoxy(x,y);cout<<".";
					opcionp=getch();
					switch(opcionp){
						case 'w' : y--;
						case 's' : y++;
						case 'a' : x--;
						case 'd' : x++;
					}
				}
			        system("pause");	
				}
			}
			break;
		case 15:
			{
				int saldo_inicial = 3000;
				int saldo, retiro,opcion, agregar;
				
				cout<<"\tBienvenido a su cajero virtual";
				cout<<"\n Escoja una opcion: ";
				cout<<"\n 1) Ingreso en cuenta";
				cout<<"\n 2) Retiro";
				cout<<"\n 3) Ver su saldo de cuenta";
				cout<<"\n 4) Salir";
				cout<<"\n Digite la opcion a la que desea acceder: ";
				cin>>opcion;
				
				if(opcion==1){
					cout<<"\n Ingrese la cantidad a depositar: ";
					cin>>agregar;
					saldo = saldo_inicial + agregar;
					cout<<"\n Cantidad disponible en su cuenta: "<<saldo;	
				}
				else if(opcion==2){
					cout<<"\n Ingrese la cantidad que desea retirar: ";
					cin>>retiro;
					if(retiro>3000){
						cout<<"\n La cantidad que desea retirar es mayor a su saldo, digite nuevamente la cantidad a retirar";
						cin>>retiro;
					}
					saldo= saldo_inicial - retiro;
					cout<<"\n Su cantidad disponible es: "<<saldo;
				}
				else if(opcion==3){
					cout<<"\n La cantidad disponible en cuenta es de: "<<saldo_inicial;	
				}
				else if(opcion==4){
					cout<<"\n Gracias por utilizar nuestro cajero automata";
				}
				else{
					cout<<"\n La opcion marcada no esta disponible";
				}
				cin.get();
				return 0;
			}
			break;
	
		case 16:
		   {
			int co,ca;
			float h;
			cout<< " Ingrese el cateto opuesto: ";
			cin>> co;
			cout<< " Ingrese el cateto adyacente: ";
			cin>> ca;
			h = sqrt (pow(co,2)+pow(ca,2));
			cout << " La hipotenusa es: "<<h;
			cin.get();
			return 0;
			break;
		   }				
		case 17:
			{
				double a2,b;
				cout<< " Ingrese un numero: "; cin>>a2;
				b = sqrt(a2);
				cout<< " La raiz cuadrada de "<< a2<<" es: "<<b<< endl;
				break;
			}
		case 18:
		{
		   float a;
	       float py;
	       float r;
	       float volumen;
	       py = 3.1416;
	       cout << " Ingrese la altura del cilindro en cm " << endl;
	       cin >> a;
	       cout << " Ingrese el radio del cilindro en cm " << endl;
	       cin >> r;
	       volumen = py*pow(r,2)*a;
	       cout << " El volumen del cilindro es " << volumen << "cm" << endl;
	       return 0;
			break;
			}
		case 19:
		{
		float calif_1=0,calif_2=0,calif_3=0,promedio=0;
		printf("\n Ingrese su primera calificacion: ");
		scanf( "%f", &calif_1);
		printf("\n Ingrese su segunda calificacion: ");
		scanf( "%f", &calif_2);
		printf("\n Ingrese su tercera calificacion: ");
		scanf("%f", &calif_3);
		promedio =(calif_1+calif_2+calif_3) /3;
		if(promedio<61) 
		{
		 printf("\n lo sentimos, su promedio de %.2f no es satisfactorio", promedio);
		}
		else
		{
			printf("\n Felicitaciones, pasaste con un promedio de  %.2f", promedio);
		}
		 getch();
			break;
			}
		case 20:
		{
		      {
               int mes,dias,a;
                cout<<"ingrese el mes en numeros y el a"<<char(164)<<"o"<<endl;
               cin>>mes>>a;
			  switch (mes)
            {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
             dias = 31;
			 break;
			 case 4: case 6: case 9: case 11:
			 dias = 30;
			 break;
			 case 2:if(a%4==0)
			 dias = 28;
    		 else
			 dias=29;
			 break;
			 default:
			 printf("El mes no es válido");
			 break;
			 }
			 cout<<dias<<endl;
			 cin.ignore();return 0;
  			 }
			break;
		 }		
		case 21:
			{
			   cout << "SALIR\n";
			  exit(0);///FUNCION QUE TERMINA EL PROGRAMA 
			}
		       cout << "PRESIONE UNA TECLA PARA REGRESAR AL MENU PRINCIPAL" << endl;
		     _getch();//FUNCION QUE PAUSA EL PROGRAMA HASTA QUE UNA TECLA SEA PRESIONADA	
			}			
	}
	system ("pause");
	return 0;
}






