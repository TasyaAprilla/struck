//Nonok Aisyah

int prec(char c)
{
    if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}


int main(){
	stack ms;
	int panjang,hasil;
	string a,p;
	getline(cin,a);
	panjang=a.length();
	for(int i=0;i<panjang;i++){
		if (a[i] >= '0' && a[i] <= '9'){
			p+=a[i];
		}
		else if (a[i] ==  '('){
			ms.push(a[i]);
		}
		else if (a[i] == ')'){
			while (ms.IsEmpty() != 1 && ms.Top() != '('){
				char c=ms.Top();
				ms.pop();
				p+=c;
			}
			if (ms.Top() == '('){
				ms.pop();
			}
		}
		if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/'){
			if (ms.IsEmpty() == 1 || ms.Top() == '('){
				ms.push(a[i]);
			}
		
		else{
			while (ms.IsEmpty() != 1 && ms.Top() != '(' && prec(a[i]) <= prec(ms.Top())){
				char c=ms.Top();
				ms.pop();
				p+=c;
			}
			ms.push(a[i]);
			}	
		}
	}
	while(ms.IsEmpty() != 1){
			char c=ms.Top();
			ms.pop();
			p+=c;
	}
