#ifndef INCLUDED_CHAPTERS
#define INCLUDED_CHAPTERS

#include <string>
class Chapters
{
public:

	Chapters();
	~Chapters();

	// Might be shortened
	static enum CurrentChapter
	{
		FIRST	= 0,
		SECOND	= 1,
		THIRD	= 2
	};
	static enum CurrentPart
	{
		FIRST_PART	= 0,
		SECOND_PART = 1,
		THIRD_PART	= 2,
		FOURTH_PART	= 3
	};		  

	// Basicly just increments the values.
	static void				progressChapter();
	static void				progressPart();

	static CurrentChapter	getChapter();
	static CurrentPart		getPart();
	static std::string		printPart();
	static std::string		printChapter();

private:
	static CurrentChapter	mChapter;
	static CurrentPart		mPart;
	static int				currentPart;
	static int				currentChapter;
};

#endif