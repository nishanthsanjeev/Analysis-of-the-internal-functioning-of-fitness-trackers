#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;


int main(){

	ifstream ip("sample_data.csv");

	if(!ip.is_open())
		cout<<"Error! File open"<<endl;

	string lat;
	string longit;
	string time;
	string dist;
	string speed;
	string hrate;
	string cadence;
	string power;
	string elev;

	int upper,lower;	//A Move IQ Event occurs from time 'upper' to time 'lower'.
	upper = 0;
	lower = 0;


	int status, started;

	while(ip.good()) {

		getline(ip,lat,',');		//Accepting field values, each comma-separated.
		getline(ip,longit,',');
		getline(ip,time,',');
		getline(ip,dist,',');
		getline(ip,speed,',');
		getline(ip,hrate,',');
		getline(ip,cadence,',');
		getline(ip,power,',');
		getline(ip,elev,'\n');


		if(status == 0){

			if(started == 1){

					if(lower<=upper){
						printf("Time %d to time %d - Move IQ Event!",lower,upper);
						cout<<endl;
					}
					

			}

			lower = std::stoi(time);
			started = 1;

		}

		if((std::stoi( hrate )>=70) && (std::stoi( speed )>= 6)){	//Main logic behind my program.

			upper = std::stoi(time);
			status=1;

		}

		else
			status =0;

	}

	ip.close();

	return 0;

}