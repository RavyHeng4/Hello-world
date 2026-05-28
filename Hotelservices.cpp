#include<iostream>
#include<string>
using namespace std;
    class Hotelservices {
        public:
        int roomnumber;
        string roomstatus;
        string roomtype;
        bool isClean;
        Hotelservices();
        Hotelservices(int, string, string, bool);
        void roominfo();
        void setroomnum(int);
        void setRoomStatus(string);
        void setRoomType(string);
        void setCleanStatus(bool);
        };
    
    Hotelservices::Hotelservices(){
    roomnumber = 0;
    roomstatus= "Available";
    roomtype="One-Bed Room";
    isClean = false;
    }

    Hotelservices::Hotelservices(int roomnum, string status, string type, bool clean){
    roomnumber=roomnum;
    roomstatus=status;
    roomtype=type;
    isClean=clean;
    }
    
    void Hotelservices::roominfo(){
    cout<<"Room number: "<< roomnumber<<endl;
    cout<<"Room status: "<< roomstatus<<endl;
    cout<<"Room type: "<<roomtype<<endl;
    cout<<"Cleaning status: "<<isClean<<endl;
    }
    void Hotelservices::setroomnum(int num){
    roomnumber=num;
    }
    void Hotelservices::setRoomStatus(string status){
    roomstatus=status;
    }
    void Hotelservices::setRoomType(string type){
    roomtype=type;
    }
    void Hotelservices::setCleanStatus(bool clean){
    isClean=clean;
    }
    int main(){
    Hotelservices room1;

    Hotelservices room2(2, "Available", "One-Bed", true);

    room1.roominfo();

    cout << endl;

    room2.roominfo();


    return 0;
    }
   
