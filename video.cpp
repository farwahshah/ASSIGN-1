#include<iostream>
using namespace std;
int main()
{
int min,fps,frames;
cout<<"Number of minutes: ";
cin >> min;
cout<<"Frames per second: ";
cin >> fps;
frames=fps*min*60;
cout<<"Total Number of frames: "<<frames;
return 0;
}