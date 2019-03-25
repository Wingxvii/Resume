#include <string>
/*
Name: John Wang
Date: 3/25/19
Desc: My Resume
*/
class JohnWang {
private:
	std::string _phoneNumber	= "6478950519";
	std::string _email			= "john.wang@uoit.net";
	std::string _website		= "www.wangjohn.net";
	std::string _socialMedia	= "@johnwanggd";
	std::string _linkedin		= "linkedin.com/in/john-wang-67293a14b";

public:
	JohnWang() {};
	~JohnWang() {};
	
	std::string summary =
		"Second Year Game Development and Entrepreneurship student at University of Ontario Institute of Technology. ";

	std::string getAwards(unsigned dateYear, unsigned dateMonth);
	std::string getWorkExperience(unsigned dateYear, unsigned dateMonth);
	std::string getEducation(unsigned dateYear, unsigned dateMonth);

	//array of my skills
	std::string skills[12] =
	{	"C++, C# and Java",			"Version Control",		"OpenGL & GLSL",		"Client-Server Architecture",
		"OOP and Algorithms",		"User Experience",		"Cocos-2d",				"Data Profiling and Analysis",
		"Computer Architecture",	"Research",				"Unity",				"Interdisciplinary Articulation"
	};
};

//returns my awards
std::string JohnWang::getAwards(unsigned dateYear, unsigned dateMonth)
{
	if (dateYear == 2018 && dateMonth == 4) { 
		return "Best First Year Game - UOIT Gamescon"; 
	}else if ((dateYear == 2018 && dateMonth == 3) || (dateYear == 2019 && dateMonth == 3)) {
		return "Level Up Showcase Selection - University of Ontario Institute of Technology "; 
	}else if (dateYear == 2016 && dateMonth == 6) { 
		return "Co-operative Education Award - Dr.Norman Bethune C.I "; 
	}
	return std::string();

}

//returns my work experience
std::string JohnWang::getWorkExperience(unsigned dateYear, unsigned dateMonth)
{
	if ((dateYear >= 2018 && dateMonth >= 10) && (dateYear <= 2019 && dateMonth <= 4)) {
		return "Research Associate - University of Ontario Institute of Technology";
		//Building an observational system toolbox for video analysis using OpenCV and QT.
	}else if ((dateYear >= 2013 && dateMonth >= 10) || (dateYear <= 2017 && dateMonth <= 5)) {
		return "Facilitator - Steeles L'Amoreaux Youth Empowerment";
		//Led event planning groups for community events, created and proposed grant proposals, 
		//designed posters and social media graphics, led a team for media creation, attended and 
		//hosted various workshops for the community on topics such as leadership and led initiatives 
		//for various topics such as helping the homeless, mental health, substance abuse etc. 
	}
	return std::string();
}

//returns my education
std::string JohnWang::getEducation(unsigned dateYear, unsigned dateMonth)
{
	float gradeAverage;
	if ((dateYear >= 2017 && dateMonth >= 9) && (dateYear <= 2021 && dateMonth <= 4)) {
		return "Bachelor of Information Technology - University of Ontario Institute of Technology";
		gradeAverage = 0.95f;	//4.08 GPA
	}
	else if ((dateYear >= 2013 && dateMonth >= 9) || (dateYear <= 2017 && dateMonth <= 6)) {
		return "High School Diploma - Dr Norman Bethune Collegiate Institute";
		gradeAverage = 0.87f;	//87% Average 
	}
	return std::string();
}
