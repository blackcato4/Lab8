
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
using namespace std ;
int main(){
int age;
double bounty ;
float height ;
cout << "Enter your age: " ;
cin >> age ;
if(age <= 25){
    cout << "Enter your height: " ;
    cin >> height ;
    if(height < 100){
        cout << "Your character = ""Chopper""" << endl ;
    }else if(height < 180){
        cout << "Your character = ""Usopp""" << endl ;
    }else{
        cout << "Enter your bounty: " ;
        cin >> bounty ;
        if(bounty > 1100000000){
            cout << "Your character = ""Zoro""" << endl ;
        }else{
            cout << "Your character = ""Sanji""" << endl ;
        }
    }

}else if(age <= 60){
    cout << "Enter your bounty: " ;
    cin >> bounty ;
    if(bounty > 500000000){
        cout << "Your character = ""Jinbe""" << endl ;
    }else{
        cout << "Your character = ""Franky""" << endl ;
    }
}else{
    cout << "Your character = ""Brook""" << endl;
}
return 0;
}

