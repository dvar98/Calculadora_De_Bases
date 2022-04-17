#include <iostream>
#include <stdlib.h>
#include <math.h>
#include<string.h>

using namespace std;

int main ()
{
    long opcion,tnt[20],tnt2,lopers,miguel,daniel,checo,contador,imaginario,Binario[2],Hexadecimal[16],Octal[8],i,b,f;
    char tnt3[50];
    bool False;
    tnt2=0;
    string bin;
    i=0;
    b=0;
    f=1;
    daniel=0; 
    do
    {
        cout<<"1-Ingresa el numero en decimal para ver en binario"<<endl;
        cout<<"2-Ingresa el numero en decimal para ver en hexadecimal"<<endl;
        cout<<"3-Ingresa el numero en decimal para ver en octal"<<endl;
        cout<<"4-Ingresa el numero en octal para ver en decimal"<<endl;
        cout<<"5-Ingresa el numero en octal para ver en binario"<<endl;
        cout<<"6-Ingresa el numero en octal para ver en hexadecimal"<<endl;
        cout<<"7-Ingresa el numero en hexadecimal para ver en binario"<<endl;
        cout<<"8-Ingresa el numero en hexadecimal para ver en octal"<<endl;
        cout<<"9-Ingresa el numero en hexadecimal para ver en decimal"<<endl;
        cout<<"10-Ingresa el numero en Binario para ver en decimal"<<endl;
        cout<<"11-Ingresa el numero en Binario para ver en octal"<<endl;
        cout<<"12-Ingresa el numero en Binario para ver en hexadecimal"<<endl;
        cout<<"13-Salir de aqui :D"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            cout<<"Ingresa el numero"<<endl;
            cin >> tnt[0];
            while (99999<=tnt[0] || tnt[0]<=-1)
            {
                cout<<"Error, Ingrese de nuevo el numero"<<endl;   
                cin>>tnt[0];
                }

                cout<<"El numero en binario es: ";  

                for ( contador = 0; tnt[contador] != 1; contador++)
                {
                    tnt[contador+1] = tnt[contador]/2;
                    Binario[contador] = tnt[contador]%2;
                    if (tnt[contador+1]==1)
                    {
                        Binario[contador+1] = 1;
                    }
                }
                for (int s = contador; s >= 0; s--)
                {
                    cout<<Binario[s]<<" ";
                }
                cout<<endl;
                
                
        break;

        case 2:
            cout<<"Ingresa el numero"<<endl;
            cin >> tnt[0];
            while (99999<=tnt[0] || tnt[0]<-1)
            {
                cout<<"Error, Ingrese el numero de nuevo"<<endl;   
                cin>>tnt[0];
                }
                cout<<"El numero en Hexadecimal: ";
                do
                {
                    miguel=tnt[0]%16;
                    contador = tnt[0]/16;
                    Hexadecimal[i]= miguel;
                    tnt[0] = contador;
                    i++;
                } while (contador>15);
                Hexadecimal[i] = contador;
                for (int m = i; m >=0; m--)
                {
                    if (Hexadecimal[m]==10)
                    {
                        cout<<"A";
                    }
                    else
                    {
                        if (Hexadecimal[m]==11)
                    {
                        cout<<"B";
                    }
                    else
                    {
                        if (Hexadecimal[m]==12)
                        {
                            cout<<"C";
                        }
                        else
                        {
                            if (Hexadecimal[m]==13)
                            {
                                cout<<"D";
                            }
                            else
                            {
                                if (Hexadecimal[m]==14)
                                {
                                    cout<<"E";
                                }
                                else
                                {
                                    if (Hexadecimal[m]==15)
                                    {
                                        cout<<"F";
                                    }
                                    else
                                    {
                                        cout<<Hexadecimal[m];
                                    }
                                }
                            }
                        }
                    }
                }
                 } 
                 cout<<endl;
        break;

        case 3:
            cout<<"Ingresa el numero"<<endl;
            cin >> tnt[0];
            while (99999<=tnt[0] || tnt[0]<-1)
            {
                cout<<"Error, ingresa el numero nuevamente"<<endl;
                cin >> tnt[0];
            }
                cout<<"El numero en Octal: ";
                do
                {
                    checo=tnt[0]%8;
                    imaginario = tnt[0]/8;
                    Octal[b]= checo;
                    tnt[0] = imaginario;
                    b++;
                } while (imaginario>8);
                
                Octal[b] = imaginario;
                
                for (int a = b; a >=0; a--)
                {
                    if (Octal[a]==8)
                    {
                        cout<<"10";
                    }
                    else
                    {
                        if (Octal[a]==9)
                        {
                            cout<<"11";
                        }
                        else
                        {
                            if (Octal[a]==10)
                            {
                                cout<<"12";
                            }
                            else
                            {
                                if (Octal[a]==11)
                                {
                                    cout<<"13";
                                }
                                else
                                {
                                    if (Octal[a]==12)
                                    {
                                        cout<<"14";
                                    }
                                    else
                                    {
                                        if (Octal[a]==13)
                                        {
                                            cout<<"15";
                                        }
                                        else
                                        {
                                            if (Octal[a]==14)
                                            {
                                                cout<<"16";
                                            }
                                            else
                                            {
                                                if (Octal[a]==15)
                                                {
                                                    cout<<"17";
                                                }
                                                else
                                                {
                                                    cout<<Octal[a];
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
            
                    }
                }
                cout<<endl;
                return main();
        break;

        case 4:
            cout<<"Ingresa el numero"<<endl;
            cin >> tnt2;
            while (303237<=tnt2 || tnt2<-1)
            {
                cout<<"Error, Ingrese el numero de nuevo"<<endl;   
                cin>>tnt2;
            }
                if(tnt2==8 || tnt2==9)
                {
                    cout<<"Error"<<endl;
                }
                else
                {
                    cout<<"El numero en decimal es: ";
                    while (tnt2>0)
                    {
                        daniel = daniel+(tnt2%10 * pow(8,b));
                        tnt2=tnt2/10;
                        b++;
                    }
                    cout<<daniel;
                    cout<<endl;
                }
                return main();           
            
        break;

        case 5:
            
            cout<<"Ingresa el numero"<<endl;
            cin >>tnt3;
            bin ="El numero en binario es:";

            for (int w = 0; w < 50; w++)
            {
                switch (tnt3[w])
                {
                case '0':
                    bin.append("000");
                break;

                case '1':
                    bin.append("001");
                break;

                case '2':
                    bin.append("010");
                break;

	            case '3':   
	                bin.append("011");
	            break;

	            case '4':
	                bin.append("100");
	            break;

	            case '5':
	                bin.append("101");
	            break;

	            case '6':
	                bin.append("110");
	            break;

	            case '7':
	                bin.append("111");
	            break;

			    case '.':
				    bin.append(".");
				break;

                default:
                    w = 50;
                break;
                }
            }
            cout<<bin<<" ";
            cout<<endl;
        break;

        case 6:
            cout<<"Ingresa el numero"<<endl;
            cin>>tnt2;

            while (303237<=tnt2 || tnt2<-1)
            {
                cout<<"Error, Ingrese el numero de nuevo"<<endl; 
                cin>>tnt2;
            }
            if (tnt2==8 || tnt2==9)
            {
                cout<<"Error"<<endl;
            }
            else
            {
            cout<<"El numero en hexadecimal es:";
            for(i=0;i<20;i++)
                tnt[i]=0;
                
            while(tnt2>0)
            {
                checo=tnt2%10;
                tnt2/=10;
                for(int y=0;y<3;y++)
                {
                    miguel=checo%2;
                    checo/=2;
                    daniel+=miguel*f;
                    f*=10;
                }
            }

            for(i=0;daniel>0;i++)
            {
                for(int y=0;y<4;y++)
                {
                    miguel=daniel%10;
                    daniel/=10;
                    tnt[i]+=miguel*pow(2,y);
                }
            }

            while(i>0)
            {
                i--;
                if(tnt[i]>9)
                {
                    cout<<char(55+tnt[i]);
                }
                else
                {
                    cout<<tnt[i];
                }
            }
            cout<<endl;
            }
        break;

        case 7:
            cout<<"Ingresa el numero o letras:"<<endl;
            cin>>tnt3;
            
            cout<<"El numero en binario es: "<<endl;
            while (tnt3[b])
            {
                switch (tnt3[b])
                {
                case '0':
                    cout<<"0000";
                break;

                case '1':
                    cout<<"0001";
                break;

                case '2':
                    cout<<"0010";
                break;

                case '3':
                    cout<<"0011";
                break;

                case '4':
                    cout<<"0100";
                break;

                case '5':
                    cout<<"0101";
                break;

                case '6':
                    cout<<"0110";
                break;

                case '7':
                    cout<<"0111";
                break;

                case '8':
                    cout<<"1000";
                break;

                case '9':
                    cout<<"1001";
                break;

                case 'A':
                case 'a':
                    cout<<"1010";
                break;

                case 'B':
                case 'b':
                    cout<<"1011";
                break;

                case 'C':
                case 'c':
                    cout<<"1100";
                break;

                case 'D':
                case 'd':
                    cout<<"1101";
                break;

                case 'E':
                case 'e':
                    cout<<"1110";
                break;

                case 'F':
                case 'f':
                    cout<<"1111";
                break;

                default:
                    cout<<"Error en la digitacion revise ";
                break;
                }
                b++;
            }
            cout<<endl;
            return main();
        break;

        case 8:
            cout<<"Ingrese el numero o letras:"<<endl;
            cin>>tnt3;
            while (tnt3[i] != '\0')
            {
                b++;
                i++;
            }
            b--;
            i=0;
            while (b>=0)
            {
                miguel = tnt3[b];
                if(miguel>=48 && miguel<=57)
                    miguel = miguel-48;
                else if(miguel>=65 && miguel<=70)
                    miguel = miguel-55;
                else if(miguel>=97 && miguel<=102)
                    miguel = miguel-87;
                else
                {
                    cout<<"Error"<<endl;
                    return main();
                }
                daniel = daniel + (miguel*pow(16, i));
                b--;
                i++;
            }
            i=0;
            while(daniel != 0)
            {
                tnt[i] = daniel%8;
                i++;
                daniel = daniel/8;
            }
            cout<<"El numero en Octal es: "<<endl;
            for(i=(i-1); i>=0; i--)
                cout<<tnt[i];
            cout<<endl;
        break;

        case 9:
            cout<<"Ingrese el numero o letras:"<<endl;
            cin>>tnt3;
            while (tnt3[i] != '\0')
            {
                b++;
                i++;
            }
            b--;
            i=0;
            while (b>=0)
            {
                miguel = tnt3[b];
                if(miguel>=48 && miguel<=57)
                    miguel = miguel-48;
                else if(miguel>=65 && miguel<=70)
                    miguel = miguel-55;
                else if(miguel>=97 && miguel<=102)
                    miguel = miguel-87;
                else
                {
                    cout<<"Error"<<endl;
                    return main();
                }
                daniel = daniel + (miguel*pow(16, i));
                b--;
                i++;
            }
            cout<<"El numero en decimal es:"<<daniel<<endl;
        break;
        case 10:
            cout<<"Ingrese el numero: "<<endl;
            cin>>tnt2;
            while (tnt2!=0)
            {
                miguel=tnt2%10;
                daniel=daniel+(miguel*f);
                f=f*2;
                tnt2=tnt2/10;
            }
            cout<<"El numero en decimal es: "<<endl<<daniel;
            cout<<endl;
        break;

        case 11:
            cout<<"Ingrese el numero: "<<endl;
            cin>>tnt2;
            cout<<"El numero en Octal es:"<<endl;
            while (tnt2!=0)
            {
                miguel=tnt2%10;
                daniel=daniel+(miguel*f);
                f=f*2;
                tnt2=tnt2/10;
            }
            i=1;
            checo=daniel;
            while (checo >0)
            {
                tnt[i++]=checo%8;
                checo=checo/8;
            }
            for ( b=(i-1); b>0; b--)
            {
                cout<<tnt[b];
            }
            cout<<endl;
        break;

        case 12:
            cout<<"Ingrese el numero: "<<endl;
            cin>>tnt2;
            cout<<"El numero en Octal es:"<<endl;
            while (tnt2!=0)
            {
                miguel=tnt2%2;
                daniel=daniel+(miguel*f);
                f=f*2;
                tnt2=tnt2/10;
            }
            i=0;
            checo=daniel;
            while (checo !=0)
            {
                tnt[i]=checo%16;
                checo=checo/16;
                i++;
            }
            for ( b=(i-1); b>=0; b--)
            {
                if (tnt[b]>9)
                {
                    cout<<(char)(tnt[b] + 55);
                }
                else
                {
                    cout<<tnt[b];
                }
            }
            cout<<endl;
        break;

        case 13:
            cout<<"Seguro que quieres salir ?"<<endl;
            cout<<"1-SI"<<endl<<"2-NO"<<endl;
            cin>>lopers;
            if (lopers==1)
            {
                return 0;
            }
            else
            {
                return main();
            }
        break;
        
        default:
        break;
        }
    } 
    while (true);
    }

