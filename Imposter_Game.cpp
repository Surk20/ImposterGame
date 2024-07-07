#include<iostream>
#include<string>
using namespace std;
void words(string a[],int n=3) {
	int count=0;
    string z,hide;
    for (int i=0;i<n;i++) {
    	count++;
        cout<<"Player-"<<count<<" your word is->\n\n";
        cout<<"**"<<a[i]<<"**"<<"\n\n";
        if (i<n-1) {
            do {
            	cout<<"Type \"hide\" to hide your word->";
            	cin>>hide;
            	system("cls");
                cout<<"Enter \"show\" to present next word->";
                cin>>z;
            } while(z!="show");
        } 
    }
}
int main() {
    int ch;
    string a[3],ch1;
    do {
        cout<<"*---------------------------*\n";
        cout<<"|   Are you the imposter ?  |\n";
        cout<<"*---------------------------*"<<"\n\n";
        
        cout<<"<---Choose a number between 1-5--->"<<endl;
        cin>>ch;
        cout<<endl;
        switch(ch) {
            case 1: {
                a[0]="Celebration"; a[1]="Celebration"; a[2]="Anniversary";
                words(a);
                break;
            }
            case 2: {
                a[0]="Encyclopedia"; a[1]="Dictionary"; a[2]="Encyclopedia";
                words(a);
                break;
            }
            case 3: {
                a[0]="Apple"; a[1]="Apple"; a[2]="Banana";
                words(a);
                break;
            }
            case 4: {
                a[0]="Water"; a[1]="Water"; a[2]="Fire";
                words(a);
                break;
            }
            case 5: {
                a[0]="Rain"; a[1]="Snow"; a[2]="Rain";
                words(a);
                break;
            }
            default: {
                cout<<"Invalid choice! only choose the number which is between 1-5."<<endl;
                cout<<"----------------------------------------------------------"<<"\n\n";
                break;
            }
        }
        cout<<"Enter \"y/n\" to continue...";
        cin>>ch1;
        cout<<endl;
    } while(ch1=="yes");
    return 0;
}

