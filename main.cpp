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

int main()
{
    GetTempture raspTemp = GetTempture("/sys/class/thermal/thermal_zone0/temp");
    cout << raspTemp.GetTemp() << endl;
    //cout << "Hello world!" << endl;
    return 0;
}

