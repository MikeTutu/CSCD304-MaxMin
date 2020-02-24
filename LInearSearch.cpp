#include<iostream>
using namespace std;

int main() {
	
	int size, arr[size], key,i;
	
	cout<<"Enter size Of array:";
	cin>>size;
	
	for (int j=0;j<size;j++) {
		cout<<"Enter "<<j<<" element:";
		cin>>arr[j];
	}
	

	cout<<"Enter Key To Search in Array:";
	cin>>key;
	for (i=0;i<size;i++) {
		if(key==arr[i]) {
			cout<<"Key Found At Index Number :  "<<i<<endl;
			break;
		}
		
	}
	if(i!=size) {
		cout<<"Process terminatted"<<endl;
	} else {
		cout<<"KEY NOT FOUND in Array  ";
	}
	return 0;
}
