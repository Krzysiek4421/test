
#ifdef VERSION_STRING
	#define VER     " "VERSION_STRING
#else
	#define VER     ""
#endif

#ifdef ENABLE_FEAT_F4HWN
	const char Version[]      = AUTHOR_STRING_2 " " VERSION_STRING_2;
	const char Based[]         = "";
	const char Credits[]      = AUTHOR_STRING_1 " " VERSION_STRING_1;
#else
	const char Version[]      = AUTHOR_STRING VER;
#endif

const char UART_Version[] = "K5\r\n";
