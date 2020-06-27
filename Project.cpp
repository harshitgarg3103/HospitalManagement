#include<iostream>
using namespace std;
int main()
{
    char hospital[100],name[100],bloodgroup[10];
    int age,choice,day,days,room,amb,amount=0,doc,pay;
    cout<<"Enter the name of the hospital: ";
    cin>>hospital;
    cout<<"\n"<<"######################################################################################################################################"<<"\n"<<"\n";
    cout<<"\t\t\t\t\t\tWelcome to the "<<hospital<<" Hospital"<<"\n";
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your blood group: ";
    cin>>bloodgroup;
    cout<<"How we can help you Sir/ Mam : "<<"\n";
    cout<<"1. Blood Pressure Test"<<"\n";
    cout<<"2. Blood test"<<"\n";
    cout<<"3. For X-Ray test"<<"\n";
    cout<<"4. For Ultra Sound Test"<<"\n";
    cout<<"5. For Magnetic Resonance Imaging(MRI)"<<"\n";
    cout<<"6. For Cold Test "<<"\n";
    cout<<"7. For Fever Test"<<"\n";
    cout<<"8. For Tuberculosis Test(T.B.)"<<"\n";
    cout<<"9. For Chicken Pox"<<"\n";
    cout<<"10. For Eye Test"<<"\n";
    cout<<"11. for Teeth Test"<<"\n";
    cout<<"12. For Kidney Test"<<"\n";
    cout<<"13. For Lungs Test"<<"\n";
    cout<<"14. For Heart Test"<<"\n";
    cout<<"15. For Brain Test"<<"\n";
    cout<<"16. For Full Body Check Up"<<"\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"for B.P. test the fees is 150rs. ";
            amount=150;
            break;
        case 2:
            cout<<"for Blood Test the fees is 2050rs. ";
            amount=2050;
            break;
        case 3:
            cout<<"for X-ray test the fees is 8000rs. ";
            amount=8000;
            break;
        case 4:
            cout<<"for Ultra Sound Test the fees is 7500rs. ";
            amount=7500;
            break;
        case 5:
            cout<<"for MRI test the fees is 10000rs. ";
            amount=10000;
            break;
        case 6:
            cout<<"for Cold test the fees is 500rs. ";
            amount=500;
            break;
        case 7:
            cout<<"for Fever test the fees is 750rs ";
            amount=750;
            break;
        case 8:
            cout<<"for TB test the fees is 80000rs. ";
            amount=80000;
            break;
        case 9:
            cout<<"for Chicken pox the fees is 4500rs. ";
            amount=4500;
            break;
        case 10:
            cout<<"for Eye test the fees is 350 rs. ";
            amount=350;
            break;
        case 11:
            cout<<"for Teeth test the fees is 290rs. ";
            amount=290;
            break;
        case 12:
            cout<<"for Kidney test the fees is 9900rs. ";
            amount=9900;
            break;
        case 13:
            cout<<"for Lungs Test the fees is 50000rs ";
            amount=50000;
            break;
        case 14:
            cout<<"for Heart test the fees is 70000rs. ";
            amount=70000;
            break;
        case 15:
            cout<<"for brain test the fees is 110000rs. ";
            amount=110000;
            break;
        case 16:
            cout<<"for Full Body Check Up the fees is 200000rs ";
            amount=200000;
            break;
        default:
            cout<<"Invalid choice";
            break;
    }
    cout<<"\n"<<"For how much time the patient want to stay in the hospital: "<<"\n";
    cout<<"1. For one week"<<"\n";
    cout<<"2. For one month"<<"\n";
    cout<<"3. For one year"<<"\n";
    cin>>day;
    switch(day)
    {
    case 1:
        cout<<"Days lies between 1 to 7"<<"\n";
        break;
    case 2:
        cout<<"Days lies between 8 to 30"<<"\n";
        break;
    case 3:
        cout<<"Days lies between 31 to 365"<<"\n";
        break;
    default:
        cout<<"invalid choice";
        break;
    }
    cin>>days;
    cout<<"\n"<<"1. Room number 1 to 100 (A.C.rooms)"<<"\n";
    cout<<"2. Room number 101 to 200 (Cooler rooms)"<<"\n";
    cout<<"3. Room number 201 to 300 (Only Fan rooms)"<<"\n";
    cin>>room;
    switch(room)
    {
    case 1:
        cout<<"Charge for this type is 500 rs per day";
        amount+=500*days;
        break;
    case 2:
        cout<<"Charge for this type is 200 rs per day";
        amount+=200*days;
        break;
    case 3:
        cout<<"Charge for this type is 100 rs per day";
        amount+=100*days;
        break;
    default:
        cout<<"Invalid Choice";
        break;
    }
    cout<<"\n"<<"1. Need an ambulance"<<"\n";
    cout<<"2. Do not need an ambulance"<<"\n";
    cin>>amb;
    switch(amb)
    {
    case 1:
        cout<<"Charge for ambulance is 3000 rs";
        amount+=3000;
        break;
    case 2:
        cout<<"No extra charge is added for ambulance";
        break;
    default:
        cout<<"Invalid Choice";
        break;
    }
    cout<<"\n"<<"Specialists you want to concern in this hospital: "<<"\n";
    cout<<"\n"<<"1. Dr. Sahani (Heart Specialist)"<<"\n";
    cout<<"\n"<<"2. Dr. Saurabh (Teeth Specialist)"<<"\n";
    cout<<"\n"<<"3. Dr. Harshit (Kidney Specialist)"<<"\n";
    cout<<"\n"<<"4. Dr. Ambika (Brain Specialist)"<<"\n";
    cout<<"\n"<<"5. Dr. Arun (Surgeon)"<<"\n";
    cout<<"\n"<<"6. Dr. Neha (Neurologist and Physchiatrist)"<<"\n";
    cin>>doc;
    switch(doc)
    {
    case 1:
        cout<<"Fees of this doctor is 100000 rs. ";
        amount+=100000;
        break;
    case 2:
        cout<<"Fees of this doctor is 90000 rs";
        amount+=90000;
        break;
    case 3:
        cout<<"Fees of this doctor is 80000 rs";
        amount+=80000;
        break;
    case 4:
        cout<<"Fees of this doctor is 85000 rs";
        amount+=85000;
        break;
    case 5:
        cout<<"Fees of this doctor is 75000 rs";
        amount+=75000;
        break;
    case 6:
        cout<<"Fees of this doctor is 69000 rs";
        amount+=69000;
        break;
    default:
        cout<<"Invalid Choice";
        break;
    }
    cout<<"\n"<<"Total amount to be paid is Rs. "<<amount;
    cout<<"\n"<<"Means of payment: "<<"\n";
    cout<<"1. By cash"<<"\n";
    cout<<"2. By card"<<"\n";
    cout<<"3. By Paytm"<<"\n";
    cout<<"4. UPI Payment"<<"\n";
    cout<<"5. By netbanking"<<"\n";
    cout<<"If Bill paid by your card you will get 10% Discount"<<"\n";
    cin>>pay;
    switch(pay)
    {
    case 1:
        break;
    case 2:
        cout<<"\n"<<"You are eligible for 10% discount"<<"\n"<<"now your total amount is "<<amount-0.1*amount<<"\n";
        break;
    case 3:
         break;
    case 4:
         break;
    case 5:
         break;
    default:
        cout<<"Invalid choice";
        break;
    }
    cout<<"\n"<<"Thank you for the visit "<<name<<"\n";
    cout<<"Be Happy Be Healthy Be Safe"<<"\n";
    cout<<"Contact: 9027418433"<<"\n";
    cout<<"##########################################################################################";
    return 0;
}
