#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int vp,vd,f,t,c;
	cin >> vp >> vd >> t >> f >>c;

	int count =0;

	float dis=0;
	float time = t;
	dis=vp*t;
	float d=0;
	if(vd <= vp) count =0;
	else
	{
		while((int)dis < c)
		{
		//	cout << dis << endl;
			d=dis;
			dis += (vp*dis)/(vd-vp);
		//	cout << dis << endl;
			if((int)dis>= c)
				break;
			count++;
			dis += (vp*d)/(vd-vp);
			if((int)dis>= c)
				break;
			dis += vp*f;
		//	cout << dis << endl;
			if((int)dis >= c)
				break;
			
		}
	}
	
	cout << count << endl;
	return 0;
}