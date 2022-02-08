// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ANDROIDUTILLRUCACHE_H
#define ANDROIDUTILLRUCACHE_H


#import <Foundation/Foundation.h>

#import "JavaUtilLinkedHashMap.h"

@interface AndroidUtilLruCache : NSObject {
    JavaUtilLinkedHashMap *map_;
    int size_;
    int maxSize_;
    int putCount_;
    int createCount_;
    int evictionCount_;
    int hitCount_;
    int missCount_;
}




-(id)initWithInt:(int)arg0 ;
-(void)resizeWithInt:(int)arg0 ;
-(id)getWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(void)trimToSizeWithInt:(int)arg0 ;
-(id)removeWithId:(id)arg0 ;
-(void)entryRemovedWithBoolean:(BOOL)arg0 withId:(id)arg1 withId:(id)arg2 withId:(id)arg3 ;
-(id)createWithId:(id)arg0 ;
-(int)safeSizeOfWithId:(id)arg0 withId:(id)arg1 ;
-(int)sizeOfWithId:(id)arg0 withId:(id)arg1 ;
-(void)evictAll;
-(int)size;
-(int)maxSize;
-(int)hitCount;
-(int)missCount;
-(int)createCount;
-(int)putCount;
-(int)evictionCount;
-(id)snapshot;
-(id)description;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif