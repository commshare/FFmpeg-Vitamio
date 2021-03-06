#ifndef AVFORMAT_CACHE_H
#define AVFORMAT_CACHE_H

enum CACHE_TYPE {
	CACHE_NOT_AVAILABLE = 1,
	CACHE_START,
	CACHE_UPDATE,
	CACHE_SPEED,
	CACHE_COMPLETE,
};

enum CACHE_INFO {
  CACHE_INFO_NO_SPACE = 1,
  CACHE_INFO_STREAM_NOT_SUPPORT = 2,
  CACHE_INFO_CONNECT_FAILED = 3,
};

#endif
