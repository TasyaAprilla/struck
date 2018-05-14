cout<<"Bentuk Postfix :"<<p<<endl;
	
	for(int i=0;i<=panjang;i++){
	if (p[i] >= '0' && p[i] <= '9'){
			ms.push(p[i]);
	}
	if( p[i]=='+' || p[i]=='-' || p[i]=='*' || p[i]=='/' ){
		int A=ms.Top()-'0';
		ms.pop();
		int B=ms.Top()-'0';
		ms.pop();
		if(p[i]=='+'){
			hasil=B+A;
			char tmphasil=hasil+'0';
		
			ms.push(tmphasil);
		}
		else if(p[i]=='-'){
			hasil=B-A;
			char tmphasil=hasil+'0';
		
			ms.push(tmphasil);
			
		}
		else if(p[i]=='*'){
			hasil=B*A;
			char tmphasil=hasil+'0';
			
			ms.push(tmphasil);
		}
		else if(p[i]=='/'){
			hasil=B/A;
			char tmphasil=hasil+'0';
			
			ms.push(tmphasil);
		}
		
	}

	}
	
	char charhasil=ms.Top();
	int hasilakhir=charhasil-'0';
	cout<<"Hasil Akhir : "<<hasilakhir<<endl;
	

}
