#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <map>
using namespace std;int mx=2147483647;
template <typename k>
k binary(k a[],int n,k x){
	int i=0,j=n-1,mid=(j-i+1)/2;
	while(i<=j){
		if(a[mid]==x){return x;
		}
		if(a[mid]>x){mid--;j=mid;mid=(j-i+1)/2+i;
		}
		else{mid++;i=mid;mid=(j-i+1)/2+i;
		}
	}return -1;
}
int atoi(const string a) {string A="";if(a[0]==' '){int ll=0,v=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=' ')ll=1;
        if(ll){A+=a[i];v++;}}}
        
    else{for(int i=0;i<a.length();i++){if(a[i]=='+')continue;A+=a[i];}}//cout<<A;
    
    long long k=0,ok=0,neg=(A[0]=='-'&&isdigit(A[1]));int n=A.length();
if((!isdigit(A[1])&&A[0]=='-')||(!isdigit(A[0])&&A[0]!='-'))return 0;

    for(int i=0;i<n;i++){if(isdigit(A[i])){ok++;}
    if(ok){
        if(!isdigit(A[i]))break ;
        else{k+=(int)A[i]-48;k*=10;}}}
    
    ok-=A[0]=='-';
    if(ok>10){return mx*(-2*neg+1)-neg;}
    if(ok==10){k/=10;
      if(k<2147483648)return k*(-2*neg+1);
      else return mx*(-2*neg+1)-neg;
    }return (k/10)*(-2*neg+1);
}

vector<string> ssplit(string s){
	int n=s.length();string k="";vector<string> v;
	for(int i=0;i<n;i++){
		if(s[i]!=' '&& i!=n-1){
			k+=s[i];
		}
		else{if(s[i]!=' ')k+=s[i];v.push_back(k);k="";
		}
		
	}return v;
}
vector<int> split(string s){
	int n=s.length();int k=0;vector<int> v;
	for(int i=0;i<n;i++){
		if(s[i]!=' '&& i!=n-1){
			k*=10;k+=(char)s[i]-48;
		}
		else{v.push_back(k);k=0;
		}
		
	}return v;
}
typedef long long ll;
void swp(int* a, int* b,int *c,int *d)
{
 int temp = *a;*a = *b; *b = temp;
 temp = *c;*c = *d; *d = temp;
}
 
void hp(int arr[],int b[], int N, int i){
    int largest = i;
 
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
    if (largest != i) {
 
        swp(&arr[i], &arr[largest],&b[i],&b[largest]);
        hp(arr,b, N, largest);
    }
}
void heap(int arr[],int b[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
 
        hp(arr,b, N, i);
    for (int i = N - 1; i >= 0; i--) {
        swp(&arr[0], &arr[i],&b[0],&b[i]);
        hp(arr,b, i, 0);
    }
}

void swap(int* a, int* b)
{
 int temp = *a;*a = *b; *b = temp;
}
 
void heapify(int arr[], int N, int i){
    int largest = i;
 
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }
}
void heapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
 
        heapify(arr, N, i);
    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void fill(int a[],int n){
for(int i=0;i<n;i++){
cin>>a[i];
}
}
void prt(int a[],int n){
for(int i=0;i<n;i++){
cout<<a[i];
}
}
int mina(int a[],int n){int m=1000000001;
for(int i=0;i<n;i++){
	if(a[i]<m){m=a[i];
	}
}return m;
}
int maxa(int a[],int n){int m=0;
for(int i=0;i<n;i++){
	if(a[i]>m){m=a[i];
	}
}return m;
}
int max(int a,int n){
	return (a>n)?a:n;
}
int min(int a,int n){
	return (a<n)?a:n;
}
vector<int> primes(int n){
	map<int,int> marked;
	vector <int> p;int k=0;
	for(int i=2;i<n;i++){if(marked[i])continue;int ok=0;
	k+=i;
	while(k<=n){marked[k]++;k+=i;ok=1;
	}p.push_back(i);if (!ok)break;
	k=0;
		
	}return p;
}
vector<vector<int>> factt(int n){
	map<int,int> m;map<int,vector<int>>fac;vector<vector<int>>v;
	for(int i=2;i<=n;i++){
		if(m[i])continue;
		int k=i;
		while(k<=n){
			m[k]++;
			fac[k].push_back(i);
			k+=i;
		}
	}
	for(int i=2;i<=n;i++){
		fac[i].push_back(1);
	v.push_back(fac[i]);
	}
	return v;
}
map<int,int> factt2(int n){
	vector<int>v=primes(n);map<int,int>pf;int k=0;
	while(n!=1){
		 if(n%(v[v.size()-k-1]))k++;
		 else {
		 pf[v[v.size()-k-1]]++;n/=v[v.size()-k-1];}
	}pf[1]++;
	return pf;
}
template<typename t>
ll sum(t a[],int n){ll v=0;
	for(int i=0;i<n;i++)
		v+=a[i];
	return v;
	
}
template<typename t>
map<t,int> mp(t a[],int n){map<t,int>m;
	for(int i=0;i<n;i++)
		m[a[i]]++;
	return m;
	
}
int main(){
int t,n,k;ll ans;ans=0;int m,s;
cin>>m>>s;
if(m==1&&s<10){
	cout<<s<<" "<<s;
}
else if(9*m<s||!s){
	cout<<-1<<" "<<-1;
}
else{
	int nines=s/9,rest=s%9;n=nines;
	string nb="";m-=nines;
	while(nines-->0){
		nb.push_back('9');
	}if(m>0)nb.push_back((char)(rest+48));m--;int z=m+(!rest);
	while(m-->0){
		nb.push_back('0');
	}string sml="";
	if(nb[nb.length()-1]=='0'){sml+="1";z--;
	if(rest==1&&!n){sml=nb;goto e;
	}
		if(rest--){while(z-->0){
			sml='0'+sml;
		}string aux="";aux.push_back((char)(rest+48));sml=aux+sml;
		while(n-->0)sml="9"+sml;
		}
		else{
		while(z-->0)sml="0"+sml;
		sml="8"+sml;n--;
		while(n-->0)sml="9"+sml;
		}
		
	}
	else{sml=nb;
		
	}

	for(int i=0;i<sml.length()/2;i++){
	char c=sml[sml.length()-i-1];
	sml[sml.length()-i-1]=sml[i];
	sml[i]=c;
	}	e:cout<<sml<<" "<<nb;
}cout<<endl;


}


 
