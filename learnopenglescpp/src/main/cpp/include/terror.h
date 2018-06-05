
#ifndef __TERROR_H__
#define __TERROR_H__



#define TERR_NONE						0
#define TOK								0



#define TERR_BASIC_BASE					0X0001
#define TERR_UNKNOWN					TERR_BASIC_BASE
#define TERR_INVALID_PARAM				(TERR_BASIC_BASE+1)
#define TERR_UNSUPPORTED				(TERR_BASIC_BASE+2)
#define TERR_NO_MEMORY					(TERR_BASIC_BASE+3)
#define TERR_BAD_STATE					(TERR_BASIC_BASE+4)
#define TERR_USER_CANCEL				(TERR_BASIC_BASE+5)
#define TERR_EXPIRED					(TERR_BASIC_BASE+6)
#define TERR_USER_PAUSE					(TERR_BASIC_BASE+7)
 



#define TERR_FILE_BASE					0X1000
#define TERR_FILE_GENERAL				TERR_FILE_BASE
#define TERR_FILE_NOT_EXIST				(TERR_FILE_BASE+1)
#define TERR_FILE_EXIST					(TERR_FILE_BASE+2)
#define TERR_FILE_EOF					(TERR_FILE_BASE+3)
#define TERR_FILE_FULL					(TERR_FILE_BASE+4)
#define TERR_FILE_SEEK					(TERR_FILE_BASE+5)
#define TERR_FILE_READ					(TERR_FILE_BASE+6)
#define TERR_FILE_WRITE					(TERR_FILE_BASE+7)
#define TERR_FILE_OPEN					(TERR_FILE_BASE+8)
#define TERR_FILE_DELETE				(TERR_FILE_BASE+9)
#define TERR_FILE_RENAME				(TERR_FILE_BASE+10)




#endif
 