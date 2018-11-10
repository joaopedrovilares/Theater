
void menuprincipal(){

        system("cls");
        cin.clear();
        cin.sync();


int contaactores=0;
int proc;
int idtemp;                                    //variavel temporaria
int empcont;                                 //contador de actores empregados num espetaculo
int quantosactores=0;                    //
int opc2=0;
char nomep[30];
Companhia c[50];                          // c nome da variavel
Companhia historico[50];              // para ter um duplicado que nunca se apaga da struct principal, para poder haver um historico
int a=0;                                 //Contador global da Struct "c" a actual
int conthis=0;                                          //Contador global da Struct "historico" que é uma copia da "c"
int contespetaculos=0;                  //Contador global espetaculos
Espetaculo e[50]  ;
Espetaculo Histe[50] ;                   //Copia da "e"
int conthise;              //Contador da struc Histe
char *ptr;
bool ex=true;
int opc;
int escolhaactor;
int escolhaespetaculo;  //

FILE *arq;
FILE *arq2;
FILE *arq3;
FILE *arq4;
FILE *arq5;
FILE *arq6;
FILE *arq7;
FILE *arq8;



        if( (arq=fopen("registo.dat","rb") )!= NULL)   //PARA LER DO FICHEIRO QUE GUARDOU TUDO
            {
         fread(&c, sizeof(c),1,arq);      //c nome da variavel do tipo struct companhia
         fclose(arq);
            }

	    if((arq3=fopen("historico.dat","rb"))!= NULL)   //PARA LER DO FICHEIRO QUE GUARDOU TUDO
            {
         fread(&historico, sizeof(historico),1,arq3);
         fclose(arq3);
            }

        if((arq4=fopen("conthis.dat", "rb"))!= NULL)   //PARA LER DO FICHEIRO QUE GUARDOU TUDO
            {
         fread(&conthis, sizeof(conthis),1,arq4);
         fclose(arq4);
            }


        if((arq2=fopen("Contador.dat", "rb"))!= NULL)   //PARA LER DO FICHEIRO o CONTADOR a
        {
         fread(&a, sizeof(a),1,arq2);
         fclose(arq2);

        }

         if((arq5=fopen("espetaculo.dat", "rb"))!= NULL)   //
        {
         fread(&e, sizeof(e),1,arq5);
         fclose(arq5);

        }

            if((arq6=fopen("contaespetaculo.dat", "rb"))!= NULL)   //
        {
         fread(&contespetaculos, sizeof(contespetaculos),1,arq6);
         fclose(arq6);

        }


          if((arq7=fopen("Histe.dat", "rb"))!= NULL)   //
        {
         fread(&Histe, sizeof(Histe),1,arq7);
         fclose(arq7);

        }

                 if((arq8=fopen("conthise.dat", "rb"))!= NULL)   //
        {
         fread(&conthise, sizeof(conthise),1,arq8);
         fclose(arq8);

        }




		do{

			cout<<"------------------------------Bem Vindo:----------------------------------------------------------"<<endl;
			cout<<"---------------------Companhia de Teatro --------------"<<endl;


			cout << "1) - Inserir novo Actor "<<endl;
			cout << "2) - Listar Actores "<< endl;
			cout << "3) - Agendar Espetaculos "<<endl;
			cout << "4) - Listar Espetaculos "<<endl;
			cout << "5) - Apagar Actor"        <<endl;
			cout<<  "6) - Apagar Espetaculo"<<endl;
			cout<<  "7) - Editar Actor"          <<endl;
			cout<<  "8) - Editar Espetaculo"  <<endl;
        	cout<<  "9) - Historico de Actores"  <<endl;
        	cout<<  "10) - Historico de Espetaculos"  <<endl;
			cout << "0) - Sair "<<endl;
			cout << "A sua opcao: ";
            cin>>opc2;

				switch(opc2){


					case 1:


                        cout<<endl<<"---------Inserir novo Actor-----------------"<<endl;
                        inseriractor(&c[0],a,ex);                      //companhia c
                        historico[conthis]=c[a];
                        a++;
                        conthis++;
                        break;

					case 2:

                        cout<<endl<<"----------------Lista de Actores---------------------"<<endl;
                        listaractor(&c[0],a);
                        break;

					case 3:
					    cout <<endl<< "-------------------------Agendar Espetaculo----------- "<<endl;
						inserirespetaculo(&e[contespetaculos], contespetaculos, contaactores, &c[0],&a);
						Histe[conthise]=e[contespetaculos];
                        contespetaculos++;
                        contaactores++;
                        conthise++;


                        break;

					case 4:

						cout<<endl<<"---------------Listar Espetaculos-----------"<<endl;
						listarespetaculo(&e[0],contespetaculos, contaactores,&c[0],a);

                        break;


					case 5:

                        cout<<endl<<"-----------------Apagar Actor-------------"<<endl;
                        listaractor(&c[0],a);
                        apagaractoes(&c[0],&a);

                        a=a-1;
                        break;

                    case 6:

                        cout<<endl<<" ----------Apagar Espetaculo------ "<<endl;
                        listarespetaculo(&e[0],contespetaculos, contaactores,&c[0],a);
                        apagarespetaculo(&e[0],&contespetaculos, contaactores, &c[0],a);

                        break;

                    case 7:

                        cout<<endl<<"------------Editar Actor-----------------"<<endl;

                        listaractor(&c[0],a);
                        cout<<"Que actor deseja Editar?"<<endl;
                        cin>>escolhaactor;
                        editaractor(&c[0],escolhaactor);

                        break;

                    case 8:

                        cout<<endl<<"-------------Editar Espetaculo-------"<<endl;
                        listarespetaculo(&e[0],contespetaculos, contaactores,&c[0],a);
                        cout<<"Que Espetaculo deseja Editar?"<<endl;
                        cin>>escolhaespetaculo;
                        editarespetaculo(&e[0], escolhaespetaculo, contaactores, &c[0],&a);


                        break;


                    case 9:
                        cout<<"Historico de actores"<<endl;
                         listaractor(&historico[0],conthis);
                        break;


                    case 10:
                        cout<<"Historico de Espetaculos"<<endl;
                        listarespetaculo(&Histe[0],conthise, contaactores,&historico[0],conthis);


                        break;




                    case 0:

                    if((arq=fopen( "registo.dat", "wb" ))!= NULL)
                    {
                    fwrite(&c,sizeof(c) ,1,arq);
                    fclose(arq);
				    }
                    else
                    {
                      cout<<"Erro"<<endl;
                    }


                if((arq2=fopen( "Contador.dat", "wb" ))!= NULL)
                {   												                //Para Gravar contador
                fwrite(&a,sizeof(a) ,1,arq2);
                fclose(arq2);
                }
                else
                {
                cout<<"Erro"<<endl;
                }

                if((arq3=fopen("historico.dat", "wb"))!= NULL)
                {
                fwrite(&historico, sizeof(historico),1,arq3);
                fclose(arq3);
                }

                if((arq4=fopen("conthis.dat", "wb"))!= NULL)
                {
                fwrite(&conthis, sizeof(conthis),1,arq4);
                fclose(arq4);
                }
                else
                {
                cout<<"Erro"<<endl;
                }

                if((arq5=fopen("espetaculo.dat", "wb"))!= NULL)
                {
                fwrite(&e, sizeof(e),1,arq5);
                fclose(arq5);
                }
                else
                {
                cout<<"Erro"<<endl;
                }

                 if((arq6=fopen("contaespetaculo.dat", "wb"))!= NULL)
                {
                fwrite(&contespetaculos, sizeof(contespetaculos),1,arq6);
                fclose(arq6);
                }
                else
                {
                cout<<"Erro"<<endl;
                }

                        if((arq7=fopen("Histe.dat", "wb"))!= NULL)
                {
                fwrite(&Histe, sizeof(Histe),1,arq7);
                fclose(arq7);
                }
                else
                {
                cout<<"Erro"<<endl;
                }

                 if((arq8=fopen("conthise.dat", "wb"))!= NULL)
                {
                fwrite(&conthise, sizeof(conthise),1,arq8);
                fclose(arq8);
                }
                else
                {
                cout<<"Erro"<<endl;
                }

			system ("CLS");
			cout <<"....Progresso Gravado.....!"<<endl;
			break;


            }


	}while(opc2!=0);



}

