#include <iostream>
#include <stdio.h>
#include <iomanip>
/*
constexpr int get_value()
{
    return 3;
}
int main(void){
    
    //compile time error without the ; at end
    std::cout<<"Hello"<< std::endl;

    //run timer error 
    int value =  7/0;
    std::cout<<"Hello:"<<value<< std::endl;



}
*/



/*

int main(void)
{
*std::cout
*std::cin
*std::cerr
*std::clog

int age1;
std::string name;
std::cout<<"name and age"<<std::endl;
std::cin>>name>>age1;

std::cout<<"hi,"<<name<<",you are"<<age1<<"years old"<<std::endl;
//std::getline(std::cin,name);
}
*/

//信息丢失 不如大括号初始化器安全 直接报错  int a{1.2};


/*
int main(){
    //2 bytes
    short short_var {-12554};
    short int short_int {6565};
    signed short signed_short {-456};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

     //4 bytes
    int int_var{55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {55};

    //4 bytes
    long long_var {-12344};
    long  int long_int {66};
    signed long singed_long {44};
    signed long int singed_long_int {55};
    unsigned long int unsigned_long_int {8888};

    // 8 bytes
    long long long_long {777};
    long long int long_long_int {555};
    signed long long int signed_long_long_int {888};
    unsigned long long  int unsigned_long_long_int {666};


    std::cout<<"short size: "<<sizeof(short_var)<<std::endl;
    std::cout<<"short int : "<<sizeof(short_int)<<std::endl;
    std::cout<<"signed_short: "<<sizeof(signed_short)<<std::endl;
    std::cout<<"signed_short_int: "<<sizeof(signed_short_int)<<std::endl;
    std::cout<<"unsigned_short_int: "<<sizeof(unsigned_short_int)<<std::endl;


    std::cout<<"int_var: "<<sizeof(int_var)<<std::endl;
    std::cout<<"signed_var: "<<sizeof(signed_var)<<std::endl;
    std::cout<<"signed_int: "<<sizeof(signed_int)<<std::endl;
    std::cout<<"unsigned_int: "<<sizeof(unsigned_int)<<std::endl;


    std::cout<<"signed_var: "<<sizeof(long_var)<<std::endl;
    std::cout<<"long_int: "<<sizeof(long_int)<<std::endl;
    std::cout<<"singed_long: "<<sizeof(singed_long)<<std::endl;
    std::cout<<"singed_long_int: "<<sizeof(singed_long_int)<<std::endl;
    std::cout<<"unsigned_long_int: "<<sizeof(unsigned_long_int)<<std::endl;

    std::cout<<"long_long: "<<sizeof(long_long)<<std::endl;
    std::cout<<"long_long_int: "<<sizeof(long_long_int)<<std::endl;    
    std::cout<<"signed_long_long_int: "<<sizeof(signed_long_long_int)<<std::endl;
    std::cout<<"unsigned_long_long_int: "<<sizeof(unsigned_long_long_int)<<std::endl;

}

*/



/*
//float

// n(floating point)/0 will get infinity(+/-)
// 0.0 /0.0  = NaN  meanings a naughty number
int main(void){
    double num1{};
    double num2{};
    double num3{};
    double num4{};
    double num5{};
    double num6{};
    double num7{};
    double num8{};
    double num9{};
    double num10{5.6};
    double num11{};// initialized to 0
    double num12{};
    double num13{};

    double result {num10/num11};

    std::cout << num10<<"/"<<num11<<" yields "<<result<<std::endl;//5.6/0 yields inf infinity
    std::cout << result <<" + "<<num10<<" yields "<<result +num10<<std::endl;

    //NaN
    result = num11/num12;
    
    std::cout << num11<<"/"<<num12<<"="<<result<<std::endl;

    float number1{1.2323232323232323230f};
    double number2 {1.5656565656565656550};
    long double number3 {1.2565656565656565650L};

    //Print out the sizes 4 8 16
    std::cout <<"sizeof float :"<< sizeof(number1)<<std::endl;
    std::cout <<"sizeof double :"<< sizeof(number2)<<std::endl;
    std::cout <<"sizeof long double :"<< sizeof(number3)<<std::endl;

    std::cout << "-----------------------------------------" <<std::endl;

    //setting precision 
    std::cout<<std::setprecision(20);//注意 std::有控制输出内容的作用。
    std::cout <<"sizeof float :"<< number1<<std::endl;//precision :7
    std::cout <<"sizeof double :"<< number2<<std::endl;//precision 15
    std::cout <<"sizeof long double :"<< number3<<std::endl;//more than 15+



    std::cout << "-----------------------------------------" <<std::endl;
    //float problems :the precision is usually too limited
    float number4 {12121212121212.0f};//precision 8
    double number5 {12121212121212.0};// cant typing f or storged by float format
    std::cout << "number4 :"<<number4<<std::endl;
    std::cout << "number5 :"<<number5<<std::endl;



    //format       size  precision comment
    //float          4     7    
    //double         8     15 
    //long double    12   >double
}

*/



/*
//boolean
Tips! A byte can store 256 fifferent values
using it just to cover two states (T and F) is wasteful , especially for 
devices with hard memory constrains (like embedded devices)



int main (){

    bool red_light{false};
    bool green_light {true};

    if (red_light == true){
        std::cout << "stop!"<<std::endl;
    }else{
        std::cout<<"Go on !"<<std::endl;
    }

    if (green_light){
        std::cout<<"The green light is green!"<<std::endl;
    
    }else{
        std::cout <<"the light is nit green"<<std::endl;
    }

    //sizeof()
    std::cout<<"sizeof(bool): "<<sizeof(bool)<<std::endl;

    //Printing out a bool parameter
    //1--->> true
    // 0--->>false

    std::cout <<std::endl;
    std::cout<<"red_light: "<< red_light<<std::endl;
    std::cout<<"green_light: "<< green_light<<std::endl; 

    std::cout <<"-----------------------------------------------"<<std::endl;

    std::cout <<std::boolalpha;
    std::cout<<"red_light: "<< red_light<<std::endl;
    std::cout<<"green_light: "<< green_light<<std::endl; 

}

*/

/**/
//












