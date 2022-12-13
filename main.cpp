#include <iostream>
#include<string>
#include "Time.h"

using namespace std ;


int main(){
	Time t1(10,34,50);
	Time t2(3,34,34);
	Time t3; // initialisation par 0
	t1.afficher();// 10:34:50
	t2.afficher();// 03:34:34
	t3.addTime(t1,t2);
	t3.afficher();// 14:09:24
	return 0;
}
