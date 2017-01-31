#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string :\n";
    cin>>s;
    cout<<"String entered"<<endl;
    class holder{
        public:
        int start;
        int end;
    };
    int strLen = s.length();
    holder h[strLen];
    int i,j,start=0,k=0,largest=0;
    for(i=0;i<strLen;i++){
        for (j=start;j<i;j++){
            if(s[i]==s[j]){
                h[k].start=start;
                h[k].end=i-1;
                start=i;
                if(h[k].end-h[k].start > h[largest].end-h[largest].start){
                    largest=k;
                }
            	k+=1;
                break;
            }
        }
    }
    cout<<"the largest string is:"<<s.substr (h[largest].start,h[largest].end-h[largest].start+1);
    return h[largest].end-h[largest].start;
}

