// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef KEYLESSMAP_H
#define KEYLESSMAP_H


#import <Foundation/Foundation.h>

#import "ComAppleContextkitUtilKeylessMapBase.h"

@interface KeylessMap : NSObject {
    ComAppleContextkitUtilKeylessMapBase *_impl;
    _opaque_pthread_mutex_t _lock;
}




-(id)initWithImpl:(id)arg0 ;
-(id)objectsForKey:(id)arg0 intoSet:(id)arg1 keepWalkingOut:(*char)arg2 ;
-(id)objectsForKey:(id)arg0 ;
-(void)dealloc;
+(id)keylessMapForDirectory:(id)arg0 fileName:(id)arg1 ;


@end


#endif