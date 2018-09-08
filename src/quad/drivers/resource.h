#ifndef __RESOURCE_H
#define __RESOURCE_H

typedef enum {
	OWNER_FREE			= 0,
	OWNER_LED,				// 1
	OWNER_BUTTON,			// 2
	OWNER_SYSTEM,			// 3
	OWNER_TOTAL_COUNT
}resourceOwner_e;

#define RESOURCE_INDEX(x)		((x) + 1)

#endif	// __RESOURCE_H
