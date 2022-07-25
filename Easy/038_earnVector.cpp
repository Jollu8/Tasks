#include <iostream>
#include <cmath>
#include <ctime>

struct Coordinate
{
    float x=0;
    float y=0;
};

void initialization (Coordinate &a, Coordinate &b)
{
    a.x=rand()%60-30;
    a.y=rand()%60-30;
    b.x=rand()%60-30;
    b.y=rand()%60-30;
    std::cout<<"First vector has foolowing coordinates "<<a.x<<" "<<a.y<<std::endl;
    std::cout<<"Second vector has foolowing coordinates "<<b.x<<" "<<b.y<<std::endl;
}

Coordinate sum (Coordinate &a, Coordinate &b)
{
    Coordinate v;
    v.x=a.x+b.x;
    v.y=a.y+b.y;
    return v;
}

Coordinate minus(Coordinate &a, Coordinate &b)
{
    Coordinate v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    return v;
}

Coordinate scale(Coordinate &a, int count)
{
    Coordinate v;
    v.x=a.x * count;
    v.y=a.y * count;
    return v;
}

int length (Coordinate &a)
{
    int temp=sqrt(pow(a.x, 2)+pow(a.y, 2));
    return temp;
}

Coordinate normalize (Coordinate &a)
{
    Coordinate v;
    v.x=(a.x)/sqrt(pow(a.x, 2)+pow(a.y, 2));
    v.y=(a.y)/sqrt(pow(a.x, 2)+pow(a.y, 2));
    return v;
}

int main() {
    std::srand(std::time(0));
    int buffer=0;
    Coordinate arr;
    Coordinate foo[2];
    initialization (foo[0], foo[1]);
    std::string answer;
    std::cout<<"What you want to do?"<<std::endl;
    std::cin>>answer;
    if (answer=="Summary")
    {
        arr=sum(foo[0], foo[1]);
        std::cout<<"New vector has following parameters:"<<std::endl;
        std::cout<<"X: "<< arr.x << std::endl;
        std::cout<<"Y: "<< arr.y << std::endl;
    }
    else if (answer=="Minus")
    {
        arr=minus(foo[0], foo[1]);
        std::cout<<"New vector has following parameters:"<<std::endl;
        std::cout<<"X: "<< arr.x << std::endl;
        std::cout<<"Y: "<< arr.y << std::endl;
    }
    else if (answer=="Length")
    {
        buffer=length (foo[0]);
        std::cout<<"Length of 1 vector is "<<buffer<<std::endl;
        buffer=length (foo[1]);
        std::cout<<"Length of 2 vector is "<<buffer<<std::endl;
    }
    else if (answer=="Normalize")
    {
        arr=normalize (foo[0]);
        std::cout<<"First normalize vector is "<<std::endl;
        std::cout<<"X: "<< arr.x << std::endl;
        std::cout<<"Y: "<< arr.y << std::endl;
        arr=normalize (foo[1]);
        std::cout<<"Second normalize vector is "<<std::endl;
        std::cout<<"X: "<< arr.x << std::endl;
        std::cout<<"Y: "<< arr.y << std::endl;
    }
    else if (answer=="Scale")
    {
        int count;
        std::cout<<"How much?"<<std::endl;
        std::cin>>count;
        arr=scale(foo[0], count);
        std::cout<<"First new vector has following parameters:"<<std::endl;
        std::cout<<"X: "<< arr.x << std::endl;
        std::cout<<"Y: "<< arr.y << std::endl;
        arr = scale(foo[1], count);
        std::cout<<"Second new vector has following parameters:"<<std::endl;
        std::cout<<"X: "<< arr.x << std::endl;
        std::cout<<"Y: "<< arr.y << std::endl;
    }
    else std::cout<<"Wrong command"<<std::endl;
}
