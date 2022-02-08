// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREUTILBASICLRUCACHE_H
#define LIBCOREUTILBASICLRUCACHE_H


#import <Foundation/Foundation.h>

#import "JavaUtilLinkedHashMap.h"

@interface LibcoreUtilBasicLruCache : NSObject {
    JavaUtilLinkedHashMap *map_;
    int maxSize_;
}




-(id)initWithInt:(int)arg0 ;
-(id)getWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(void)trimToSizeWithInt:(int)arg0 ;
-(void)entryEvictedWithId:(id)arg0 withId:(id)arg1 ;
-(id)createWithId:(id)arg0 ;
-(id)snapshot;
-(void)evictAll;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif