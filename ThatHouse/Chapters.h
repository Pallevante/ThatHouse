#pragma once
class Chapters
{
public:
	Chapters();
	~Chapters();

	// Might be shortened
	static enum CurrentChapter{
		FIRST	= 0,
		SECOND	= 1,
		THIRD	= 2,
		FOURTH	= 3
	};
	static enum CurrentPart{
		FIRST	= 0,
		SECOND	= 1,
		THIRD	= 2,
		FOURTH	= 3
	};

	// Basicly just increments the values.
	static void				progressChapter();
	static void				progressPart();

	static CurrentChapter	getChapter();
	static CurrentPart		getPart();
private:
	static CurrentChapter	mChapter;
	static CurrentPart		mPart;
	static int				currentPart;
	static int				currentChapter;
};

