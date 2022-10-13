//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */

/*	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0}, */

    {"", "sb-bat_min",					60,		0},
    
    {"", "sb-time_min",					60,		0},
    
    {"", "sb-cal_min",					7200,	0},
    
    {"", "sb-volume_min",				0,      10},
    
    {"", "sb-bright_min",				0,      11},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
