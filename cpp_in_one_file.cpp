// this is my first c++ program 

/* i am happy to crete 
    my first program */

using namespace std;

#include <iostream>
#include <string>
#include <fstream>

    // int add(int x, int y)
    // {
    //     return x+y;
    // }

    // double add(int a, int b)
    // {
    //     return a+b;
    // }

    //-------- Create Class (Start) -----------

        // by manual ------
            // class CarColor
            // {
            //     public:

            //     string color;
            //     string model;

            //     void print()
            //     {
            //         cout<<"The model of car is : "<<model<<endl;
            //         cout<<"The color of "<<model<<" is : "<<color<<endl;
            //     }
            // };
        
        // -- by user input start -------

            // class CarColor
            // {

            //     public:

            //     string model;
            //     string color;

            //     void scan(string x, string y)
            //     {
            //         model = x;
            //         color = y;
            //     }

            //     void print()
            //     {
            //         cout<<"The model of car is : "<<model<<endl;
            //         cout<<"Color of "<<model<<" is : "<<color<<endl;
            //     }
            // };

        // -- by user input end --------

    //-------- Create Class (End) -----------

    //----- Constructor (Start)--------

        // -- Manual (Start) ----

            // class Ritik
            // {

            //     public:

            //     int x, y;

            //     Ritik(int a, int b)
            //     {
            //         x=a;
            //         y=b;
            //     }

            //     void print()
            //     {
            //         cout<<"X is : "<<x<<endl;
            //         cout<<"Y is : "<<y<<endl;
            //     }


            // };
        
        // -- Manual (End) ----

        // -- By User Input (Start) ----

            // class Ritik
            // {
                
            //     public:

            //     int x, y;

            //     Ritik(int a, int b)
            //     {
            //         x=a;
            //         y=b;
            //     }

            //     void print()
            //     {
            //         cout<<"The value of X is : "<<x<<endl;
            //         cout<<"The value of Y is : "<<y<<endl;
            //     }
            // };

        // -- By User Input (End) ----

    //----- Constructor (End)--------

//--------- Inheritance (Start) -------------------------------------------------

        // Single Inheritance (start) ----------

            // class Vehicle
            // {

            //     public:

            //     int milage = 50;
            //     int price = 500;

            //     void print_vehicle()
            //     {
            //         cout<<"Hello I am From Parent Class"<<endl;
            //         cout<<"My Milage is : "<<milage<<endl;
            //         cout<<"my Price is : "<<price<<endl;
            //     }

            // };

            // class Car : public Vehicle
            // {
            //     public:

            //     string model = "swift";
            //     string color = "red";

            //     void print_car()
            //     {
            //         cout<<"Hello I am from Base Class"<<endl;
            //         cout<<"My Model is : "<<model<<endl;
            //         cout<<"My color is : "<<color<<endl;
            //     }

            // };

        // Single Inheritance (End) ----------

        // Multilevel Inheritance (Start) -------------------

            // class GrandParent 
            // {
            //     public:

            //     string name;

            //     void get_name(string x)
            //     {
            //         name = x;
            //     }

            //     void print_name()
            //     {
            //         cout<<"My Name is : "<<name<<endl;
            //     }

            // };

            // class Parent : public GrandParent
            // {
            //     public:

            //     int age;

            //     void get_age(int y)
            //     {
            //         age = y;
            //     }

            //     void print_age()
            //     {
            //         cout<<"My age is : "<<age<<endl;
            //     }
            // };

            // class Child : public Parent
            // {
            //     public:

            //     string gender;

            //     void get_gender(string z)
            //     {
            //         gender = z;
            //     }

            //     void print_gender()
            //     {
            //         cout<<"My gender is : "<<gender<<endl;
            //     }
            // };

        // Multilevel Inheritance (End) ---------------------

        // Multiple Inheritance (Start) ------------------

            // class Parent1
            // {

            //     public:

            //     void print_parent1()
            //     {
            //         cout<<"This is from Parent1"<<endl;
            //     }

            // };

            // class Parent2
            // {

            //     public:

            //     void print_parent2()
            //     {
            //         cout<<"This is from Parent2"<<endl;
            //     }


            // };

            // class Child : public Parent1, public Parent2
            // {

            //     public:

            //     void print_child()
            //     {
            //         cout<<"this is from child"<<endl;
            //     }

            // };

        // Multiple Inheritance (End) ------------------

//-----------Inheritance (End) ----------------------------------------------------

int main()

{
    
//---------------------------------------------------------------------------------
    
    // cout<<"Hello World!";

//---------------------------------------------------------------------------------

    // Sum of two value

    // int a = 20;
    // int b = 25;
    // int c = a + b;

    // cout<<c;

//---------------------------------------------------------------------------------

    // Sum of two values, given by user

    // int a, b;
    

    // cout<<"Enter the first value"<<endl;
    // cin>> a;

    // cout<<"Enter the second value"<<endl;
    // cin>> b;

    // int c = a + b;

    // cout<<"The Sum of Entered Value is " << c;

//--------------------------------------------------------------------------------

    // Size of different data types

    /*cout<<"Size of Fundamental Data Types - "<<endl;

    cout<<"------------------------------------"<<endl;

    
    cout<<"The size of (char) is -        "<< sizeof(char)<<" bytes"<<endl;
    cout<<"The size of (short) is -       "<< sizeof(short)<<" bytes"<<endl;
    cout<<"the size of (int) is -         "<< sizeof(int)<<" bytes"<<endl;
    cout<<"the size of (long) -           "<< sizeof(long)<<" bytes"<<endl;
    cout<<"the size of (long long) is -   "<< sizeof(long long)<<" bytes"<<endl;
    cout<<"the size of (float) is -       "<< sizeof(float)<<" bytes"<<endl;
    cout<<"the size of (double) is -      "<< sizeof(double)<<" bytes"<<endl;
    cout<<"The size of (long double) is - "<< sizeof(long double)<<" bytes"<<endl;
    cout<<"The size of (boolean) is -     "<< sizeof(bool)<<" bytes"<<endl;
    */

//---------------------------------------------------------------------------------

    // Operators 

    // int a, b, c=0;

    // cout<<"Enter the First Value "<<endl;
    // cin>> a;
    // cout<<"Enter the Second Value "<<endl;
    // cin>> b;
    // int d=a++;
    // int e=b--;
    // cout<<"Unary Operation (number++) & (number--) "<<a++<<" "<<b--<<endl;
    // cout<<"Binary Operation ( first number + second number "<< a+b<<endl;
    // cout<<"Ternary Operator (short form of If Else ) "<< ((a>b) ? a:b)<<endl;
    // cout<<"Relational Operator "<< (a<b)<<endl;
    // cout<<"Logical Operators "<< (true && false)<<" "<< (true && true)<<" "<< (true||false)<<endl;
    // cout<<"Assisgnment Operator : Sum : c = "<< (c+=a)<<endl;

//---------------------------------------------------------------------------------

    // IF else condition statement 

    /*string a;

    cout<<"is raining?"<<endl;
    cin>> a;

    if(a == "yes")
    {
        cout<<"You cant go outside"<<endl;
    }
    else
    {
        cout<<"you can go outside"<<endl;
    }*/
    
    /*int marks = 0;

    cout<<"Enter your marks"<<endl;
    cin>>marks;

    if(marks > 70)
    {
        cout<<"You will get Mobile Phone"<<endl;
    }
    else
    {
        cout<<"You have to attempt a mock test"<<endl;
    }*/

   /* int a, b;

    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;

    if(a>b)
    {
        cout<<" a is greater than b"<<endl;
       
    }
    else
    {
        cout<<" b is greater than a"<<endl;

        
    }*/

/*
    int a, b, c;

    cout<<"Enter the 1st number "<<endl;
    cin>>a;
    cout<<"Enter the 2nd Number "<<endl;
    cin>>b;
    cout<<"enter the 3rd number "<<endl;
    cin>>c;


    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greater"<<endl;
        }
    }

    else
    {
        if(b>c)
        {
            cout<<"B is greater"<<endl;
        }
        else
        {
            cout<<"c is greater"<<endl;
        }
        
    }
    */
    
   /*int a, b, c;

   cout<<"Enter the 1st number : ";
   cin>>a;
   cout<<"Enter the 2nd number : ";
   cin>>b;
   cout<<"Enter the 3rd nubmer : ";
   cin>>c;


    if((a>b) && (a>c))
    {
        cout<<"1st number "<< a <<" is greater"<<endl;
    }    
    else if((b>a) && (b>c))
    {
        cout<<"2nd Number "<< b <<" is greater"<<endl;
    }
    else
    {
        cout<<"3rd Number "<< c <<" is greater"<<endl;
    }*/
    
//------------------------------------------------------------------------

    // Switch Case - Calculator

    /* int a, b, c;


    cout<<"Enter the first number : "<<endl;
    cin>>a;

    cout<<"Enter the second number : "<<endl;
    cin>>b;

    cout<<"Enter 1 for  + "<<endl;
    cout<<"Enter 2 for  - "<<endl;
    cout<<"Enter 3 for  * "<<endl;
    cout<<"Enter 4 for  / "<<endl;
    cin>>c;



    switch (c)
    {
    case 1:
        cout<< a + b;
        break;
    
    case 2:
        cout<< a - b;
        break;
    
    case 3:
        cout<< a * b;
        break;

    case 4:
        cout<< a / b;
        break;
    
    default:
        cout<<"Please enter valid calculation method :";
        break;
    }*/

//-------------------------------------------------------------------------------------

    // For Loops for print array

    // int arr[5] = {10, 20, 30, 40, 50};
    // int n = 5;

    // for(int i =0; i<n; i++)
    // {
    //     cout<< arr[i]<<endl;
    // }
    
    // Create Array from user input (start)---------------------

    // int n;
    // int arr[n];

    // cout<<"enter the size of array"<<endl;
    // cin>>n;

    // for(int i = 0; i<n; i++)
    // {
    //     cout<<"enter the values of "<< i+1 <<endl;
    //     cin>>arr[i];
    // }

    // for(int i=0; i<n; i++)
    // {
        
    //     cout<<"the values of 'arr' "<< i+1 <<" number is : "<< arr[i]<<endl;
    // }

    // Create Array from user input (End)--------------------------

//-----------------------------------------------------------------------------

    //Pointer 

    /*  Manual
    
    string name="Ritik Chourasiya"; 
    string *ptr = &name;

    cout<<name<<endl; // value

    cout<< &name<<endl;// address

    cout<<*ptr<<endl;//value

    cout<<ptr<<endl;//address */

    /* Dynamic (input by user)
    
    string name;
    string *ptr = &name;

    cout<<"Enter the name "<<endl;
    cin>>name;

    cout<<"Your Name is "<< name<<endl;*/

//------------------------------------------------------------

    // Functions 


    /*int x, y;

    cout<<"Enter the first value"<<endl;
    cin>>x;

    cout<<"Enter the second value"<<endl;
    cin>>y;

    cout<<"The addition of two number is "<<add(x,y);

    return 0;*/

    /* Function Overlading */

    // int x = 20;
    // int y = 30;

    // double a = 30.50;
    // double b = 50.50;

    // cout<<"The result of int data type "<<add(20, 30)<<endl;

    // cout<<"The result of double data type "<<add(30.50, 50.50)<<endl;

//---------------------------------------------------------------------------------

    // Class in C++

        //--- Manual ----

    // CarColor customer;

    // customer.color = "Red";
    // customer.model = "Swift";

    // customer.print();


        // -- by user input start ---

        // CarColor input;
         
        // string enter_model;
        // string enter_color;
        
        // cout<<"Enter the Model of car "<<endl;
        // cin>>enter_model;

        // cout<<"Enter the color of "<<enter_model<<endl;
        // cin>>enter_color;

        // input.scan(enter_model, enter_color);

        // input.print();

        //-- by user input end -----
    
    //----- Constructor (Start)--------

        // -- Manual (Start) ----

            // Ritik m1(20, 30);

            // m1.print();

        // -- Manual (End) ----

        // -- By User Input (Start) ----

            // int p, q;

            // cout<<"Enter the X : "<<endl;
            // cin>>p;

            // cout<<"Enter the Y : "<<endl;
            // cin>>q;


            // Ritik m1(p, q);

            // m1.print();

        // -- By User Input (End) ----


    //----- Constructor (End)--------

//-----------Inheritance (Start)-----------------------

        // Single Inheritance (start) ----------

            // Car c1;

            // c1.print_vehicle();

            // c1.print_car();
        
        // Single Inheritance (End) ----------


        // Multilevel Inheritance (Start) ----------------

            // Child c1;

            // c1.get_name("Ritik");
            // c1.get_age(20);
            // c1.get_gender("Male");

            // c1.print_name();
            // c1.print_age();
            // c1.print_gender();

        // Multilevel Inheritance (End) ------------------

        // Multiple Inheritance (Start) ------------------

            // Child f1;

            // f1.print_parent1();
            // f1.print_parent2();
            // f1.print_child();

            // return 0;

        // Multiple Inheritance (Start) ------------------

//-----------Inheritance (End)-------------------------

//----------- File Operators (start) -------------------------

    //--- create file with text ----------

        // ofstream MyFile("abcd.txt");

        // MyFile<<"This is written by ritik for example of file operators";

        // MyFile.close();

        // string mytext;

    //--- Read File -----------------------

        // ifstream MyReadFile("abcd.txt");

        // while(getline(MyReadFile, mytext))
        // {
        //     cout<<mytext<<endl;
        // }

    //--- create file with text ----------



    //--- create file with text ----------

    

//----------- File Operator (End) ----------------------------



}