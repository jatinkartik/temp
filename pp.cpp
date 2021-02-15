include<stdio.h>

int coin(int totalrupees, int X, int Y, int Z){

	float one = 0, fifty = 0,twentyfive = 0,result = 0,total = 0;
	one = X * 1;
	fifty = ((Y * 1)/2.0);
	twentyfive = ((Z * 1)/ 4.0);
	total = one + fifty + twentyfive;
	result = ((totalrupees)/total);
	return result;
}


int main() 
{ 
    int totalRupees = 1800; 
    int X = 1, Y = 2, Z = 4; 
  
    int Rupees = coin(totalRupees,X,Y,Z); 
  
    cout << "1 rupess coins = " << Rupees * 1 << endl; 
    cout << "50 paisa coins = " << Rupees * 2 << endl; 
    cout << "25 paisa coins = " << Rupees * 4 << endl; 
  
    return 0; 
}
