#include "std_lib_facilities.h"
int main()
{
 try 
 {
    {	cout << "1Success!\n";
	}
	{	cout << "2Success!\n";
	}
	{ cout << "3Success!\n";
	}
	{ cout << "4Success!\n";
	}
	{ string  res = "7"; 
	    vector<string> v(10);
		v[5]=res;
	    cout << "5Success!\n";
	}
	{ vector<int> v(10);
		v[5]=7;  
		if (v[5]==7) 
		cout << "6Success!\n";
	}
	{ string s="cond";
		if  (s=="cond") cout << "7Success!\n"; 
		else cout << "Fail!\n";
	}
	{ string c = "false"; 
		if (c=="false") cout << "8Success!\n"; 
		else cout << "Fail!\n";
	}
	{ string s = "ape"; 
		bool c = "fool"<s; 
		if (!c) cout << "9Success!\n";
	}
	{ string s = "ape"; 
		 if (s=="ape") cout << "10Success!\n";
	}
	{ string s = "fool"; 
		 if (s=="fool") cout << "11Success!\n";
	}
	{ string s = "ape";
		 if (s!="fool") cout << "12Success!\n";
	}
	{ vector<char> v(5); 
		 for (int i=0; i<v.size(); ++i); 
		 cout << "13Success!\n";
	}
	{ vector<char> v(9); 
		 for (int i=0; i<=v.size(); ++i); 
		 cout << "14Success!\n";
	}
	{ string s = "15Success!\n"; 
		 for (int i=0; i<10; ++i) 
		 cout << s[i];
	}
	{ if (true)
		 cout << "16Success!\n"; 
		 else
		 cout << "Fail!\n";
	}
	{ int x = 2000; 
		 int c = x; 
		 if (c==2000) 
		 cout << "17Success!\n";
	}
	{ string s = "18Success!\n"; 
		 for (int i=0; i<10; ++i)
		 cout << s[i];
	}
	{ vector <int> v(5); 
		 for (int i=0; i<=v.size(); ++i) ; 
		 cout << "19Success!\n";
	}
	{ int i=0;
		 int j = 9; 
		 while (i<10) ++i; 
		 if (j<i) 
		 cout << "20Success!\n";
	}
	{ double x = 2;
	    double d = 5/x;
	    if (d==x+0.5)
	    cout << "21Success!\n";
	}
	{ string s = "22Success!\n";
		 for (int i=0; i<=10; ++i)
		 cout << s[i];
	}
	{ int i=1;
	 	int j=0;
	    while (i<10) ++i;
	    if (j<i)
        cout << "23Success!\n";
	}
	{ int x = 4;
	    double d = 5/(x-2);
	    if (d=x-2+0.5)
	    cout << "24Success!\n";
	}
	{ cout << "25Success!\n";
	}
          keep_window_open();
          return 0;
 }
 catch (exception& e)
	{
	
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
	}
 catch (...) 
	{
	
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
	}
}

