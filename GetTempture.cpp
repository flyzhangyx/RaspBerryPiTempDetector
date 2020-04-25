#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;
class GetTempture{
public:
    GetTempture(const char* Path):TempFilePath(Path){};
    float GetTemp();
private:
    const char* TempFilePath;
};
float GetTempture::GetTemp(){
    ifstream TempFileStream ;
    char temp[32];
    TempFileStream.open(TempFilePath,ios::in);
    if(!TempFileStream.is_open())
    {
        cout<<"Error"<<endl;
    }
    else{
        if(TempFileStream.good())
        {
            TempFileStream.getline(temp,32);
            cout<<temp<<endl;
            return (float)atoi(temp)/1000;
        }
        else{
            cout<<"Error"<<endl;
        }
    }
    return -1;
}
