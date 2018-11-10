int  procurar(Companhia *ptr, int *a, int *idtemp){   //POR ACTOR


                    for(int i=0; i<=*a ;i++){
                    if ( ptr->Act[i].num_act ==  *idtemp)
                    {

                        ptr->Act[i].stat=false;

                        return i;
                    }


		}



	return -1;

}

void inseriractor(Companhia *ptr, int a, bool ex){



   system("cls") ;

    cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
    cout<<"Nome do Actor: "<<endl;
    cin.clear();
    cin.sync();
    cin.getline(ptr->Act[a].nome, sizeof(ptr->Act[a].nome));

    for(int i=0; i<sizeof(ptr->Act[a].nome);i++)
    {

        int b=((int)ptr->Act[a].nome[i]>='a' && ptr->Act[a].nome[i]<='z' || ptr->Act[a].nome[i]>='A' && ptr->Act[a].nome[i]<='Z');

        if(ptr->Act[a].nome[i]>='a' && ptr->Act[a].nome[i]<='z' || ptr->Act[a].nome[i]>='A' && ptr->Act[a].nome[i]<='Z')
        {
            break;
        }
        else
        {
            do{
            cout<<"So pode usar letras"<<endl;
            cin.clear();
            cin.sync();
            cin.getline(ptr->Act[a].nome, sizeof(ptr->Act[a].nome));
            }while(b=0);
        }
    }


     do{
            cout<<"Idade do Actor em anos:"<<endl;


            while(!(cin>>ptr->Act[a].Idade)){
            cout<<"So numeros:"<<endl;
            cin.clear();
            cin.ignore(150, '\n');

        }

        if(ptr->Act[a].Idade>=0 && ptr->Act[a].Idade<=150 )
        {
            break;
        }


        if(ptr->Act[a].Idade<0 || ptr->Act[a].Idade>150)
        {

            while(ptr->Act[a].Idade>150 || ptr->Act[a].Idade<0)
            {
                cout<<"So numeros inteiros de 0 a 150"<<endl;
                while(!(cin>>ptr->Act[a].Idade))
                {
                    cout<<"So numeros:"<<endl;
                    cin.clear();
                    cin.ignore(150, '\n');
                }

            }
            if(ptr->Act[a].Idade>=0 && ptr->Act[a].Idade<=150 )
            {
                break;
            }

        }

     }while(!(cin>>ptr->Act[a].Idade));

    do{
        cout<<"Salario do  Actor: "<<endl;

        while(!(cin>>ptr->Act[a].salario))
        {
        cout<<"So numeros:"<<endl;
        cin.clear();
        cin.ignore(150, '\n');
        }

            if(ptr->Act[a].salario>=0 && ptr->Act[a].salario<=5000000)
            {
                break;
            }

            if(ptr->Act[a].salario<0 || ptr->Act[a].salario>5000000)
            {
                while(ptr->Act[a].salario<0 || ptr->Act[a].salario>5000000)
                {
                    cout<<"So numeros inteiros de 0 a 5000000"<<endl;
                    while(!(cin>>ptr->Act[a].salario))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(150, '\n');
                    }
                }

                if(ptr->Act[a].salario>=0 && ptr->Act[a].salario<=5000000)
                {
                break;
                }
            }
    }while(!(cin>>ptr->Act[a].salario));

    ptr->Act[a].num_act=a;
    cout<<"Numero actor: "<<ptr->Act[a].num_act<<endl;


cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
        system ("PAUSE");
        system("cls") ;
}

void listaractor(Companhia *ptr, int a){


    system("cls") ;
    cin.clear();
    cin.sync();



    int ult=0;

	for (int i=0; i<a;i++){




            cout <<"Actor ID"<<ptr->Act[i].num_act<<endl;

            cout<<"Nome do actor:  "<<ptr->Act[i].nome<<endl;

            cout<<"Idade do Actor:  "<< ptr->Act[i].Idade<<endl;

            cout<<"Salario do Actor: "<<ptr->Act[i].salario<<endl;


            if(ptr->Act[i].stat==true)
            {
                 cout<<(ANSI_COLOR_GREEN   "Disponivel "  ANSI_COLOR_RESET "\n");
            }
            if(ptr->Act[i].stat==false)
            {
                  cout<<(ANSI_COLOR_RED     "Indisponivel"     ANSI_COLOR_RESET "\n");
            }

            //ptr++;

	}


   cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");


}

void inserirespetaculo(Espetaculo *ptr2, int contespetaculos, int contaactores, Companhia *ptra, int *a){
cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"  ANSI_COLOR_RESET "\n");

        system("cls") ;

        time_t t = time(NULL);
        tm* timePtr = localtime(&t);

        int salario2;  system ("PAUSE");
        int idtemp;
        char nome2[30];

        cout<<"Nome do espetaculo: "<<endl;
        cin.clear();
        cin.sync();
        cin.getline(ptr2->nomeesp, sizeof(ptr2->nomeesp));

        for(int i=0; i<sizeof(ptr2->nomeesp);i++)
        {

            int b=((int)ptr2->nomeesp[i]>='a' && ptr2->nomeesp[i]<='z' || ptr2->nomeesp[i]>='A' && ptr2->nomeesp[i]<='Z');

            if(ptr2->nomeesp[i]>='a' && ptr2->nomeesp[i]<='z' || ptr2->nomeesp[i]>='A' && ptr2->nomeesp[i]<='Z')
            {
                break;
            }
            else
            {
                do{
                cout<<"So pode usar letras"<<endl;
                cin.clear();
                cin.sync();
                cin.getline(ptr2->nomeesp, sizeof(ptr2->nomeesp));
                }while(b=0);
            }
        }


        cout<<"Nome do Encenador: "<<endl;
        cin.clear();
        cin.sync();
        cin.getline(ptr2->nomeEncenador, sizeof(ptr2->nomeEncenador));

        for(int i=0; i<sizeof(ptr2->nomeEncenador);i++)
        {

            int b=((int)ptr2->nomeEncenador[i]>='a' && ptr2->nomeEncenador[i]<='z' || ptr2->nomeEncenador[i]>='A' && ptr2->nomeEncenador[i]<='Z');

            if(ptr2->nomeEncenador[i]>='a' && ptr2->nomeEncenador[i]<='z' || ptr2->nomeEncenador[i]>='A' && ptr2->nomeEncenador[i]<='Z')
            {
                break;
            }
            else
            {
                do{
                cout<<"So pode usar letras"<<endl;
                cin.clear();
                cin.sync();
                cin.getline(ptr2->nomeEncenador, sizeof(ptr2->nomeEncenador));
                }while(b=0);
            }
        }




        //data


    //PRECO DOS BILHETES
    do
    {
        cout<<"Preco Bilhetes"<<endl;

        while(!(cin>>ptr2->precobilhete))
        {
            cout<<"So numeros:"<<endl;
            cin.clear();
            cin.ignore(150, '\n');
        }

        if(ptr2->precobilhete>=0 && ptr2->precobilhete<=100000)
        {
            break;
        }
        if(ptr2->precobilhete<0 || ptr2->precobilhete>100000)
        {

            while(ptr2->precobilhete<0 || ptr2->precobilhete>100000)
            {
                cout<<"Numeros de 0 a 100000"<<endl;
                while(!(cin>>ptr2->precobilhete))
                {
                    cout<<"So numeros:"<<endl;
                    cin.clear();
                    cin.ignore(150, '\n');
                }
            }
            if(ptr2->precobilhete>=0 && ptr2->precobilhete<=100000)
            {
                break;
            }
        }

    }while(!(cin>>ptr2->precobilhete));



//NUMERO DE LUGARES

    do
    {
        cout<<"Numero de lugares"<<endl;

        while(!(cin>>ptr2->nlugares)){
        cout<<"So numeros:"<<endl;
        cin.clear();
        cin.ignore(150, '\n');
        }

        if(ptr2->nlugares>=0 && ptr2->nlugares<=200000)
        {
            break;
        }
        if(ptr2->nlugares<0 || ptr2->nlugares>200000)
        {
            while(ptr2->nlugares<0 || ptr2->nlugares>200000)
            {
                cout<<"Numeros de 0 a 200000"<<endl;
                while(!(cin>>ptr2->nlugares))
                {
                    cout<<"So numeros:"<<endl;
                    cin.clear();
                    cin.ignore(150, '\n');
                }
            }
            if(ptr2->nlugares>=0 && ptr2->nlugares<=200000)
            {
                break;
            }

        }

    }while(!(cin>>ptr2->nlugares));



    ptr2->receitas=((ptr2->precobilhete)*(ptr2->nlugares));



                cout<<"quantos actores?"<<endl;
                cin>>ptr2->contaactores;


                    listaractor(ptra, *a);

                        for(int v=0; v<ptr2->contaactores; v++)
                        {

                            do
                            {
                                cout<<"Escolha o numero do actor desejado: "<<endl;

                                while(!(cin>>idtemp))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(150, '\n');
                                }
                                break;

                                if(idtemp==0 && idtemp<=*a)
                                {
                                    break;
                                }
                                if(idtemp<0 && idtemp>*a)
                                {
                                cout<<"Erro"<<endl;
                                cin>>idtemp;;
                                }

                            }while(!(cin>>idtemp));


                            int pro=procurar(ptra, a, &idtemp);

                                if (pro>=0)
                               // if(idtemp<=*a)  //outro metodo tb inteligente
                                {
                                    cout<<"Existe"<<endl;
                                    ptr2->empregados[v] =(ptra)->Act[pro];
                                    cout<<"Nome: "<<(ptra)->Act[idtemp].nome<<endl;
                                }

                                else
                                {
                                    cout<<"Nao existe"<<endl,
                                    v--;
                                }

                        }
                                cout<<"Agendar data do espetaculo"<<endl;

                                cout<<"Inserir data Inicial "<<endl;
                            do
                            {
                                cout<<"Inserir dia"<<endl;
                                while(!(cin>>ptr2->diainicio))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(200, '\n');
                                }

                                if(ptr2->diainicio>0 && ptr2->diainicio<32)
                                {
                                    break;
                                }

                                if(ptr2->diainicio <=0 || ptr2->diainicio >31)
                                {
                                    while(ptr2->diainicio <=0 || ptr2->diainicio >31)
                                    {
                                        cout<<"Maior que 0 e menor que 32"<<endl;
                                        while(!(cin>>ptr2->diainicio))
                                        {
                                            cout<<"So numeros:"<<endl;
                                            cin.clear();
                                            cin.ignore(200, '\n');
                                        }
                                    }

                                    if(ptr2->diainicio>0 && ptr2->diainicio<32)
                                    {
                                        break;
                                    }
                                }
                            }while(!(cin>>ptr2->diainicio));



                                do
                                {
                                    cout<<"Inserir mes"<<endl;
                                    while(!(cin>>ptr2->mesinicio))
                                    {
                                        cout<<"So numeros:"<<endl;
                                        cin.clear();
                                        cin.ignore(32, '\n');
                                    }

                                    if(ptr2->mesinicio>=(timePtr->tm_mon)+1 && ptr2->mesinicio<=13)
                                    {
                                        break;
                                    }

                                    if(ptr2->mesinicio<(timePtr->tm_mon)+1 ||  ptr2->mesinicio>=13)
                                    {
                                        while(ptr2->mesinicio<(timePtr->tm_mon)+1 ||  ptr2->mesinicio>=13)
                                        {
                                            cout<<"Maior ou igual ao mes actual e menor que 13"<<endl;
                                            while(!(cin>>ptr2->mesinicio))
                                            {
                                                cout<<"So numeros:"<<endl;
                                                cin.clear();
                                                cin.ignore(32, '\n');
                                            }

                                        }

                                        if(ptr2->mesinicio>=(timePtr->tm_mon)+1 && ptr2->mesinicio<=13)
                                        {
                                            break;
                                        }
                                    }
                                }while(!(cin>>ptr2->mesinicio));



                                do
                                {
                                    cout<<"Inserir ano"<<endl;
                                    while(!(cin>>ptr2->anoinicio))
                                    {
                                        cout<<"So numeros:"<<endl;
                                        cin.clear();
                                        cin.ignore(3000, '\n');
                                    }

                                    if(ptr2->anoinicio>=(timePtr->tm_year)+1900 &&  ptr2->anoinicio<=2029)
                                    {
                                        break;
                                    }
                                    if(ptr2->anoinicio<(timePtr->tm_year)+1900)
                                    {
                                        while(ptr2->anoinicio<(timePtr->tm_year)+1900)
                                        {
                                            cout<<"Ano igual ou maior que ano actual"<<endl;
                                            while(!(cin>>ptr2->anoinicio))
                                            {
                                                cout<<"So numeros:"<<endl;
                                                cin.clear();
                                                cin.ignore(3000, '\n');
                                            }
                                        }

                                        if(ptr2->anoinicio>=(timePtr->tm_year)+1900 &&  ptr2->anoinicio<=2029)
                                        {
                                        break;
                                        }
                                    }

                                }while(!(cin>>ptr2->anoinicio));



                                cout<<"Insere data Final do espetaculo"<<endl;


							do{
                                cout<<"Inserir ano"<<endl;
                                    while(!(cin>>ptr2->anofim))
                                    {
                                        cout<<"So numeros:"<<endl;
                                        cin.clear();
                                        cin.ignore(32, '\n');
                                    }
                                    if(ptr2->anofim>=(timePtr->tm_year)+1900 && ptr2->anofim<=2029 && ptr2->anofim>=ptr2->anoinicio)
                                    {
                                        break;
                                    }
                                    if(ptr2->anofim<(timePtr->tm_year)+1900 || ptr2->anofim>=2030 || ptr2->anofim<ptr2->anoinicio)
                                    {
                                        while(ptr2->anofim<(timePtr->tm_year)+1900 || ptr2->anofim>=2030 || ptr2->anofim<ptr2->anoinicio)
                                        {
                                            cout<<"Maior ou igual ao ano de inicio, ano actual e menor que 2030"<<endl;
                                            while(!(cin>>ptr2->anofim))
                                            {
                                                cout<<"So numeros:"<<endl;
                                                cin.clear();
                                                cin.ignore(32, '\n');
                                            }
                                        }

                                        if(ptr2->anofim>=(timePtr->tm_year)+1900 && ptr2->anofim<=2029 && ptr2->anofim>=ptr2->anoinicio)
                                        {
                                            break;
                                        }
                                    }

                                }while(!(cin>>ptr2->anofim));



                            do
                            {
                                cout<<"Inserir mes"<<endl;
                                while(!(cin>>ptr2->mesfim))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(32, '\n');
                                }
                                    if(ptr2->mesfim>=1 && ptr2->mesfim<=13)
                                    {
                                    	if(ptr2->anofim==ptr2->anoinicio)
                                    	{
                                    		if(ptr2->mesinicio<ptr2->mesfim)
											{
												break;
											}
											if(ptr2->mesinicio==ptr2->mesfim)
											{
												break;
											}
										}

                                    }
                                    if(ptr2->mesfim<=0 || ptr2->mesfim>=13)
                                    {
                                        while(ptr2->mesfim<=0 || ptr2->mesfim>=13)
                                        {
                                            cout<<"Mes maior que 0 e menor que 13"<<endl;
                                            while(!(cin>>ptr2->mesfim))
                                            {
                                                cout<<"So numeros:"<<endl;
                                                cin.clear();
                                                cin.ignore(32, '\n');
                                            }
                                        }
                                        if(ptr2->mesfim>=1 && ptr2->mesfim<=13)
                                        {
                                            break;
                                        }
                                    }
                                }while(!(cin>>ptr2->mesfim));


                            do{
                                cout<<"Inserir dia"<<endl;
                                while(!(cin>>ptr2->diafim))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(32, '\n');
                                }

                                if(ptr2->diafim>=1 && ptr2->diafim<=31)
                                {
                                	if(ptr2->mesinicio==ptr2->mesfim)
									{
										if(ptr2->diainicio <=  ptr2->diafim)
										{
											break;
										}
									}

                                    if(ptr2->mesinicio<ptr2->mesfim)
                                    {
                                    	break;
									}
                                }

                                if(ptr2->diafim <=0 || ptr2->diafim >=32)
                                {
                                    while(ptr2->diafim <=0 || ptr2->diafim >=32)
                                    {
                                        cout<<"Dia maior que 0 e menor que 32"<<endl;
                                        while(!(cin>>ptr2->diafim))
                                        {
                                            cout<<"So numeros:"<<endl;
                                            cin.clear();
                                            cin.ignore(32, '\n');
                                        }
                                    }

                                    if(ptr2->diafim>=1 && ptr2->diafim<=31)
                                    {
                                        break;
                                    }
                                }

                            }while(!(cin>>ptr2->diafim));




cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
          system ("PAUSE");
          system("cls") ;


char opc;
//ptr2->orca[contespetaculos].total=0;
 do{
    cout<<"Entrar no orcamento: "<<endl
        <<"1--Despesas com luz"<<endl
        <<"2--Despesas com publicidade"<<endl
        <<"3--Despesas com comida"<<endl
        <<"4--Despesas com agua"<<endl
        <<"5--Despesas com cenario"<<endl
        <<"6--Despesas com roupa"<<endl
        <<"7--Despesas com maquiagem"<<endl
        <<"0--Sair"<<endl;
     cin>>opc;

        switch(opc){

            case '1':
                    ptr2->orca[contespetaculos].luz=0;
                    do{
                        cout<<"Introduz a despesa de luz esperada para a duracao deste espetaculo"<<endl;
                        while(!(cin>>ptr2->orca[contespetaculos].luz))
                        {
                            cout<<"So numeros:"<<endl;
                            cin.clear();
                            cin.ignore(5000, '\n');
                        }
                            if(ptr2->orca[contespetaculos].luz>=0 && ptr2->orca[contespetaculos].luz<=200000)
                            {
                                break;
                            }
                            if(ptr2->orca[contespetaculos].luz<0 || ptr2->orca[contespetaculos].luz>200000)
                            {
                                while(ptr2->orca[contespetaculos].luz<0 || ptr2->orca[contespetaculos].luz>200000)
                                {
                                    cout<<"Maior que 0 ao menor que 200000"<<endl;
                                    while(!(cin>>ptr2->orca[contespetaculos].luz))
                                    {
                                        cout<<"So numeros:"<<endl;
                                        cin.clear();
                                        cin.ignore(32, '\n');
                                    }
                                }

                                if(ptr2->orca[contespetaculos].luz>=0 && ptr2->orca[contespetaculos].luz<=200000)
                                {
                                    break;
                                }
                            }

                        }while(!(cin>>ptr2->orca[contespetaculos].luz));
                break;

            case '2':
                ptr2->orca[contespetaculos].publicidde=0;
                do{
                    cout<<"Introduz a despesa de publicidade para a promocao do espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].publicidde))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].publicidde>=0 && ptr2->orca[contespetaculos].publicidde<=2000000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].publicidde<0 || ptr2->orca[contespetaculos].publicidde>2000000)
                        {
                            while(ptr2->orca[contespetaculos].publicidde<0 || ptr2->orca[contespetaculos].publicidde>2000000)
                            {
                                cout<<"Maior que 0 ao menor que 2000000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].publicidde))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].publicidde>=0 && ptr2->orca[contespetaculos].publicidde<=2000000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].publicidde));

                break;

            case '3':
                ptr2->orca[contespetaculos].comida=0;
                do{
                    cout<<"Introduz a despesa de comida esperada para a duracao deste espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].comida))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].comida>=0 && ptr2->orca[contespetaculos].comida<=500000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].comida<0 || ptr2->orca[contespetaculos].comida>500000)
                        {
                            while(ptr2->orca[contespetaculos].comida<0 || ptr2->orca[contespetaculos].comida>500000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].comida))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].comida>=0 && ptr2->orca[contespetaculos].comida<=500000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].comida));
                break;

            case '4':
                ptr2->orca[contespetaculos].agua=0;
                 do{
                    cout<<"Introduz a despesa de agua esperada para a duracao deste espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].agua))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].agua>=0 && ptr2->orca[contespetaculos].agua<=500000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].agua<0 || ptr2->orca[contespetaculos].agua>500000)
                        {
                            while(ptr2->orca[contespetaculos].agua<0 || ptr2->orca[contespetaculos].agua>500000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].agua))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].agua>=0 && ptr2->orca[contespetaculos].agua<=500000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].agua));
                break;

            case '5':
                ptr2->orca[contespetaculos].cenario=0;
                do{
                     cout<<"Introduz a deapagarespetaculospesa da criacao dos cenarios para o espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].cenario))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].cenario>=0 && ptr2->orca[contespetaculos].cenario<=1000000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].cenario<0 || ptr2->orca[contespetaculos].cenario>1000000)
                        {
                            while(ptr2->orca[contespetaculos].cenario<0 || ptr2->orca[contespetaculos].cenario>1000000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].cenario))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].cenario>=0 && ptr2->orca[contespetaculos].cenario<=1000000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].cenario));
                break;

            case '6':
                ptr2->orca[contespetaculos].roupa=0;
                 do{
                     cout<<"Introduz a despesa de guarda roupa para este espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].roupa))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].roupa>=0 && ptr2->orca[contespetaculos].roupa<=2000000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].roupa<0 || ptr2->orca[contespetaculos].roupa>2000000)
                        {
                            while(ptr2->orca[contespetaculos].roupa<0 || ptr2->orca[contespetaculos].roupa>2000000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].roupa))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].roupa>=0 && ptr2->orca[contespetaculos].roupa<=2000000)
                            {
                                break;
                            }
                        }
                    }while(!(cin>>ptr2->orca[contespetaculos].roupa));
                break;

            case '7':
                ptr2->orca[contespetaculos].maquiagem=0;
                do{
                    cout<<"Introduz a despesa de maquiagem para a duracao deste espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].maquiagem))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].maquiagem>=0 && ptr2->orca[contespetaculos].maquiagem<=100000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].maquiagem<0 || ptr2->orca[contespetaculos].maquiagem>100000)
                        {
                            while(ptr2->orca[contespetaculos].maquiagem<0 || ptr2->orca[contespetaculos].maquiagem>100000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].maquiagem))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].maquiagem>=0 && ptr2->orca[contespetaculos].maquiagem<=100000)
                            {
                                break;
                            }
                        }
                    }while(!(cin>>ptr2->orca[contespetaculos].maquiagem));
                break;


            case '0':
               ptr2->orca[contespetaculos].total=((ptr2->orca[contespetaculos].publicidde)+(ptr2->orca[contespetaculos].luz)+(ptr2->orca[contespetaculos].comida)+(ptr2->orca[contespetaculos].agua)+(ptr2->orca[contespetaculos].cenario)+(ptr2->orca[contespetaculos].roupa)+(ptr2->orca[contespetaculos].maquiagem));
               break;

            default:
                cout<<"Introduza valores de 1 a 7"<<endl;
                break;

        }
    }while(opc!='0');


}

void listarespetaculo(Espetaculo *ptr, int contespetaculos, int contaactores,Companhia *ptra, int a){

    int SalarioTotal=0;
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);


    system("cls") ;
    cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");

    for(int i=0; i<contespetaculos ; i++)
    {
       // cout<<"ID ESPETACULO: "<<i<<endl;
        cout<<"ID ESPETACULO: "<<i<<endl;
        cout<<"Nome da Peca: "<<ptr->nomeesp<<endl;
        cout<<"Nome encenador: "<<ptr->nomeEncenador<< endl;
        cout<<"Preco do Bilhete: "<<ptr->precobilhete<<endl;
        cout<<"Numero de Lugares: "<<ptr->nlugares <<endl;
       // cout<<"Data:                      "<<ptr->data <<endl;
      //  cout<<"BU: "<<ptr->budget <<endl;


      cout<<"Actores:"<<endl;
        for(int b=0; b<ptr->contaactores;b++)
        {
            cout<<(ANSI_COLOR_BLUE    "--"   ANSI_COLOR_RESET);
            cout<<"Nome: "<<ptr->empregados[b].nome<<endl;

            SalarioTotal+=ptr->empregados[b].salario;

        }
        cout<<"Despesa com Salarios: "<<SalarioTotal<<endl;
        cout<<"Total despesas: "<<((ptr->orca[i].total)+(SalarioTotal))<<endl;
        cout<<"Receitas venda de bilhetes: "<<ptr->receitas<<endl;
        cout<<"Espetaculo de "<<ptr->diainicio;
          if(ptr->mesinicio == 1) {  cout<<" de Janeiro ";} else if(ptr->mesinicio == 2) {  cout<<" de Fevereiro ";} else if(ptr->mesinicio == 3) {  cout<<" de Marco ";} else if(ptr->mesinicio == 4) {  cout<<" de Abril ";} else if(ptr->mesinicio == 5) {  cout<<" de Maio ";} else if(ptr->mesinicio == 6) {  cout<<" de Junho ";} else if(ptr->mesinicio == 7) {  cout<<" de Julho ";} else if(ptr->mesinicio == 8) {  cout<<" de Agosto ";} else if(ptr->mesinicio == 9) {  cout<<" de Setembro ";} else if(ptr->mesinicio == 10) {  cout<<" de Outubro ";} else if(ptr->mesinicio == 11) {  cout<<" de Novembro ";} else if(ptr->mesinicio == 12) {  cout<<" de Dezembro ";}
        cout<<"de "<<ptr->anoinicio;
        cout<<" A "<<ptr->diafim;
          if(ptr->mesfim == 1) {  cout<<" de Janeiro ";} else if(ptr->mesfim == 2) {  cout<<" de Fevereiro ";} else if(ptr->mesfim == 3) {  cout<<" de Marco ";} else if(ptr->mesfim == 4) {  cout<<" de Abril ";} else if(ptr->mesfim == 5) {  cout<<" de Maio ";} else if(ptr->mesfim == 6) {  cout<<" de Junho ";} else if(ptr->mesfim == 7) {  cout<<" de Julho ";} else if(ptr->mesfim == 8) {  cout<<" de Agosto ";} else if(ptr->mesfim == 9) {  cout<<" de Setembro ";} else if(ptr->mesfim == 10) {  cout<<" de Outubro ";} else if(ptr->mesfim == 11) {  cout<<" de Novembro ";} else if(ptr->mesfim == 12) {  cout<<" de Dezembro ";}
        cout<<"de "<<ptr->anofim<<endl;



             if(ptr->anofim <  (timePtr->tm_year)+1900)
            {
                    cout<<ANSI_COLOR_RED "Espetaculo Terminado"     ANSI_COLOR_RESET <<endl;
            }

            if(ptr->anofim ==  (timePtr->tm_year)+1900 )
            {

                if((ptr->mesfim < (timePtr->tm_mon)+1))
                    {
                     cout<<ANSI_COLOR_RED "Espetaculo Terminado"     ANSI_COLOR_RESET <<endl;
                    }

                if((ptr->mesfim > (timePtr->tm_mon)+1))
                        {
                    cout<<ANSI_COLOR_GREEN "Espetaculo Agendado"     ANSI_COLOR_RESET <<endl;
                        }

                 if((ptr->mesfim == (timePtr->tm_mon)+1))
                 {
                                            if(ptr->diafim < (timePtr->tm_mday))
                                            {
                                            cout<<ANSI_COLOR_RED "Espetaculo Terminado"     ANSI_COLOR_RESET <<endl;
                                            }

                                            if(ptr->diafim == (timePtr->tm_mday))
                                            {
                                            cout<<ANSI_COLOR_RED "Espetaculo Terminado"     ANSI_COLOR_RESET <<endl;
                                            }

                                            if(ptr->diafim > (timePtr->tm_mday))
                                            {
                                               cout<<ANSI_COLOR_GREEN "Espetaculo Agendado"     ANSI_COLOR_RESET <<endl;
                                            }

                 }

            }




        ptr++;
        cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
    }

cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");

       system ("PAUSE");
       system("cls") ;
}

void apagaractoes(Companhia *ptr, int *a){



            int idtemp=0;


            cout<<(ANSI_COLOR_CYAN "---------------------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
            cout<<"Qual quer apagar"<<endl;


            cin>>idtemp;
            int pro=procurar(ptr, a, &idtemp);

        if (pro>=0)

        {
                cout<<"Existe"<<endl;

                for(int i=pro; i<*a; i++)
                {

                    ptr->Act[i] = ptr->Act[i+1];

                }

                for(int i=0; i<*a; i++)
                {
                ptr->Act[i].num_act=i;
                }

        }
        else{
            cout<<"nexiste"<<endl;
        }


        system ("PAUSE");
        system("cls");
        cin.clear();
        cin.sync();
        cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"ANSI_COLOR_RESET "\n");

}

void apagarespetaculo(Espetaculo *ptr, int *contespetaculos, int contaactores, Companhia *ptra, int a){

            int kb=0;
            int idtemp=0;

            cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
            cout<<"Qual quer apagar"<<endl;

            cin>>idtemp;

        if (idtemp <= *contespetaculos)
        {
            for(int ab=0; ab<(ptr+idtemp)->contaactores ; ab++){

               //   cout<<"corri vezes"<<(ptr+idtemp)->contaactores<<endl;   Para DEBUG

                   ptra->Act[  (ptr+idtemp)->empregados[ab].num_act ].stat=true;

            }
                    //   cout<<"Existe"<<endl;Para debug


                for (int i=idtemp; i<*contespetaculos; i++)
                {

                *(ptr+i) = *(ptr+i+1);
                }

                *contespetaculos=*contespetaculos-1;

        }

        else
        {
        cout<<"nexiste"<<endl;
        }


        system ("PAUSE");
        system("cls");
        cin.clear();
        cin.sync();
        cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"ANSI_COLOR_RESET "\n");

}

void editaractor(Companhia *ptr, int a){

   system("cls") ;

    int idtemp;
    int opc2;




            cout<<"Escolha o que deseja editar"<<endl;

            cout<<"1-Nome do actor: "<<endl;

            cout<<"2-Idade do Actor: "<<endl;

            cout<<"3-Salario do Actor: "<<endl;
            cin>>opc2;

   switch(opc2){

   case 1:

    cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
    cout<<"Edite o novo nome para o Actor: "<<endl;
    cin.clear();
    cin.sync();
    cin.getline(ptr->Act[a].nome, sizeof(ptr->Act[a].nome));

    for(int i=0; i<sizeof(ptr->Act[a].nome);i++)
    {
        // f((int)(ptr->Act[a].nome[i]>65 && ptr->Act[a].nome[i]<90))//ASCII 65-90 letras maiusculas 97-122 minusculas
        int b=((int)ptr->Act[a].nome[i]>='a' && ptr->Act[a].nome[i]<='z' || ptr->Act[a].nome[i]>='A' && ptr->Act[a].nome[i]<='Z');

        if(ptr->Act[a].nome[i]>='a' && ptr->Act[a].nome[i]<='z' || ptr->Act[a].nome[i]>='A' && ptr->Act[a].nome[i]<='Z')
        {
            break;
        }
        else
        {
            do{
            cout<<"So pode usar letras"<<endl;
            cin.clear();
            cin.sync();
            cin.getline(ptr->Act[a].nome, sizeof(ptr->Act[a].nome));
            }while(b=0);
        }
    }

break;

case 2:
     do{
            cout<<"Insira a Idade correcta"<<endl;

            while(!(cin>>ptr->Act[a].Idade))
            {
                cout<<"So numeros:"<<endl;
                cin.clear();
                cin.ignore(150, '\n');
            }

        if(ptr->Act[a].Idade>=0 && ptr->Act[a].Idade<=150 )
        {
            break;
        }


        if(ptr->Act[a].Idade<0 || ptr->Act[a].Idade>150)
        {

            while(ptr->Act[a].Idade>150 || ptr->Act[a].Idade<0)
            {
                cout<<"So numeros inteiros de 0 a 150"<<endl;
                while(!(cin>>ptr->Act[a].Idade))
                {
                    cout<<"So numeros:"<<endl;
                    cin.clear();
                    cin.ignore(150, '\n');
                }

            }
            if(ptr->Act[a].Idade>=0 && ptr->Act[a].Idade<=150 )
            {
                break;
            }

        }

     }while(!(cin>>ptr->Act[a].Idade));


   // cin>>ptr->Act[a].salario;

break;

case 3:
    do{
            cout<<"Insira o Salario pretendido: "<<endl;

         while(!(cin>>ptr->Act[a].salario))
        {
        cout<<"So numeros:"<<endl;
        cin.clear();
        cin.ignore(150, '\n');
        }

            if(ptr->Act[a].salario>=0 && ptr->Act[a].salario<=5000000)
            {
                break;
            }

            if(ptr->Act[a].salario<0 || ptr->Act[a].salario>5000000)
            {
                while(ptr->Act[a].salario<0 || ptr->Act[a].salario>5000000)
                {
                    cout<<"So numeros inteiros de 0 a 5000000"<<endl;
                    while(!(cin>>ptr->Act[a].salario))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(150, '\n');
                    }
                }

                if(ptr->Act[a].salario>=0 && ptr->Act[a].salario<=5000000)
                {
                break;
                }
            }
    }while(!(cin>>ptr->Act[a].salario));


break;

     }

cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");
        system ("PAUSE");
        system("cls") ;


}

void editarespetaculo(Espetaculo *ptr2, int contespetaculos, int contaactores, Companhia *ptra, int *a){


        int salario2;  system ("PAUSE");
        system("cls") ;
        int idtemp;
        char nome2[30];
        int opc3;
        char opc5;

        cout<<"1- Editar Nome"<<endl;
        cout<<"2- Editar Encenador"<<endl;
        cout<<"3- Editar Preco bilhetes"<<endl;
        cout<<"4- Editar o Numero de Lugares"<<endl;
        cout<<"5- Nova Seleccao de Actores"<<endl;
        cout<<"6- Editar Orcamento"<<endl;
        cin>>opc3;
        switch(opc3){

        case 1:
        cout<<"Nome do espetaculo: "<<endl;
        cin.clear();
        cin.sync();
        cin.getline(ptr2->nomeesp, sizeof(ptr2->nomeesp));

        for(int i=0; i<sizeof(ptr2->nomeesp);i++)
        {

            int b=((int)ptr2->nomeesp[i]>='a' && ptr2->nomeesp[i]<='z' || ptr2->nomeesp[i]>='A' && ptr2->nomeesp[i]<='Z');

            if(ptr2->nomeesp[i]>='a' && ptr2->nomeesp[i]<='z' || ptr2->nomeesp[i]>='A' && ptr2->nomeesp[i]<='Z')
            {
                break;
            }
            else
            {
                do{
                cout<<"So pode usar letras"<<endl;
                cin.clear();
                cin.sync();
                cin.getline(ptr2->nomeesp, sizeof(ptr2->nomeesp));
                }while(b=0);
            }
        }



            break;


            case 2:

        cout<<"Nome do Encenador: "<<endl;
        cin.clear();
        cin.sync();
        cin.getline(ptr2->nomeEncenador, sizeof(ptr2->nomeEncenador));

        for(int i=0; i<sizeof(ptr2->nomeEncenador);i++)
        {

            int b=((int)ptr2->nomeEncenador[i]>='a' && ptr2->nomeEncenador[i]<='z' || ptr2->nomeEncenador[i]>='A' && ptr2->nomeEncenador[i]<='Z');

            if(ptr2->nomeEncenador[i]>='a' && ptr2->nomeEncenador[i]<='z' || ptr2->nomeEncenador[i]>='A' && ptr2->nomeEncenador[i]<='Z')
            {
                break;
            }
            else
            {
                do{
                cout<<"So pode usar letras"<<endl;
                cin.clear();
                cin.sync();
                cin.getline(ptr2->nomeEncenador, sizeof(ptr2->nomeEncenador));
                }while(b=0);
            }
        }



        break;
        //data

        case 3:
    //PRECO DOS BILHETES
    do{
        cout<<"Preco Bilhetes"<<endl;

        while(!(cin>>ptr2->precobilhete))
        {
            cout<<"So numeros:"<<endl;
            cin.clear();
            cin.ignore(150, '\n');
        }

        if(ptr2->precobilhete>=0 && ptr2->precobilhete<=100000)
        {
            break;
        }
        if(ptr2->precobilhete<0 || ptr2->precobilhete>100000)
        {

            while(ptr2->precobilhete<0 || ptr2->precobilhete>100000)
            {
                cout<<"Numeros de 0 a 100000"<<endl;
                while(!(cin>>ptr2->precobilhete))
                {
                    cout<<"So numeros:"<<endl;
                    cin.clear();
                    cin.ignore(150, '\n');
                }
            }
            if(ptr2->precobilhete>=0 && ptr2->precobilhete<=100000)
            {
                break;
            }
        }

    }while(!(cin>>ptr2->precobilhete));



break;
//NUMERO DE LUGARES
case 4:

    do{
        cout<<"Numero de lugares"<<endl;

        while(!(cin>>ptr2->nlugares)){
        cout<<"So numeros:"<<endl;
        cin.clear();
        cin.ignore(150, '\n');
        }

        if(ptr2->nlugares>=0 && ptr2->nlugares<=200000)
        {
            break;
        }
        if(ptr2->nlugares<0 || ptr2->nlugares>200000)
        {
            while(ptr2->nlugares<0 || ptr2->nlugares>200000)
            {
                cout<<"Numeros de 0 a 200000"<<endl;
                while(!(cin>>ptr2->nlugares))
                {
                    cout<<"So numeros:"<<endl;
                    cin.clear();
                    cin.ignore(150, '\n');
                }
            }
            if(ptr2->nlugares>=0 && ptr2->nlugares<=200000)
            {
                break;
            }

        }

    }while(!(cin>>ptr2->nlugares));

break;

case 5:

                cout<<"Nova selecao de actores"<<endl;
                cout<<"Quantos actores"<<endl;
                cin>>ptr2->contaactores;


                    listaractor(ptra, *a);

                        for(int v=0; v<ptr2->contaactores; v++)
                        {
                            do
                            {
                                cout<<"Escolha o numero do actor desejado: "<<endl;
                                while(!(cin>>idtemp))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(150, '\n');
                                }
                                    break;

                                    if(idtemp==0 && idtemp<=*a)
                                    {
                                        break;
                                    }
                                    if(idtemp<0 && idtemp>*a)
                                    {
                                        cout<<"Erro"<<endl;
                                        cin>>idtemp;;
                                    }

                            }while(!(cin>>idtemp));


                            int pro=procurar(ptra, a, &idtemp);

                                if (pro>=0)
                               // if(idtemp<=*a)  //outro metodo tb inteligente
                                {
                                    cout<<"Existe"<<endl;

                                    ptr2->empregados[v] =(ptra)->Act[pro];
                                    cout<<"ptr nome"<<(ptra)->Act[idtemp].nome<<endl;


                                }

                                else
                                {
                                    cout<<"Nao existe"<<endl,
                                    v--;
                                }




                        }
                        break;

                    case 6:

                        do{
    cout<<"Entrar no orcamento: "<<endl
        <<"1--Despesas com luz"<<endl
        <<"2--Despesas com publicidade"<<endl
        <<"3--Despesas com comida"<<endl
        <<"4--Despesas com agua"<<endl
        <<"5--Despesas com cenario"<<endl
        <<"6--Despesas com roupa"<<endl
        <<"7--Despesas com maquiagem"<<endl
        <<"0--Sair"<<endl;
     cin>>opc5;

        switch(opc5){

      case '1':
                    ptr2->orca[contespetaculos].luz=0;
                    do{
                        cout<<"Introduz a despesa de luz esperada para a duracao deste espetaculo"<<endl;
                        while(!(cin>>ptr2->orca[contespetaculos].luz))
                        {
                            cout<<"So numeros:"<<endl;
                            cin.clear();
                            cin.ignore(5000, '\n');
                        }
                            if(ptr2->orca[contespetaculos].luz>=0 && ptr2->orca[contespetaculos].luz<=200000)
                            {
                                break;
                            }
                            if(ptr2->orca[contespetaculos].luz<0 || ptr2->orca[contespetaculos].luz>200000)
                            {
                                while(ptr2->orca[contespetaculos].luz<0 || ptr2->orca[contespetaculos].luz>200000)
                                {
                                    cout<<"Maior que 0 ao menor que 200000"<<endl;
                                    while(!(cin>>ptr2->orca[contespetaculos].luz))
                                    {
                                        cout<<"So numeros:"<<endl;
                                        cin.clear();
                                        cin.ignore(32, '\n');
                                    }
                                }

                                if(ptr2->orca[contespetaculos].luz>=0 && ptr2->orca[contespetaculos].luz<=200000)
                                {
                                    break;
                                }
                            }

                        }while(!(cin>>ptr2->orca[contespetaculos].luz));
                break;

            case '2':
                ptr2->orca[contespetaculos].publicidde=0;
                do{
                    cout<<"Introduz a despesa de publicidade para a promocao do espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].publicidde))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].publicidde>=0 && ptr2->orca[contespetaculos].publicidde<=2000000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].publicidde<0 || ptr2->orca[contespetaculos].publicidde>2000000)
                        {
                            while(ptr2->orca[contespetaculos].publicidde<0 || ptr2->orca[contespetaculos].publicidde>2000000)
                            {
                                cout<<"Maior que 0 ao menor que 2000000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].publicidde))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].publicidde>=0 && ptr2->orca[contespetaculos].publicidde<=2000000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].publicidde));

                break;

            case '3':
                ptr2->orca[contespetaculos].comida=0;
                do{
                    cout<<"Introduz a despesa de comida esperada para a duracao deste espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].comida))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].comida>=0 && ptr2->orca[contespetaculos].comida<=500000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].comida<0 || ptr2->orca[contespetaculos].comida>500000)
                        {
                            while(ptr2->orca[contespetaculos].comida<0 || ptr2->orca[contespetaculos].comida>500000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].comida))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].comida>=0 && ptr2->orca[contespetaculos].comida<=500000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].comida));
                break;

            case '4':
                ptr2->orca[contespetaculos].agua=0;
                 do{
                    cout<<"Introduz a despesa de agua esperada para a duracao deste espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].agua))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].agua>=0 && ptr2->orca[contespetaculos].agua<=500000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].agua<0 || ptr2->orca[contespetaculos].agua>500000)
                        {
                            while(ptr2->orca[contespetaculos].agua<0 || ptr2->orca[contespetaculos].agua>500000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].agua))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].agua>=0 && ptr2->orca[contespetaculos].agua<=500000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].agua));
                break;

            case '5':
                ptr2->orca[contespetaculos].cenario=0;
                do{
                     cout<<"Introduz a deapagarespetaculospesa da criacao dos cenarios para o espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].cenario))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].cenario>=0 && ptr2->orca[contespetaculos].cenario<=1000000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].cenario<0 || ptr2->orca[contespetaculos].cenario>1000000)
                        {
                            while(ptr2->orca[contespetaculos].cenario<0 || ptr2->orca[contespetaculos].cenario>1000000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].cenario))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].cenario>=0 && ptr2->orca[contespetaculos].cenario<=1000000)
                            {
                                break;
                            }
                        }

                    }while(!(cin>>ptr2->orca[contespetaculos].cenario));
                break;

            case '6':
                ptr2->orca[contespetaculos].roupa=0;
                 do{
                     cout<<"Introduz a despesa de guarda roupa para este espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].roupa))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].roupa>=0 && ptr2->orca[contespetaculos].roupa<=2000000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].roupa<0 || ptr2->orca[contespetaculos].roupa>2000000)
                        {
                            while(ptr2->orca[contespetaculos].roupa<0 || ptr2->orca[contespetaculos].roupa>2000000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].roupa))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].roupa>=0 && ptr2->orca[contespetaculos].roupa<=2000000)
                            {
                                break;
                            }
                        }
                    }while(!(cin>>ptr2->orca[contespetaculos].roupa));
                break;

            case '7':
                ptr2->orca[contespetaculos].maquiagem=0;
                do{
                    cout<<"Introduz a despesa de maquiagem para a duracao deste espetaculo"<<endl;
                    while(!(cin>>ptr2->orca[contespetaculos].maquiagem))
                    {
                        cout<<"So numeros:"<<endl;
                        cin.clear();
                        cin.ignore(3000000, '\n');
                    }

                        if(ptr2->orca[contespetaculos].maquiagem>=0 && ptr2->orca[contespetaculos].maquiagem<=100000)
                        {
                            break;
                        }
                        if(ptr2->orca[contespetaculos].maquiagem<0 || ptr2->orca[contespetaculos].maquiagem>100000)
                        {
                            while(ptr2->orca[contespetaculos].maquiagem<0 || ptr2->orca[contespetaculos].maquiagem>100000)
                            {
                                cout<<"Maior que 0 ao menor que 500000"<<endl;
                                while(!(cin>>ptr2->orca[contespetaculos].maquiagem))
                                {
                                    cout<<"So numeros:"<<endl;
                                    cin.clear();
                                    cin.ignore(30000000, '\n');
                                }
                            }
                            if(ptr2->orca[contespetaculos].maquiagem>=0 && ptr2->orca[contespetaculos].maquiagem<=100000)
                            {
                                break;
                            }
                        }
                    }while(!(cin>>ptr2->orca[contespetaculos].maquiagem));
                break;


            case '0':
               ptr2->orca[contespetaculos].total=((ptr2->orca[contespetaculos].publicidde)+(ptr2->orca[contespetaculos].luz)+(ptr2->orca[contespetaculos].comida)+(ptr2->orca[contespetaculos].agua)+(ptr2->orca[contespetaculos].cenario)+(ptr2->orca[contespetaculos].roupa)+(ptr2->orca[contespetaculos].maquiagem));
               break;

            default:
                cout<<"Introduza valores de 1 a 7"<<endl;
                break;

        }
    }while(opc5!='0');


                    break;



cout<<(ANSI_COLOR_CYAN "-----------------------------------------------------------------------------------"     ANSI_COLOR_RESET "\n");

                        }

          system ("PAUSE");
          system("cls") ;

}

