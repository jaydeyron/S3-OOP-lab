#include<iostream>

using namespace std;
class patient{
	public:
		int patientID;
		string PName;
		void getPatientInfo();
		void putPatientInfo();
		void makeAppointment();
		void Diagnosis();
		void Billing();
		void printBill();
	private:
		string Address;
		string Gender;
		string BloodGroup;
		string doctor_Name;
		string DiagnosisInfo;
		string MedicineInfo;
		string app_date;
		int Phone,doctorFee,medicine_charge,Total;
};

void patient::getPatientInfo()
{
	cout<<"Enter Patient ID\n";
	cin>>patientID;
	cout<<"\nEnter Patient name\n";
	cin>>PName;
	cout<<"\nEnter Address\n";
	cin>>Address;
	cout<<"\nEnter Gender\n";
	cin>>Gender;
	cout<<"\nEnter Phone number\n";
	cin>>Phone;
	cout<<"\nEnter Blood group\n";
	cin>>BloodGroup;
}

void patient::putPatientInfo()
{
	cout<<"Patient ID\n"<<patientID<<endl; 
	cout<<"\nPatient name\n"<<PName<<endl;
	cout<<"\nAddress\n"<<Address<<endl;
	cout<<"\nGender\n"<<Gender<<endl;
	cout<<"\nPhone number\n"<<Phone<<endl;
	cout<<"\nBlood group\n"<<BloodGroup<<endl;
}

void patient::makeAppointment()
{
	cout<<"Enter doctor name:\n";
	cin>>doctor_Name;
	cout<<"\nEnter Appointment date:\n";
	cin>>app_date;
	cout<<"\nAppointment successfull!\n";
}

void patient::Diagnosis()
{
	cout<<"Enter Diagnosis Info:\n";
	cin>>DiagnosisInfo;
	cout<<"\nEnter Medicine Info:\n";
	cin>>MedicineInfo;
}

void patient::Billing()
{
	cout<<"Enter Doctor fee:\n";
	cin>>doctorFee;
	cout<<"\nEnter Medicine charge:\n";
	cin>>medicine_charge;
	Total=doctorFee+medicine_charge;
}

void patient::printBill()
{
	cout<<"Total bill:\nINR "<<Total<<endl;
}

int main()
{
	int ch;
	patient p1;
	cout<<"WELCOME TO MEDICAL CLINIC\n";
	while(1)
	{
		cout<<"\n\nMENU\n\n1.getPatientInfo()\n2.putPatientInfo()\n3.makeAppointment\n4.Diagnosis\n5.Billing\n6.printBill\n7.Exit\n\nEnter your choice: ";
		cin>>ch;
		switch(ch){
		case 1:{
			p1.getPatientInfo();
			break;
			}
		case 2:{
			p1.putPatientInfo();
			break;
			}
		case 3:{
			p1.makeAppointment();
			break;
			}
		case 4:{
			p1.Diagnosis();
			break;
			}
		case 5:{
			p1.Billing();
			break;
			}
		case 6:{
			p1.printBill();
			break;
			}
		case 7:{
			cout<<"Thank you for using the program!\n";
			cout<<"EXITING...\n\n";
			return 0;
			}
		default:{
			cout<<"Invalid choice\nPlease try again\n";
			}
		}
	}
}
