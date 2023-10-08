#include <iostream>
#include<cmath>


using namespace std;
string pyramidVolume(int length,int width,int height,string outputUnit);

main(){

int length,width,height;
string outputUnit;
cout << "Enter the length of the pyramid (in meters): ";
cin>> length;
cout << "Enter the width of the pyramid (in meters): ";
cin>> width;
cout << "Enter the height of the pyramid (in meters): ";
cin>> height;
cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
cin>> outputUnit;

string pyramidvolum= pyramidVolume(length,width,height,outputUnit);
cout<< pyramidvolum;
}

		string pyramidVolume(int length,int width,int height,string outputUnit){
		string outputVolume;
		float convert;
	if(outputUnit=="meters"){
	float volume=(length*width*height)/3;
	return outputVolume="The volume of the pyramid is: "+to_string(volume)+" cubic "+ outputUnit;
				}
	if(outputUnit=="kilometers"){

	float volume=(length*width*height)/3;

	convert=pow(1000,3);

	volume=volume/convert;
	return outputVolume="The volume of the pyramid is: "+to_string(volume)+" cubic "+ outputUnit;
					}
	if(outputUnit=="millimeters"){
	float volume=(length*width*height)/3;
	float convert=pow(1000,3);
	volume=volume*convert;
	return outputVolume="The volume of the pyramid is: "+to_string(volume)+" cubic "+ outputUnit;
					}
	if(outputUnit=="centimeters"){
	float volume=(length*width*height)/3;
	volume=volume*pow(100,3);

	return outputVolume="The volume of the pyramid is: "+to_string(volume)+" cubic "+ outputUnit;
	}


}