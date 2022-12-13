#ifndef TIME_H
#define TIME_H

class Time {
	private :
		int hours ;
		int minutes;
		int secondes ;
		
	public:
		Time();
		Time(int h,int m,int s);
		void afficher();
		int getHours();
		int getMin();
		int getSec();
		int setHours(int h);
		int setMin(int m);
		int setSec(int s);
		void addTime(Time t1,Time t2);
	 
	
};
#endif
