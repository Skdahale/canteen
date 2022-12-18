#include<iostream>
#include<string.h>
using namespace std;

class canteen{
    public:
    float bill,bill1,total,total1;
    string day;
    int Tea,coffee,aloo_prantha,lassi,egg_roll,sandwiches,pasta,ice_cream,vada_pav;
    void days(string d){
      day=d;
    }
    canteen()
    {
    	bill=0;
    	total=0;
    	total1=0;
    	Tea=0;
		coffee=0;
		aloo_prantha=0;
		lassi=0;
		egg_roll=0;
		sandwiches=0;
		pasta=0;
		ice_cream=0;
		vada_pav=0;
	}
    void menu();
    void Discout();
    void Bill_with_gst();
    void data();
    void display();
};
void canteen::display()
{
	cout<<"your bill is\n";
	cout<<"Order Summary \n BIll : "<<bill1<<endl;
	cout<<"\nGST : BIll : "<<bill<<endl;
	
}
void canteen:: menu()
{
	    int ch,y;
        cout<<"---------------Canteen Menu---------------"<<endl;
        do
        {
        cout<<"Today's Menu Options Available "<<endl;
        cout<<"1.Tea.....20\n2.coffee.......20\n3.aloo_prantha.......55\n4.lassi......60\n5.egg_roll......40 \n6.sandwiches......60\n7.pasta.......45\n8.ice_cream.....30\n9.vada_pav.......20\n"<<endl;
        cout<<"enter your order \n ";
        cin>>ch;
        switch(ch)
        {
        	case 1:cout<<"Qty of Tea :"<<endl;
                   cin>>Tea;
            break;
            case 2:cout<<"Qty of Coffee :"<<endl;
                   cin>>coffee;  
            break;
            case 3:cout<<"Qty of Aloo Prantha : "<<endl;
                    cin>>aloo_prantha;
            break;
            case 4:cout<<"Qty of lassi :"<<endl;
                   cin>>lassi;
            break;
            case 5:cout<<"Qty of egg roll : "<<endl;
                    cin>>egg_roll;
            break;
            case 6:cout<<"Qty of sand switches  : "<<endl;
                    cin>>sandwiches;
            break;
            case 7:cout<<"Qty of pasta  : "<<endl;
                    cin>>pasta;
            break;
            case 8:cout<<"Qty of ice cream : "<<endl;
                    cin>>ice_cream;
            break;
            case 9:cout<<"Qty of vada pav : "<<endl;
                    cin>>vada_pav;
            break;
		}
		cout<<"want to add another order\npress 1 otherwise 0";
		cin>>y;
	}while(y==1);
} 
void canteen::Discout(){
    cout<<"This is Discout\n "<<endl;
    bill=(Tea*20)+(coffee*20)+(aloo_prantha*55)+(lassi*60)+(egg_roll*40)+(sandwiches*60)+(pasta*45)+(ice_cream*30)+(vada_pav*20);
    cout<<"bill without discount is \n"<<bill;
    if(bill<500)
	{
        cout<<"\nSorry you will not get discount\n"<<endl;
    }
    else if(500<bill<1000)
	{
        cout<<"\nYou will get 10 precent discount\n "<<endl;
        bill=(90.0/100)*bill;
        bill1=(90.0/100)*bill;
    }
    else
	{
        cout<<"\nYou will get 15 present discount\n"<<endl;
        bill=(85.0/100)*bill;
        bill1=(85.0/100)*bill;
    }
    
}
void canteen ::Bill_with_gst(){
    cout<<"Add SGST in Total bill\n"<<endl;
    total=(9.0/100)*bill;
    cout<<"Add CGST in Total bill\n "<<endl;
    total1=(9.0/100)*bill;
     cout<<"all taxes is included\n";
    bill=total+total1+bill;
   
}
void canteen ::data(){
   this->day=day;
   cin>>day;
   if(day=="sunday"||day=="saturday")
{
cout<<"On weekends, we are closed."<<endl;
exit(0);
}
else
{
cout<<"We are Open"<<endl;
   
}
}
int main(){
    int ch;
    int z;
    cout<<"------------MITAOE CANTEEN-------------\n";
    cout<<"Check Canteen is open or not "<<endl;
    cout<<"Enter the day"<<endl;
    canteen s1;
    s1.data();
    do
    {
        cout<<"\n1]Menu\n2]Discount\n3]Bill_with_gst\n4]display bill\n";
        cin>>ch;
        switch (ch)
        {
        case 1:cout<<"Menu of MITAOE Canteen "<<endl;
               s1.menu();
        break;
        case 2:cout<<"Now it's time to give discount "<<endl;
               s1.Discout();
        break;
        case 3:cout<<"Total Bill with GST "<<endl;
               s1.Bill_with_gst();
        break;
        case 4:
               s1.display();
        break;
        default:cout<<"enter right choice\n";
        break;
        }
        
        cout<<"see main menu \n enter 1\n";
        cin>>z;
    } while (z==1);
    return 0;
}
