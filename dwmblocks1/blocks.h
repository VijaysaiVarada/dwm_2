//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/


	{" ",	 "dwmbattery", 	 10,   	 },
	{"",	 "dwmcpu",   	 5,    },
	{" ",	 "dwmmemory",	 10,    },
/*	{" ",	 "dwmnet",   	 5,    },
	{" ",	 "dwmtemp",    	 10,    },
*/	{"",	 "dwmdisk",    	 3600,   },
   	{" ",	 "dwmclock",   	 60,    },
   	{"",	 "dwmupdates",	 3600, },
   	{"", 	 "dwmvol", 	 0, 10 },
	{" ",	 "dwmweather",	 100,  },

};//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "| ";
static unsigned int delimLen =2;
