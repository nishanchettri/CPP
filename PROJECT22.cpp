#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<cstring>
#include<conio.h> 
using namespace std;
class project
{
	string name;
	char username[50],password[20];
	float height,weight,BMI,VO2max,VO2maxr,weightlb;
	int x,y,HR,HRmax,HRrunning,age,walkTime,gender;
	
	
	public :
void ui()
{
system("Color E5");	
		  	
cout<<"                                   ----------------------------------"<<endl;
cout<<"                                  |         LOGIN TO CONTINUE        |"<<endl;				
cout<<"                                   ----------------------------------"<<endl;
system("pause");
system("cls");
cout<<"                                   ----------------------------------"<<endl;
cout<<"                                  |          ENTER  USERNAME         |"<<endl;				
cout<<"                                   ----------------------------------"<<endl;
cin>>username;
cout<<"                                   ----------------------------------"<<endl;
cout<<"                                  |             PASSWORD             |"<<endl;				
cout<<"                                   ----------------------------------"<<endl;
cin>>password;
system("cls");
x = strcmp(username,"nissan");
y = strcmp(password,"12345678");
if(x==0 && y==0)
{
		  	cout<<"\n\n\n\n\n\n";
		  	cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
			cout<<"\t\t\t\t |              Enter # 1 - 6 :                |"<<endl;
			cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\t\t\t\t | 1. Calculate your body fitness (Using BMI)  |"<<endl;
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\t\t\t\t | 2. Calculate VO2max (without running)       |"<<endl;
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\t\t\t\t | 3. Calculate VO2max (using running test)    |"<<endl;
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\t\t\t\t |               4. What is BMI?               |"<<endl;
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\t\t\t\t |             5. What is VO2max?              |"<<endl;
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\t\t\t\t |                   6. EXIT                  |"<<endl;
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
			cout<<"\n\n";       
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\t\t\t\t |             Enter your choice:              |"<<endl ;
            cout<<"\t\t\t\t  ---------------------------------------------"<<endl;
            cout<<"\n";
            
}
else
{
cout<<"\n\n\n\n\n\n";
cout<<"                                   ---------------------------------------"<<endl;
cout<<"                                  |     Username or password incorrect    |"<<endl;				
cout<<"                                   ---------------------------------------"<<endl;
cout<<"\n\n\n\n\n\n";
system("pause");	         
system("cls");
}
	}
	
	
		void restVO2max()
		{
			ofstream outf("bmi.doc",ios::app);
			HRmax=220-age;
			VO2max=15 * (HRmax/HR);
			cout<<"Name:\t"<<endl;
			cin>>name;
			cout<<"Enter your age:\t"<<endl;
			cin>>age;
			cout<<"Enter resting heart rate:\t"<<endl;
			cin>>HR;
			outf<<"_________________________________________________________________________"<<endl<<endl;
			outf<<"Name:\t"<<name<<endl;
			outf<<"Your VO2max is:\t"<<VO2max<<"\n";
			outf.close();
		}
		void runningVO2max()
		
		{   
		    ofstream outf("bmi.doc",ios::app);
		    cout<<"\t\t\t\tWeight(Kg):\t";
		    cin>>weight;
		    cout<<"\t\t\t\tAge:";
		    cin>>age;
		    cout<<"\t\t\t\tWalk time for 1.6km(in minutes): ";
		    cin>>age;
		    cout<<"\t\t\t\tHeart rate after running/walking: ";
            cin>>HRrunning;
		    cout<<"Gender(if male press 1 and for female press 2 :\t ";
            cin>>gender;
            system("pause");
		    system("cls");
            
           outf<<"_________________________________________________________________________"<<endl<<endl;
            switch(gender)
            {   
            	case 1:
            	
                weightlb=weight*2.20462;
		    	VO2maxr = 132.853-(0.0769 * weightlb)-(0.3877 * age)+(6.315 * 1)-(3.2649 * walkTime)-(0.156 * HRrunning);
		    	cout<<"\n\n\n\n\n\n";
		        cout<<"                                   ---------------------------------"<<endl;
		        cout<<"                                  | Your VO2 max after running is:  |"<<VO2maxr<<endl;				
		        cout<<"                                   ---------------------------------"<<endl;
		        cout<<"\n\n\n\n\n\n";
		    	outf<<"Your VO2 max after running is: "<<VO2maxr<<endl;
		    			    	
                break;
			     
			   case 2:
				 
				 weightlb=weight*2.20462;
		    	 VO2maxr = 132.853-(0.0769 * weightlb)-(0.3877 * age)+(6.315 * 0)-(3.2649 * walkTime)-(0.156 * HRrunning);
		    	 outf<<"Your VO2 max after running is: "<<VO2maxr<<endl;
		    	 cout<<"\n\n\n\n\n\n";
		         cout<<"                                   ---------------------------------"<<endl;
		         cout<<"                                  | Your VO2 max after running is:  |"<<VO2maxr<<endl;				
		         cout<<"                                   ---------------------------------"<<endl;
		         cout<<"\n\n\n\n\n\n";
			     
			     break;
			     default:
			     cout<<"\n\n\n\n\n\n";
		         cout<<"                                   ----------------------------------"<<endl;
		         cout<<"                                  |           INVALID INPUT!!        |"<<endl;				
		         cout<<"                                   ----------------------------------"<<endl;
		         cout<<"\n\n\n\n\n\n";
			     }
                 outf.close();
			}
	void showBmi()
		{   ofstream outf("bmi.doc",ios::app);
		      cout<<"Name:\t"<<endl;
		      cin>>name;
		      cout<<"\nENTER WEIGHT IN KG : ";
			  cin>>weight;
			  cout<<"\nENTER HEIGHT IN METERS : ";
			  cin>>height;
			  system("pause");
			  system("cls");
			  BMI = weight/(height*height);
			  cout<<"Name: "<<name<<endl;
			  cout<<"Your BMI is: "<<BMI<<endl;
			  system("pause");
			  system("cls");
			  outf<<"_________________________________________________________________________"<<endl<<endl;
			  outf<<"Name: "<<name<<"\n";
			  outf<<"Your BMI is: "<<BMI<<"\n";
              outf.close();
         }
};
main()
{
	fstream outf("bmi.doc",ios::app);
    int option;  
    project ob;
    ob.ui();
    cin>>option;
    system("pause");
    system("cls");
    switch(option)
  {
	case 1:
		ob.showBmi();
		break;
	
	case 2:
		ob.restVO2max();
	    break;
	    
	case 3:
	    ob.runningVO2max();
		break;
	
	case 4:
		outf<<"_________________________________________________________________________"<<endl<<endl;
		cout<<"\n\n\n\n\n\n\n";
		cout<<"  ---------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<" |  Body mass index (BMI): It is a measure of body fat based on height and weight that applies to adult men and women. |"<<endl;				
		cout<<"  ---------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n\n\n\n\n\n\n";
		outf<<"Body mass index (BMI): It is a measure of body fat based on height and weight that applies to adult men and women."<<endl;
		break;
		
	case 5:
		outf<<"_________________________________________________________________________"<<endl<<endl;
		cout<<"\n\n\n\n\n\n";
		cout<<"    ---------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"   |    VO2 max: It is a measure of the maximum amount of oxygen that you use during intense physical activity.    |"<<endl;
		cout<<"   |                                                                                                               |"<<endl;
		cout<<"   |This measurement determines your fitness level by calculating how efficiently your cells use oxygen for energy.|"<<endl;
		cout<<"    ---------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n\n\n\n\n\n";
		outf<<"VO2 max: It is a measure of the maximum amount of oxygen that you use during intense physical activity."<<endl;
		outf<<"This measurement determines your fitness level by calculating how efficiently your cells use oxygen for energy."<<endl;
	break;
	
	case 6:
		    	 cout<<"\n\n\n\n\n\n";
		         cout<<"                                   ----------------------------------"<<endl;
		         cout<<"                                  | You have pressed the exit button |"<<endl;				
		         cout<<"                                   ----------------------------------"<<endl;
		         cout<<"\n\n\n\n\n\n";
		system("pause");
		system("cls");
		break;
	
	default:
				 cout<<"\n\n\n\n\n\n";
		         cout<<"                                   ----------------------------------"<<endl;
		         cout<<"                                  |           INVALID INPUT!!        |"<<endl;				
		         cout<<"                                   ----------------------------------"<<endl;
		         cout<<"\n\n\n\n\n\n";
}
}






	
	 
	
		

