#include <iostream>
#include <cmath>
using namespace std;
class kalkulyator{
public:
    kalkulyator(){
    }
    int toplamaq(int x, int y){
        int answer= x+y;
        return answer;
    }
    int cixmaq(int x, int y){
        int answer= x-y;
        return answer;
    }
    int vurmaq(int x, int y){
        int answer= x*y;
        return answer;
    }
    int bolmek(int x, int y){
        int answer= x/y;
        return answer;
    }
};

int main(){
	int x = 0 , y = 0;
	cout<<"\t\t\t\t\t>>SADE RIYAZI MESELE HELLI<< \nEger programi dayandirmaq isteseniz , operator daxil edin hissesine X yazmaginiz ve ENTER basmaginiz yeterlidir."<<endl;
    cout<<"Ilk Ededi Daxil Edin:";
    cin>>x;
    char n;
    while(cout<<"Operatoru Daxil Edin(-,+,*,/) ve ya Programi Dayanirin:" && cin>>n && cout<<endl){
        if(n!='-' && n!='+' && n!='*' && n!='/'){
            if(n=='X' || n == 'x'){
                cout<<"Programi Dayandirdiniz!";
            }else{
                cout<<"Duzgun Operator Daxil Etmediyiniz Ucun Program Dayandirildi!"<<endl;
            }
            break;
        }
        if(n=='-'){
            cout<<"Cixani Daxil Edin:";
            cin>>y;
            cout<<x<<'-'<<y<<'='<<kalkulyator().cixmaq(x,y)<<endl;
            cout<<endl;
            x = kalkulyator().cixmaq(x,y);
        }
        if(n=='+'){
            cout<<"Toplanani Daxil Edin:";
            cin>>y;
            cout<<x<<'+'<<y<<'='<<kalkulyator().toplamaq(x,y)<<endl;
            cout<<endl;
            x = kalkulyator().toplamaq(x,y);
        }
        if(n=='*'){
            cout<<"Vurani Daxil Edin:";
            cin>>y;
            cout<<x<<'*'<<y<<'='<<kalkulyator().vurmaq(x,y)<<endl;
            cout<<endl;
            x = kalkulyator().vurmaq(x,y);
        }
        if(n=='/'){
            cout<<"Boleni Daxil Edin:";
            cin>>y;
            cout<<x<<'/'<<y<<'='<<kalkulyator().bolmek(x,y)<<endl;
            cout<<endl;
            x = kalkulyator().bolmek(x,y);
        }
    }
	return 0;
}
