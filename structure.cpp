#include <iostream>
#include <iomanip>
#include <cstdio>

//===========without typedef===========
// struct student{
//     int sid;
//     const char* name;
//     float marks;
// };
// int main(){
//     struct student s1;
//=========creating json object============
//     s1={
//         sid:1,
//         name:"shailesh",
//         marks:87.23,
//     };
//=========without json object============
//  s1.sid=1;
//  s1.name="shailesh";
//  s1.marks=87.23;

//         std::cout<<s1.sid<<std::endl<<s1.name<<std::endl<<s1.marks;
//     return 0;
// }

//===========with typedef===========
typedef struct student
{
    int sid;
    const char *name;
    float marks;
} stud;
int main()
{
    stud s1;
    s1 = {
        sid : 1,
        name : "shailesh",
        marks : 87.23f,
    };

    // ======without absolute value========
    std::cout << std::endl
              << "Without using abs function from csdtio library but using setprecision manipulator" << std::endl;
    std::cout << s1.sid << std::endl
              << s1.name << std::endl
              << std::setprecision(9) << s1.marks <<"    "<<sizeof(s1.marks)<< std::endl;

    // ======with absolute value========
    std::cout << std::endl
              << "Using abs function from csdtio library" << std::endl;
    std::cout << s1.sid << std::endl
              << s1.name << std::endl
              << abs(s1.marks);
    return 0;
}