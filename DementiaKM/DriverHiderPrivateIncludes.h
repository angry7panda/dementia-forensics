#ifndef __DRIVERHIDERPRIVATEINCLUDES_H_VERSION__
#define __DRIVERHIDERPRIVATEINCLUDES_H_VERSION__ 100

#define TAG_DRIVER_NAME_LOOKASIDE ('LnrD')
#define TAG_DRIVER_NAME ('mnrD')

typedef struct _DRIVER_NAME_ENTRY
{
	LIST_ENTRY	ListEntry;
	UNICODE_STRING uszDriverName;
} DRIVER_NAME_ENTRY, *PDRIVER_NAME_ENTRY;

#endif // __DRIVERHIDERPRIVATEINCLUDES_H_VERSION__