#include<bits/stdc++.h>

using namespace::std;
typedef map<string, int> MapType;

int main()
{
    char file_name[301];
    MapType map_type;
    cout<<"Enter the path and file number: ";
    cin.getline(file_name,301);


    ifstream read_file;
    read_file.open(file_name);

    if (!readfile) {
            cout<<file_name<<" Error: Could not open file: "<<endl;
            return 0;
    }else {
        cout<<file_name<<" file opened succesfully"<<endl;
}
    for(MapType:: iterator iter = map_type.begin(); iter != map_type.end(); iter++){
        count<< iter -> first <<" occured " << iter ->  second << "times.\n";
    }
        return 0;
}





























































