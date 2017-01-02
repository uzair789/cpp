class Person{
    protected:
     string name;
    int age;
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

class Professor : public Person{
    private :
        int publications,pr_id;
       
    public:
       static int cur_id1;
       Professor() {
           cur_id1++;
       }
       void getdata();   
       void putdata(){cout  << name << " "<< age << " "<< publications << " "<< pr_id << endl;}    ;
           //void putdata(){printf("%s %d %d",name,age,publications);}    ;
   
};

int Professor::cur_id1 = 0;

void Professor ::getdata(){
   // cout << "Enter the name, age and number of publications"<<endl;
    cin >> name >> age >> publications;
    pr_id = cur_id1;
    
}

class Student : public Person{
    private:
        int marks[6],summ1,st_id;
       
    public: 
         static int cur_id2;
        Student(){
            cur_id2++;
        }
        void getdata();
        void putdata(){cout << name << " " << age << " " << summ1 << " " << st_id << endl ;};
};

int Student::cur_id2 = 0;

void Student::getdata(){
  //  cout << "Enter the name , age and marks of the student in 6 subjects" << endl;
    cin >> name >> age;
    int summ = 0;
    for(int i = 0;i<6;i++){
        cin >> marks[i];
        summ = summ + marks[i];
    
        //cout << summ << endl;
    }
    summ1 = summ;
    st_id = cur_id2;
    
}
