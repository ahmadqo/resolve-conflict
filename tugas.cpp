#include <stdio.h>
#include <iostream.h>
#include <conio.h>
void baca_data(char A[],int n){
	int i;
	for (i=0;i<n;i++) {
		cout<<"Data ke-"<<(i+1)<<" = ";
		cin>>A[i]; }
}
void cetak_data(char A[],int n){
	int i;
	for (i=0;i<n;i++)
	cout<<A[i]<<" "; cout<<endl;
}
void insertion_sort(char A[],int n){
	int k,j,temp;
	for (k=0;k<n;k++) {
		temp=A[k];
		j=k-1;
		while ((temp<=A[j]) && (j>0)) {
			A[j+1] = A[j];
			j=j-1; }
		if (temp>=A[j]) A[j+1]=temp;
		else {
			A[j+1] = A[j];
			A[j] = temp; }
	}
}
void main(){
	char data[10];
	int n;
	cout<<"IKI RA PENTING, MING GO MUNCULKE NILAI : ";
	cin>>n;
	baca_data(data,n);
	cetak_data(data,n);
	insertion_sort(data,n);
	cetak_data(data,n);
	getch(); }
