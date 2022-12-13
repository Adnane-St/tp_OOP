#include "Time.h"
#include <iostream>
#include<string>

using namespace std;
Time::Time(){
	hours = 0;
	minutes = 0;
	secondes = 0;
}
Time::Time(int h,int m,int s){
	if(m >= 60){
		h = h + (m / 60);
		m = m % 60;
	}if(s >= 60){
		m = m + (s / 60);
		s = s % 60;
	}
	
	hours = h;
	minutes = m;
	secondes = s;
}
void Time::afficher(){
	cout <<(hours < 10? "0":"")<< hours << ":" << (minutes < 10? "0":"" )<< minutes << ":" << (secondes < 10? "0":"" )<< secondes << endl;
}

// Geters
int Time::getHours(){
	return hours;
}
int Time::getMin(){
	return minutes;
}
int Time::getSec(){
	return secondes;
}

// Seters
int Time::setHours(int h){
	hours = h;
}
int Time::setMin(int m){
	minutes = m; 
}
int Time::setSec(int s){
	secondes = s;
}


void Time::addTime(Time time1, Time time2){
	int h,m,s;
	h = time1.getHours() + time2.getHours();
	m = time1.getMin() + time2.getMin();
	s = time1.getSec() + time2.getSec();
	
	// Correction des valeur de minutes et secondes
	if(m >= 60){
		h = h + (m / 60);
		m = m % 60;
	}if(s >= 60){
		m = m + (s / 60);
		s = s % 60;
	}
	hours = h;
	minutes = m;
	secondes = s;
}
