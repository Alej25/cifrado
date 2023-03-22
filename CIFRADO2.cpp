 #include<iostream>
#include<cstring>
#include<string.h>
#include<conio.h>

using namespace std ;
void   menu();
void  cifrar(char  *texto , int contador);
void  descifrar(char  *texto , int contador);
void  feurzabruta(char  *texto , int contador);

int main(){
	int A,contador;
	//char *limitePUN;
 char limite[50];
 char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // son 52 letras
 //limitePUN=limite;
 cout<<"ingrese el texto a desear no mayor a 50 letras "<<endl;
 gets(limite);
 strupr(limite);
 
  do {
        menu();
        cin >> A;
        switch (A)
        {
        case 1:{
		
            system("cls");
            cifrar(limite, contador);
            cout<<limite<<endl;
            cout<<"hola";
            system("pause");
            system("cls");
            break;}
            
        case 2:
        	
         	 system("cls");
            descifrar(limite, contador);
            cout<<limite<<endl;
            system("pause");
            system("cls");
            break;
        
 case 3:{
 	
 	      system("cls");
         feurzabruta(limite, contador);
          system("pause");
          system("cls");
          break;
}
  }
    } while (A == 0);

 return 0;
}
void menu() {
    cout << "\tSeleccione una opcion" << endl
        << "\t1-Cifrar" << endl << "\t2-Descifrar" << endl << "\t3-Fuerza bruta" << endl << "\t5-tSalir" << endl;
}

void cifrar( char *texto, int contador){
	
	 char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   for(int i=0;i<strlen(texto);i++){
      contador=0;
      while(contador<26){
       if(texto[i]==alfabeto[contador] && (contador<23 || contador>26)){
        texto[i]=alfabeto[contador + 3];
         contador=26;
      }
   if(texto[i]==alfabeto[contador] && (contador>=23 && contador<26 )){  //caso de letras x,y ,z 
  
    if(texto[i]=='X'){
        texto[i]='A';
    }
    if(texto[i]=='Y'){
       texto[i]='B';
    }
    if(texto[i]=='Z'){
        texto[i]='C';
    }
    contador=23;
   }
      contador++;
  }
 }
	
}

void  descifrar(char  *texto , int contador){
	
		 char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for(int i=0;i<strlen(texto);i++){
      contador=0;
      while(contador<26){
       if(texto[i]==alfabeto[contador] && (contador<26 || contador>23)){
        texto[i]=alfabeto[contador - 3];
         contador=26;
      }
   if(texto[i]==alfabeto[contador] && (contador>=0 && contador<=2 )){  //caso de letras x,y ,z 
  
    if(texto[i]=='A'){
        texto[i]='X';
    }
    if(texto[i]=='B'){
       texto[i]= 'Y';
    }
    if(texto[i]=='C'){
        texto[i]='Z';
    }
      
    contador<=2;
   }
      contador++;
  }
 }	
	
}
void  feurzabruta(char  *texto , int contador){
		 char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   for(int i=0;i<strlen(texto);i++){
      contador=0;
      while(contador<26){
       if(texto[i]==alfabeto[contador] && (contador<23 || contador>26)){
        texto[i]=alfabeto[contador - 3];
         contador=26;
      }
   if(texto[i]==alfabeto[contador] && (contador>=23 && contador<26 )){  //caso de letras x,y ,z 
  
    if(texto[i]=='A'){
        texto[i]='X';
    }
    if(texto[i]=='B'){
       texto[i]='Y';
    }
    if(texto[i]=='C'){
        texto[i]='Z';
    }
    contador=23;
   }
      contador++;
  }
   cout<<"la solucion:   "<< contador ;
   cout<<"es " <<texto <<endl;
 }
	
}

