#include <iostream>
#include <conio.h>

using namespace std;
int interface();
string mobile_company(string mobileCompanyName);
string laptop_company(string laptopCompanyName);
string desktop_company(string desktopCompanyName);

main()
{
    while(true){
    system("cls");
    
    string mobileCompanyName = "", laptopCompanyName = "", desktopCompanyName = "";

    int Option=interface();
    if(Option==1){
    string Name = mobile_company(mobileCompanyName);
    }
    if(Option==2){
    string Name = laptop_company(laptopCompanyName);
    }
    if(Option==3){
        return 0;
    }
    cout<<"Press any key to continue..";
    getch();
    }

}


int interface()
{
    int option;
    cout << "###############################################################" << endl;
    cout << "#           WELCOME TO THE GENERAL ELECTRONICS STORE          #" << endl;
    cout << "###############################################################" << endl;
    cout << "Enter the name of product you want to buy(Mobile,Laptop,Desktop)" << endl;
    cout << "Enter option 1 to buy Mobile:" << endl;
    cout << "Enter option 2 to buy Laptop:" << endl;
    cout << "Enter option 3 to Exit:" << endl;
    cout << "Your option...";
    cin >> option;
    cout << "Press any key to continue:";
    getch();
    system("cls");
    return option;
}
string mobile_company(string moblieCompanyName)
{
    string companyName;
    float vivoPrice,oppoPrice,samsungPrice;
    int priceAfterDiscount;
    vivoPrice=69999;
    oppoPrice=90000;
    samsungPrice=64999;
        cout << "Name   "<<"\t" <<"Model    "<<"\t"<<"price"<<"\t"<<"discount"<<endl;
        cout << "Vivo   "<<"\t" <<"Y36      "<<"\t"<<"69999"<<"\t"<<"4%"<<endl;
        cout << "Samsung"<<"\t "<<"GalaxyA14"<<"\t"<<"64999"<<"\t"<<"8%"<<endl;
        cout << "Oppo   "<<"\t" <<"A77s     "<<"\t"<<"90000"<<"\t"<<"11%"<<endl;
        cout<<"Enter the name of mobile company: ";
        cin >>companyName;
        if(companyName=="Vivo"){
            priceAfterDiscount= vivoPrice-(vivoPrice*0.04);
            cout<<"Your mobile name   ... Vivo"<<endl;
            cout<<"Your mobile model  ... Y36"<<endl;
            cout<<"Actual Price        ... 69999"<<endl;
            cout<<"Price after discount will be ...."<<priceAfterDiscount;
        }
          if(companyName=="Samsung"){

             priceAfterDiscount=samsungPrice-(samsungPrice*0.08);
            cout<<"Your mobile name   ... Samsung"<<endl;
            cout<<"Your mobile model  ... GalaxyA14"<<endl;
            cout<<"Actual Price        ... 64999"<<endl;
            cout<<"Price after discount will be ...."<<priceAfterDiscount;
          }
            if(companyName=="Oppo"){
            priceAfterDiscount=oppoPrice-(oppoPrice*0.11);
            cout<<"Your mobile name   ... Oppo"<<endl;
            cout<<"Your mobile model  ... A77s"<<endl;
            cout<<"Actual Price        ... 90000"<<endl;
            cout<<"Price after discount will be ...."<<priceAfterDiscount;
                
        }
}
    string laptop_company(string laptopCompanyName)
    {
        string companyName;
        int priceAfterDiscount,hpPrice,dellPrice,lenovoPrice;
        hpPrice=59999;
        dellPrice=75000;
        lenovoPrice=32999;
        cout << "Name  "<<"\t" <<"Model             "<<"\t"<<"price"<<"\t"<<"discount"<<endl;
        cout << "Hp    "<<"\t" <<"Elitebook 820 G23 "<<"\t"<<"59999"<<"\t"<<"23%"<<endl;
        cout << "Dell  "<<"\t" <<"Latitude E5470    "<<"\t"<<"75000"<<"\t"<<"28%"<<endl;
        cout << "Lenovo"<<"\t" <<"Thinkpad X240     "<<"\t"<<"32999"<<"\t"<<"18%"<<endl;
        cout<<"Enter the name of desktop company: " ;
        cin >>companyName;
        if(companyName=="Hp"){
            priceAfterDiscount=hpPrice-(hpPrice*0.23);
            cout<<"Your desktop name   ... Hp"<<endl;
            cout<<"Your desktop model  ... Elitebook 820 G23"<<endl;
            cout<<"Actual Price        ... 59999"<<endl;
            cout<<"Price after discount will be ...."<<priceAfterDiscount;
        }
          if(companyName=="Dell"){

             priceAfterDiscount=dellPrice-(dellPrice*0.28);
            cout<<"Your desktop name   ... Dell"<<endl;
            cout<<"Your desktop model  ... Latitude E5470"<<endl;
            cout<<"Actual Price        ... 75000"<<endl;
            cout<<"Price after discount will be ...."<<priceAfterDiscount;
          }
            if(companyName=="Lenovo"){
            priceAfterDiscount=lenovoPrice-(lenovoPrice*0.28);
            cout<<"Your desktop name   ... Lenovo"<<endl;
            cout<<"Your desktop model  ... Thinkpad X240"<<endl;
            cout<<"Actual Price        ... 32999"<<endl;
            cout<<"Price after discount will be ...."<<priceAfterDiscount;
                
        }
    }