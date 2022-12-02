#include<iostream>
#include<string>
#include<stdlib.h>


using namespace std;


void login()
{
    bool valid=0;
    string username;
    string password;

    do
    {
    cout<<"Enter Username:";
    cin>>username;
    cout<<endl;
    cout<<"Enter Password:";
    cin>>password;
    cout<<endl;

   if (username=="aliyassine" && password=="samplepass")
   {
       valid=1;
       cout<<"Successful login"<<endl;
   }
   else
   {
    cout<<"Unsuccessful Login.Please try again."<<endl;
    valid=0;
   }
    } while(valid==0);

}


void RequestRide()
{
   int LocationType;
   int SavedLocation;
   cout<<"1-Current Location"<<endl;
   cout<<"2-Saved Location"<<endl;
   cout<<"Where to? ";
   cin>>LocationType;
   if(LocationType==1)
   {
    cout<<"Ambulance is on the way."<<endl;
   }
   else 
   {
    cout<<"1-Home"<<endl<<"2-Parent's Home"<<endl<<"3-Work"<<endl;
    cin>>SavedLocation;
    if(SavedLocation==1)
    {
        cout<<"Ambulance is on it's way to Home"<<endl;
    }
    else if(SavedLocation==2)
    {
         cout<<"Ambulance is on it's way to parent's home"<<endl;
    }
    else 
    {
        cout<<"Ambulance is on it's way to work"<<endl;
    }
    }
   }


void Adddescription()
{
    string description;
    cout<<"Add description if available"<<endl;
    cin>>description;
    cout<<"Description successfully received"<<endl<<"Help is on the way"<<endl;

}

void Rating()
{
    int rating;
    char choice_to_cmnt;
    string comments;

    cout<<"Rate the experience from 1 to 5 stars:";
    cin>>rating;

    if(rating<4)
    {
        cout<<"Please contact 999 to ensure better quality"<<endl;
    }

    cout<<"Do youhave any comments or feedback? Y/N ";
    cin>>choice_to_cmnt;

    if(choice_to_cmnt=='Y'||choice_to_cmnt=='y')
    {
        cin>>comments;
        cout<<"Thank you for your time.Stay Safe!";
    }
    else
    {
         cout<<"Thank you for your time.Stay Safe!";
    }  
    
}


void AcceptRide()
{
    int choice;
    cout<<"Emergencies:"<<endl;
    cout<<"1-AUC Avenue"<<endl<<"2-Concord Plaza"<<endl<<"3-Water Way 2"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    if(choice==1)
    {
            cout<<"Follow the map to AUC Avenue"<<endl;
    }
    else if(choice==2)
    {
        cout<<"Follow the map to Concord Plaza"<<endl;
    }

    else
    {
        cout<<"Follow the map to Water Way 2"<<endl;
    }

}

int main()
{
    int choice;
    cout<<"Choose the appropriate option"<<endl;
    //exit(1);
    cout<<"1-User"<<endl;
    cout<<"2-Paramedics"<<endl;
    cout<<"Type:";
    cin>>choice;

    if(choice==1)
    {
    login();
    RequestRide();
    Adddescription();
    Rating();
    }
    else 
    {
        login();
        char startshift;
        char endshift;
        cout<<"Start Shift? Y/N ";
        cin>>startshift;
         if(startshift=='Y'||startshift=='y')
         {
        do
        {
             AcceptRide();
             cout<<endl;
             cout<<"Emergency Handled Successfully"<<endl;
             cout<<"Do you want to end ypur shift? Y/N: ";
             cin>>endshift;
         } while (endshift=='N'||endshift=='n');

         cout<<"The best way to find yourself is to lose yourself in the service of others."<<endl;
         cout<<"-Gandhi"<<endl;
         cout<<"Thank you for your service.Stay safe!"<<endl;
         }
        


    }
    
    
}
