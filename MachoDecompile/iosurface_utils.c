#include <stdio.h>
#include <errno.h>
#include <pthread.h>
#include <sys/time.h>
#include <unistd.h>

#include <libkern/OSAtomic.h>
#include <mach/mach_error.h>
#include <stdlib.h>
#include <stdio.h>
#include <mach/mach.h>
#include <IOKit/IOKitLib.h>
#include <IOKit/iokitmig.h>
#include <IOKit/IOKitLib.h>
#include <CoreFoundation/CoreFoundation.h>
#include <stdio.h>
#include <stdlib.h>
#include <xpc/xpc.h>
#include <stdio.h>
#include <stdlib.h>
#include <xpc/xpc.h>
#include <CoreFoundation/CoreFoundation.h>

/*
 * Function name: 	enumerate_clients
 * Parameter        const char name = "IOServiceName, eg IOService, etc"
 * Description:		Lists the running IOService Clients
 * Returns:			io_connect_t 
 */


io_connect_t enumerate_clients(const char* name){
    //kern_return_t kr;
    CFDictionaryRef match;
    io_service_t service = MACH_PORT_NULL;
    // Probs doesnt need this?
    if(service == MACH_PORT_NULL){
        match = IOServiceMatching(name);
        io_iterator_t iterator;
        IOServiceGetMatchingServices(kIOMasterPortDefault, match, &iterator);
        while ((service = IOIteratorNext(iterator)) != IO_OBJECT_NULL) {
            io_name_t object_name;
            IOObjectGetClass(service, object_name);
            fprintf(stderr, "Object Name: %s\n", object_name);
                 }
         IOObjectRelease(iterator);
         IOObjectRelease(service);

    }
    return 1;
}

/*
 * Function name: 	iosurface_utils_get_connection
 * Description:		Obtains a connection to an IOSurfaceRoot object.
 * Returns:			kern_return_t from the kernel. Accepts also an output parameter for an io_connect_t
 */
kern_return_t iosurface_utils_get_connection(const char* name) {
    static void * g_data = NULL;
	kern_return_t ret = KERN_SUCCESS;
	io_connect_t connection = 0;
	mach_port_t master_port = 0;
	io_iterator_t itr = 0;
	io_service_t service = 0;



	ret = host_get_io_master(mach_host_self(), &master_port);
	if (KERN_SUCCESS != ret)
	{
		fprintf(stderr,"Failed getting master port");
	    exit(-1);
	}

	ret = IOServiceGetMatchingServices(master_port, IOServiceMatching(name), &itr);
	if (KERN_SUCCESS != ret)
	{
		fprintf(stderr, "Failed getting matching services: %s", mach_error_string(ret));
		exit(-1);
	}

	while(IOIteratorIsValid(itr) && (service = IOIteratorNext(itr))) {
        io_name_t object_name;
        IOObjectGetClass(service, object_name);
        fprintf(stderr, "Openining Name: %s\n", object_name);

		ret = IOServiceOpen(service, mach_task_self(), 0, &connection);
		if (KERN_SUCCESS != ret)
		{
           // fprintf(stderr, "Failed: %s\n", mach_error_string(ret));
			continue;
		} else{
            fprintf(stderr, "\n[+]Got RET Returned 0 = KERN_SUCCESS....%s\n", object_name);

        }
	}

	if (NULL == g_data)
	{
		g_data = malloc(0x1000*2 - 10);
		if (g_data)
		{
			memset(g_data, 0x41, (0x1000*2) - 10);
		}
	}

	return 0;
}
/* Both functions basically do the same thing, get_connections is better 
for setup of exploitation*/
