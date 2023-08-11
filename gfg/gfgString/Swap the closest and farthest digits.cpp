   void swapDigits(string &N1, string &N2)
        {
        	//code here.
        	int a=N2.length()-1;
        	int b=N1.length()-1;
        	swap(N2[0],N1[b]);
        	swap(N1[0],N2[a]);
        	
        }