# include <iostream>
# include <vector>
using namespace std;
class gameu{
    public :
    vector<string> v;
    vector<string> v1;
    void boxes(){
    
    int k = 0;
    v = { "0","1","2","3","4","5","6","7","8"};
    for (int i=0;i<v.size();i++){
cout << "|" <<v[i] ;

if(k == 2){
    cout << "\n";
    k = -1;
}
k++;

    }}
    void inputt1(){
    int l;
    cout << "Enter The Location user1" << endl;
    cin >> l ;
    

    
 if(v[l] == "O"){
cout << "please insert another place" << endl;
    }
    else if(v[l] == "X"){
        cout << "Already u have inserted it ";
    }
    else{
        v[l] = "X";
    }
}
void inputt2(){
    int l1;
    cout << "Enter The Location user2" << endl;
    cin >> l1 ;
   
    if(v[l1] == "X"){
cout << "please insert another place" << endl;
    }
    else if(v[l1] == "O"){
        cout << "Already u have inserted it ";
    }
    else{
        v[l1] = "O";
    }
}
 void realtimeprint(){
    
    int k = 0;
    v1 = { " "," "," "," "," "," "," "," "," "};
    for (int i=0;i<v1.size();i++){
cout << "|" <<v1[i] ;

if(k == 2){
    cout << "\n";
    k = -1;
}
k++;

    }}
void checks(){




}



};





int main(){
gameu sd;
sd.boxes();
cout << "----------------------" << "\n";
sd.realtimeprint();
while(true){





}


    return 0;
}