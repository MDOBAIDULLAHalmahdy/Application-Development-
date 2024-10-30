#include <bits/stdc++.h>
#define ll long long int
using namespace std;


string city(int l)
{
    string s;
    if(l==0) s="Rangpur";      
    else if(l==1) s="Rajshahi";
    else if(l==2) s="khulna";
    else if(l==3) s="Barishal";
    else if(l==4) s="mymensingh";
    else if(l==5) s="Sylhet";
    else if(l==6) s="Dhaka";
    else if(l==7) s="chattogram";

    return s;
}

string bus(int l)
{
    string s;
    if(l==1) s="AC Sleeper Coach";
    else if(l==2) s="Non AC Sleeper Coach";
    else if(l==3) s="AC Chair Coach";
    else if(l==4) s="Non AC Chair Coach";
    else if(l==5) s="Local chair Coach";
    return s;
} 

class passenger{
    
    public:
        string name;
        int age;
        string mobileNo;
    
        passenger(string name,int age,string mobileNo)
        {
            this->name = name;
            this->age = age;
            this->mobileNo = mobileNo;                    
        } 

        void print()
        {
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
            cout<<"PhoneNo :"<<mobileNo<<endl;
        }

};

int main()
{
    ll n, e;
    n=8;        
    ll distance[n][n]={
        {0,227,INT_MAX,INT_MAX,290,INT_MAX,294,INT_MAX},
        {227,0,255,INT_MAX,242,INT_MAX,245,INT_MAX},
        {INT_MAX,255,0,118,INT_MAX,INT_MAX,220,INT_MAX},
        {INT_MAX,INT_MAX,218,0,INT_MAX,INT_MAX,181,241},
        {290,242,INT_MAX,INT_MAX,0,279,111,INT_MAX},
        {INT_MAX,INT_MAX,INT_MAX,INT_MAX,279,0,236,INT_MAX},
        {294,245,220,181,111,236,0,253},
        {INT_MAX,INT_MAX,INT_MAX,241,INT_MAX,INT_MAX,253,0}
    };

    //Generating minimum distance with floyed warshal Algorithom
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (distance[i][k] + distance[k][j] < distance[i][j])
                {
                    distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
    }

    vector<passenger>v;

    passenger p("Tamim",23,"01310305114");
    passenger p1("Hasan",34,"01743928700");
    passenger p2("Mahid",9,"01743928700");
    passenger p3("Tamim",25,"01749105911");
    passenger p4("Mahdy",24,"01705915568");
    passenger p5("Shamim",25,"01749105913");
    passenger p6("Safin",23,"01749105914");
    passenger p7("Munna",22,"01749105915");
    passenger p8("Moniruzzaman",23,"01749105916");
    passenger p9("Asik",23,"01749105917");
    passenger p10("Tomal",22,"01749105918");
    passenger p11("Hridoy",22,"01749105919");
    passenger p12("Hamim",5,"01749105919");
    passenger p13("Nahid",24,"01749105920");


    v.push_back(p);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    v.push_back(p6);
    v.push_back(p7);
    v.push_back(p8);
    v.push_back(p9);
    v.push_back(p10);
    v.push_back(p11);
    v.push_back(p12);
    v.push_back(p13);


    cout<<endl;
    cout<<endl;
    cout<<"----\" WELCOME TO EASY TRAVEL SERVICES \"----\n ";

    XX:
    XCY:
    cout<<"\nDo you have \"Easy Travel\" account ?"<<endl;

    int op1;
    cout<<"Yes(1) : No(0)"<<endl;
    cin>>op1;
    system("cls");

     
    if(op1==1)
    {

        cout<<"Enter your name : ";
        string cn,cmn;
        int cage;
        cin>>cn;
        cout<<"Enter your Mobile No : ";
        cin>>cmn;
        system("cls");
        bool found=false;
        for(auto i:v)
        {
            if(i.name==cn)
            {
                if(i.mobileNo==cmn)
                {
                    found=true;
                    cage=i.age;
                    break;
                }
            }         
        } 
        if(found)
        {                                                                        // registration ase...   

            cout<<"Congratulations Sir..!"<<endl<<"You are our registered customar"<<endl;                                                                                 
            
            XBY:
            cout<<"Do you want to travel?"<<endl;             
            cout<<"YES(1) : NO(0)"<<endl;
            int op6;
            cin>>op6;
            system("cls");
            if(op6==1)                                               
            {                                                                    //travel er part....


                cout<<"Enter your travel Catagory : "<<endl;
                cout<<"Option 1 : Solo travel "<<endl;
                cout<<"Option 2 : Group travel "<<endl;

                int tvl;
                cin>>tvl;                
                system("cls");

                if(tvl==1)
                {
                    int l1,l2;
                    resume1: 

                    cout<<"Enter your location (City Code): " <<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter :";
                    cin>>l1;
                    system("cls");
                    if(l1 < 0 || l1 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        YXX:
                        cout<<"Do you want to continue...?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int op8;
                        cin>>op8;
                        system("cls");
                        if(op8==0)
                        {
                            cout<<"Thanks  for consulting with us."; //// terminate....
                            return 0;
                        }
                        else if(op8==1)
                        {
                            goto resume1;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!"<<endl;
                            cout<<"Please select correct option"<<endl;
                            goto YXX;
                        }
                    }

                    cout<<"Enter your Destination (City Code) : "<<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter:";
                    cin>>l2;
                    system("cls");
                    if(l2 < 0 || l2 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        YXY:
                        cout<<"Do you want to continue ?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int tk;
                        cin>>tk;
                        system("cls");
                        if(tk==0)
                        {
                            cout<<"Thanks for consulting with us.";           ///// terminate..
                            return 0;
                        }
                        else if(tk==1)
                        {
                            goto resume1;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!\nPlease select correct option"<<endl;
                            system("cls");
                            goto YXY;
                        }
                    }

                    string s1,s2;
                    s1=city(l1);
                    s2=city(l2);  

                    int dis= distance[l1][l2]; 
                    cout<<"Distance is :"<<dis<<endl;  ///distance

                    system("cls");
                        

                    cout<<"Select your Bus:"<<endl;
                    cout<<"Option 1 :AC Sleeper Coach            \n";
                    cout<<"Option 2 :Non AC Sleeper Coach        \n";
                    cout<<"Option 3 :AC Chair Coach              \n";
                    cout<<"Option 4 :Non AC Chair Coach          \n";
                    cout<<"Option 5 :Local chair Coach           \n";
                    cout<<"Enter Your option :";

                    int optionn;
                    cin>>optionn;

                    system("cls");            

                    int rentt;

                    if(optionn==1) rentt= 6.25 * dis;
                    else if(optionn==2) rentt= 5 * dis;
                    else if(optionn==3) rentt= 3.75 * dis;
                    else if(optionn==4) rentt= 2.25 * dis;
                    else if(optionn==5) rentt= 1.75 * dis;


                    //cout<<"Distance is :"<<dis<<endl;                   ///distance 
                    //cout<<"Rent is :"<<rentt<<endl;

                    float DRent=rentt * 0.90;                             // discounted rent =DRent.
                    int DRentt=(int)DRent;
                    if(cage<=10)
                    {
                        DRent=rentt* 0.50;
                        int DRentt=(int)DRent;

                        cout<<"Hi "<<cn<<" Sir Wish you a happy journey."<<endl;
                        cout<<"Distance between "<<s1<<" & "<<s2<<" is : "<<dis<<" KM."<<endl;
                        cout<<bus(optionn)<<" ticket price is : "<<rentt<<" TK."<<endl;
                        cout<<"As You are our honorable Child member you got 50 \% Discoount price for you :"<<DRentt<<" TK only"<<endl;
                        cout<<"Happy Journey.."<<endl;

                    }
                    else
                    {

                        cout<<"Hi "<<cn<<" Wish you a happy journey."<<endl;
                        cout<<"Distance between "<<s1<<" & "<<s2<<" is "<<dis<<" KM"<<endl;
                        cout<<bus(optionn)<<"ticket price is : "<<rentt<<" TK."<<endl;
                        cout<<"As You are our honorable member you got 10 \% Discoount price for you : "<<DRentt<<" TK only"<<endl;
                        cout<<"Happy Journey.."<<endl;
                    }
                }
                else if(tvl==2)
                {
                    int psenger1,psenger2;
                    cout<<"Enter number of adult passenger :";
                    cin>>psenger1;
                    cout<<"Enter number of child passenger :";
                    cin>>psenger2;

                    system("cls");

                    int l1,l2;
                    resume2: 
                    cout<<"Enter your location (City Code): "<<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter :";
                    cin>>l1;
                    system("cls");
                    if(l1 < 0 || l1 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        YYY:
                        cout<<"Do you want to continue...?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int op8;
                        cin>>op8;
                        system("cls");
                        if(op8==0)
                        {
                            cout<<"Thanks  for consulting with us."; //// terminate....
                            return 0;
                        }
                        else if(op8==1)
                        {
                            goto resume1;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!"<<endl;
                            cout<<"Please select correct option"<<endl;
                            goto YYY;
                        }
                    }

                    cout<<"Enter your Destination (City Code) : "<<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter:";
                    cin>>l2;
                    system("cls");
                    if(l2 < 0 || l2 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        ZZZ:
                        cout<<"Do you want to continue ?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int tk;
                        cin>>tk;
                        system("cls");
                        if(tk==0)
                        {
                            cout<<"Thanks for consulting with us.";           ///// terminate..
                            return 0;
                        }
                        else if(tk==1)
                        {
                            goto resume2;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!\nPlease select correct option"<<endl;
                            system("cls");
                            goto ZZZ;
                        }
                    }

                    string s1,s2;
                    s1=city(l1);
                    s2=city(l2);  

                    int dis= distance[l1][l2]; 
                    cout<<"Distance is :"<<dis<<endl;  ///distance

                    system("cls");
                        

                    cout<<"Select your Bus:"<<endl;
                    cout<<"Option 1 :AC Sleeper Coach            \n";
                    cout<<"Option 2 :Non AC Sleeper Coach        \n";
                    cout<<"Option 3 :AC Chair Coach              \n";
                    cout<<"Option 4 :Non AC Chair Coach          \n";
                    cout<<"Option 5 :Local chair Coach           \n";
                    cout<<"Enter Your option :";

                    int optionn;
                    cin>>optionn;

                    system("cls");            

                    int rentt;

                    if(optionn==1) rentt= 6.25 * dis;
                    else if(optionn==2) rentt= 5 * dis;
                    else if(optionn==3) rentt= 3.75 * dis;
                    else if(optionn==4) rentt= 2.25 * dis;
                    else if(optionn==5) rentt= 1.75 * dis;


                    //cout<<"Distance is :"<<dis<<endl;                   ///distance 
                    //cout<<"Rent is :"<<rentt<<endl;

                    float DRent = rentt * 0.90 * psenger1 ;                             // discounted rent =DRent.
                    int DR = (int)DRent;

                    float DRent1=rentt * 0.50 *psenger2;
                    int DR1=(int)DRent1;

                    int TotalRent=DR + DR1 ;
                     
                    
                    cout<<"Hi "<<cn<<" Wish you a happy journey with your team."<<endl;
                    cout<<"Distance between "<<s1<<" & "<<s2<<" is "<<dis<<" KM"<<endl;
                    cout<<"Your Teah have "<<psenger1<<" Adult member & "<<psenger2<<" child member."<<endl;
                    cout<<bus(optionn)<<"ticket price is : "<<rentt * (psenger1+psenger2) <<" TK."<<endl;
                    cout<<"As You are our honorable member you got 10 \% Discoount for Adult passenger  & 50 \% Discount for Child passenger"<<endl;
                    cout<<"Price for you : "<<TotalRent <<" TK only"<<endl;
                    cout<<"Happy Journey.."<<endl;         


                    //group ka mamla ses.

                }    
            }
            else if(op6==0)
            {
                cout<<"thanks for connecting us sir..!"<<endl;
                return 0;
            }
            else
            {
                cout<<"You have entered wrong option..! \nDo you want to continue..? "<<endl;
                int op7;
                cout<<"YES(1) : NO(0) : ";
                cin>>op7;
                if(op7){
                    goto XBY;
                }
                else{ 
                    cout<<"Thanks for communicating US...#"<<endl;
                    return 0;
                }
            }


        }
        else
        {
            // registration nei...
            cout<<"sorry sir. Yoiu don't have registration on easy travel"<<endl;
            goto XAY;
        }
    }
    else if(op1==0)
    {
        XAY:                                                                                                      // nai
        cout<<"Do you want to register your account ?"<<endl;
        int op2;
        cout<<"Yes(1) : No(0)"<<endl;
        cin>>op2;
        system("cls");

        if(op2==1)
        {                                      // Registration process
            string s1,s2;                        
            int ii;

            cout<<"ENter your Name:";             
            cin.ignore();
            getline(cin,s1);

            cout<<"ENter your Age:";
            cin>>ii;

            cout<<"ENter your MobineNo:";
            cin>>s2;

            passenger p(s1,ii,s2);
            v.push_back(p);

            cout<<"Congratulations sir.You have complited registration.";
            system("cls");

            goto XCY;

        }
        else if(op2==0){
            XXY:
            cout<<"Do you want to travel as an unregistered traveler..?"<<endl;
            int op4;
            cout<<"YES(1) : NO(0)"<<endl;
            cin>>op4;
            system("cls");

            if(op4==1){                                                             //travel.....
                cout<<"Enter your travel Catagory : "<<endl;
                cout<<"Option 1 : Solo travel "<<endl;
                cout<<"Option 2 : Group travel "<<endl;

                int tvl;
                cin>>tvl;
                system("cls");                
                 
                if(tvl==1)
                {
                    int l1,l2;
                    resume4:
                    cout<<"Enter your location (City Code): "<<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter :";
                    cin>>l1;
                    system("cls");
                    if(l1 < 0 || l1 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        hi:
                        cout<<"Do you want to continue ?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int tk;
                        cin>>tk;
                        system("cls");
                        if(tk==0)
                        {
                            cout<<"Thanks for consulting with us.";
                            return 0;
                        }
                        else if(tk==1)
                        {
                            goto resume4;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!\nPlease select correct option"<<endl;
                            goto hi;
                        }
                    }    
                    cout<<"Enter your Destination(City Code)"<<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter:";
                    cin>>l2;
                    system("cls");
                    if(l2 < 0 || l2 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        hi1:
                        cout<<"Do you want to continue ?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int tk;
                        cin>>tk;
                        system("cls");
                        if(tk==0)
                        {
                            cout<<"Thanks for consulting us.."<<endl;
                            return 0;
                        }
                        else if(tk==1)
                        {
                            goto resume4;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!\nPlease select correct option"<<endl;
                            goto hi1;
                        }
                    } 
                    string s1,s2;
                    s1=city(l1);
                    s2=city(l2); 
                    int dis= distance[l1][l2];

                    cout<<"Distance between "<<s1<<" & "<<s2<<" is "<<dis<<endl;


                    cout<<"Select your Bus:"<<endl;
                    cout<<"Option 1 :AC Sleeper Coach\n";
                    cout<<"Option 2 :Non AC Sleeper Coach\n";
                    cout<<"Option 3 :AC Chair Coach\n";
                    cout<<"Option 4 :Non AC Chair Coach\n";
                    cout<<"Option 5 :Local chair Coach\n";
                    cout<<"Enter Your option :";
                    int optionn;
                    cin>>optionn;               
                
                    int rentt;

                    if(optionn==1) rentt= 6.25 * dis;
                    else if(optionn==2) rentt= 5 * dis;
                    else if(optionn==3) rentt= 3.75 * dis;
                    else if(optionn==4) rentt= 2.25 * dis;
                    else if(optionn==5) rentt= 1.75 * dis;

                    system("cls");
                                  
                    cout<<"Thank You Sir,Wish you a happy journey."<<endl;
                    cout<<"Distance between "<<s1<<" & "<<s2<<" is : "<<dis<<" KM."<<endl;
                    cout<<bus(optionn)<<" ticket price is : "<< rentt <<" TK only"<<endl;
                    cout<<"Presented by easy Travel."<<endl;
                }

                if(tvl==2)
                {
                    int psenger1,psenger2;
                    cout<<"Enter the number of Adult passenger : ";
                    cin>>psenger1;
                    cout<<"Enter the number of child passenger : ";
                    cin>>psenger2;
                    system("cls");


                    int l1,l2;
                    resume5:
                    cout<<"Enter your location (City Code): "<<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter :";
                    cin>>l1;
                    system("cls");
                    if(l1 < 0 || l1 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        hi11:
                        cout<<"Do you want to continue ?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int tk;
                        cin>>tk;
                        system("cls");
                        if(tk==0)
                        {
                            cout<<"Thanks for consulting with us.";
                            return 0;
                        }
                        else if(tk==1)
                        {
                            goto resume5;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!\nPlease select correct option"<<endl;
                            goto hi11;
                        }
                    }    
                    cout<<"Enter your Destination(City Code)"<<endl;
                    cout<<"0 :Rangpur\n1 :Rajshahi \n2 :khulna \n3 :Barishal \n4 :mymensingh \n5 :Sylhet \n6 :Dhaka \n7 :chottagram "<<endl;
                    cout<<"Enter:";
                    cin>>l2;
                    system("cls");
                    if(l2 < 0 || l2 > 7)
                    {
                        cout<<"You enter wrong option"<<endl;
                        hi12:
                        cout<<"Do you want to continue ?"<<endl;
                        cout<<"YES(1) NO(0)"<<endl;
                        int tk;
                        cin>>tk;
                        system("cls");
                        if(tk==0)
                        {
                            cout<<"Thanks for consulting us.."<<endl;
                            return 0;
                        }
                        else if(tk==1)
                        {
                            goto resume5;
                        }
                        else    
                        {
                            cout<<"Wrong option selected..!\nPlease select correct option"<<endl;
                            goto hi12;
                        }
                    } 
                    string s1,s2;
                    s1=city(l1);
                    s2=city(l2); 
                    int dis= distance[l1][l2];

                    cout<<"Distance between "<<s1<<" & "<<s2<<" is "<<dis<<endl;


                    cout<<"Select your Bus:"<<endl;
                    cout<<"Option 1 :AC Sleeper Coach\n";
                    cout<<"Option 2 :Non AC Sleeper Coach\n";
                    cout<<"Option 3 :AC Chair Coach\n";
                    cout<<"Option 4 :Non AC Chair Coach\n";
                    cout<<"Option 5 :Local chair Coach\n";
                    cout<<"Enter Your option :";
                    int optionn;
                    cin>>optionn;               
                
                    int rentt;

                    if(optionn==1) rentt= 6.25 * dis;
                    else if(optionn==2) rentt= 5 * dis;
                    else if(optionn==3) rentt= 3.75 * dis;
                    else if(optionn==4) rentt= 2.25 * dis;
                    else if(optionn==5) rentt= 1.75 * dis;

                    system("cls");

                    int rrr1 = rentt * psenger1 ;
                    int rrr2 = rentt * psenger2 * 0.60 ;
                    int rrr = rrr1 + rrr2 ;
                                  
                    cout<<"Thank You Sir,Wish you a happy journey."<<endl;
                    cout<<"Your team have "<< psenger1<<" Adult member & "<< psenger2<<" Child member."<<endl;
                    cout<<"Distance between "<<s1<<" & "<<s2<<" is : "<<dis<<" KM."<<endl;
                    cout<<bus(optionn)<<" ticket price is : "<< rentt *(psenger1 + psenger2 ) <<" TK but you got 40 \% discount for child passenger"<<endl;
                    cout<<"Your total price is : "<<rrr<<" taka";
                    cout<<"Presented by easy Travel."<<endl;

                }
                else
                {
                    cout<<"You have entered wrong option..!"<<endl;
                    pp:
                    cout<<"do you want to continue..?"<<endl;
                    int op11;
                    cout<<"YES(1) : NO(0) "<<endl;
                    cin>>op11;
                    system("cls");
                    if(op11==1)
                    {
                        goto resume4;
                    }
                    else if(op11==0)
                    {
                        cout<<"Thanks for consulting us.";
                        return 0;
                    }
                    else
                    {
                        cout<<"wrong option selected..!"<<endl;
                        cout<<"select correct one.."<<endl;
                        system("cls");
                        goto pp;
                    }
                }
            }
            else if(op4==0)
            {
                cout<<"Thanks for connetcing with us."<<endl;
            }
            else{
                XXX:
                cout<<"You have entered wrong option"<<endl;
                cout<<"Do you want to continue...?"<<endl;
                int op5;
                cout<<"YES(1) : NO(0) "<<endl;
                cin>>op5;
                if(op5==1)
                {
                    goto XXY;
                }
                else if(op5==0)
                {
                    cout<<"Thanks for connecting us....!";
                }
                else
                {
                    goto XXX;
                }
            }             
        }
        else
        {
            cout<<"You have entered wrong option..! \nDo you want to continue..? "<<endl;
            int op3;
            cout<<"YES(1) : NO(0) : ";
            cin>>op3;
            if(op3){
                goto XAY;
            }
            else{ 
                cout<<"Thanks for communicating US...#"<<endl;
                return 0;
            }
        }
    }
    else{

        cout<<"You have entered wrong option..! \nDo you want to continue..? "<<endl;
        int op3;
        cout<<"YES(1) : NO(0) : ";
        cin>>op3;
        if(op3){
            goto XX;
        }
        else{ 
            cout<<"Thanks for communicating US...#"<<endl;
            return 0;
        }
    }     
}

//Allah Hafeez.