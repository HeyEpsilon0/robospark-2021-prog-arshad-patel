#include <iostream>

using namespace std;


class  personal_data{
    protected:
    string name,surname;
    int dob,mob;
    
    public:
    personal_data(){
        name="Aditya";
        surname="Warghane";
        dob=782;
        mob=7841;
    }
    void getper(){
        cout<<"Enter personal data"<<endl;
        cout<<"Enter Name : ";
        cin >>name;
        cout<<"Enter Surname : ";
        cin>>surname;
        cout<<"Enter DoB : ";
        cin>>dob;
        cout<<"Enter Mob : ";
        cin>>mob;
    }
    
    void dis_per()
    {   cout<<"*************************************\n";
        cout<<"Name: "<<name<<" "<<surname<<endl;
        cout<<"DoB: "<<dob<<endl;
        cout<<"Mob: "<<mob<<endl;
        cout<<"*************************************\n";
    }
    
};



class professional_data{
    protected:
    string company,title,project;
    
    public:
    professional_data(){
        company="DE";
        title="CEO";
        project="WF";
    }
    void getpro(){
        cout<<"Enter professional data"<<endl;
        cout<<"Enter Company: ";
        cin >>company;
        cout<<"Enter Title: ";
        cin>>title;
        cout<<"Enter Project: ";
        cin>>project;
    }
    
    void dis_pro(){
        cout<<"*************************************\n";
        cout<<"Company : "<<company<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Project : "<<project<<endl;
        cout<<"*************************************\n";
    }
};

class academic_data{
    protected:
    string clg,branch;
    int pass;
    float cgpa;
    
    public:
        academic_data(){
            clg="VIT Pune";
            branch="CSE";
            pass=2024;
            cgpa=10.1;
        }
        void getacad(){
        cout<<"Fill academic data"<<endl;
        cout<<"Enter College: ";
        cin >>clg;
        cout<<"Enter Branch : ";
        cin>>branch;
        cout<<"Enter Year of Passing : ";
        cin>>pass;
        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }
    
    void dis_acad()
    {
        cout<<"*************************************\n";
        cout<<"College Name: "<<clg<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Year of passing: "<<pass<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"*************************************\n";
    }    
    
    
};
    

class biodata : public personal_data,public professional_data,public academic_data
{
    public:
    void dis_bio()
    {   
        cout<<"*************************************\n";
        cout<<"Name: "<<name<<" "<<surname<<endl;
        cout<<"DoB: "<<dob<<endl;
        cout<<"Mob: "<<mob<<endl; 
        cout<<"Company : "<<company<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Project : "<<project<<endl;        
        cout<<"College Name: "<<clg<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Year of passing: "<<pass<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"*************************************\n";
    }
};
int main()
{
    int key=10;
    cout<<"                    FILL THE REQUIRED DATA!\n";
    biodata bio;
    
    while(key!=0)
    {
        cout<<"1. Fill personal data\n2. Fill professional data\n3. Fill academic data\n4. View personal data\n5. View professional data\n6. View academic data\n9. View Biodata\n0. Exit\n";
        cin>>key;
        
        switch(key){
            case 1:
            bio.getper();
            break;
            case 2:
            bio.getpro();
            break;
            case 3:
            bio.getacad();
            break;
            case 4:
            bio.dis_per();
            break;
            case 5:
            bio.dis_pro();
            break;
            case 6:
            bio.dis_acad();
            break;
            case 9:
            bio.dis_bio();
            break;
            case 0:
            exit(0);
        }
    }
    
    return 0;
}
