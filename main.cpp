//
//  main.cpp
//  Term1 proj
//
//  Created by Pourya Zardosht on 10/13/1401 AP.
//
#include <iostream>
#include <math.h>
using namespace std;

void Menu(){
    cout<<"Operators"<<endl<<endl;
    cout <<"[+]" <<endl << "[-]" <<endl << "[/]" <<endl << "[%]" << endl<<"[*]" << endl<<"[S]" << endl<<"[$]" << endl<<"[e]" << endl<<"[#]" << endl<<"[p]" << endl<<"[l]" << endl<<"[f]" << endl<<"[v]" << endl<<"[^]" << endl<<"[<]"<< endl<<"[a]" <<endl<<"[M]" <<endl<<"[G]" <<endl;
    cout<< endl <<"Choose: ";
}
void Sum(){
    cout <<"You Choose [+]"<<endl;
    float a , b, sum;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    sum = a + b;
    cout<<a<<" + " << b << " = " <<sum<<endl;
}
void Minus(){
    cout <<"You Choose [-]"<<endl;
    float a , b, minus;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    minus = a - b;
    cout<<a<<" - " << b << " = " <<minus<<endl;
}
void Division(){
    cout <<"You Choose [/]"<<endl;
    float a , b, division;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    division = a / b;
    cout<<a<<" / " << b << " = " <<division<<endl;
}
void Remain(){
    cout <<"You Choose [%]"<<endl;
    float a , b, remain;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    remain = a * b;
    cout<<a<<" % " << b << " = " <<remain<<endl;
}
void Multipli(){
    cout <<"You Choose [*]"<<endl;
    float a , b, multi;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    multi = a * b;
    cout<<a<<" * " << b << " = " <<multi<<endl;
}
void Square(){
    cout <<"You Choose [S]"<<endl;
    float a,S;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    S = sqrt(a);
    cout<<"The Square of "<<a<<" is "<<S<<endl;
}
void Sinus(){
    cout <<"You Choose [$]"<<endl;
    float a,sinus;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    sinus = sin(a);
    cout<<"The sinus of "<<a<<" is "<<sinus<<endl;
}
void Exponential(){
    cout <<"You Choose [e]"<<endl;
    float a,exponential;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    exponential = exp(a);
    cout<<"The exponential of "<<a<<" is "<<exponential<<endl;
}
void Cosine(){
    cout <<"You Choose [#]"<<endl;
    double a,cosine;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    cosine = cos(a);
    cout<<"The cosine of "<<a<<" is "<<cosine<<endl;
}
void Power(){
    cout <<"You Choose [p]"<<endl;
    double a,b,power;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    power = pow(a, b);
    cout<<a<<" to the power of "<<b<< " becomes "<<power<<endl;
    
}
void Logarithm(){
    cout <<"You Choose [l]"<<endl;
    double a,log;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    log = log10(a);
    cout<<"log "<<a<<" is "<<log<<endl;
}
void Factorial(){
    cout<<"You Choose [f]"<<endl;
    int fact = 1,a;
            cout<<"Enter A Number: "<<endl;
            cin>>a;
        for (int i = 1; i <= a; i++){
            fact *= i;
        }
        cout<<"Factorial: "<<fact;
}
//void Average(){
//    cout<<"You Choose [a]"<<endl;
//    int n;
//    float num[100], sum=0, avg;
//    cout << "Enter count of numbers: ";
//    cin >> n;
//    while (n > 100 || n <= 0)
//    {
//        cout << "Error! number should in range of (1 to 100)." << endl;
//        cout << "Enter the number again: ";
//        cin >> n;
//    }
//        for(int i = 0; i < n; ++i)
//        {
//            cout << i + 1 << ". Enter number: ";
//            cin >> num[i];
//            sum += num[i];
//        }
//        avg = sum / n;
//        cout << "Average = " << avg;
//}
int main() {
    cout << "Hello my friend :)"<<endl;
    char oprt;
    string no = "N";
    string ans;
    while (1) {
        Menu();
        cin >> oprt;
        cout<<endl;
        switch (oprt) {
            case '+':
                Sum();
                break;
                
            case '-':
                Minus();
                break;
                
            case '/':
                Division();
                break;
            case '%':
                Remain();
                break;
                
            case '*':
                Multipli();
                break;
            case 'S':
                Square();
                break;
            case '$':
                Sinus();
                break;
            case 'e':
                Exponential();
                break;
            case '#':
                Cosine();
                break;
            case 'p':
                Power();
                break;
            case 'l':
                Logarithm();
                break;
            case 'f':
                Factorial();
                break;
//            case 'a':
//                Average();
//                break;
        }
        
        cout<<endl<<"New task? (Y & N)"<<endl;
        cin >> ans;
        if (ans==no) {
            break;;
        }
    }
    return 0;
}
