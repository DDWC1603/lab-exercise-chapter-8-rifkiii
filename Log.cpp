#include <iostream>
using namespace std;

class log
{
	
 public:
 	const int loglevelerror = 0;
 	const int loglevelwarning = 1;
 	const int loglevelinfo = 2;
 	
private:
	int m_loglevel = loglevelinfo;

public:
	void setlevel (int level)
	{
		m_loglevel = level;
	}
	
	void error (const char* message)
	{
	if(m_loglevel>=loglevelerror)
	cout<<"[error]:"<<message<<endl;
		
	}
	
	void warn (const char* message)
	{
		if(m_loglevel>=loglevelwarning)
		cout<<"[warning]:"<<message<<endl;
	}
	void info(const char* message)
	{
		if(m_loglevel>=loglevelinfo)
		cout<<"[info]:"<<message<<endl;
	}
};

int main()
{
	log olog;
	olog.setlevel(olog.loglevelwarning);
	olog.warn("Hello!");
	
	std::cin.get();

}
	
 
