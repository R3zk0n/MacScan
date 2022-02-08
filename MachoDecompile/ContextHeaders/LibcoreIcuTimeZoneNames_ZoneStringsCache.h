// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREICUTIMEZONENAMES_ZONESTRINGSCACHE_H
#define LIBCOREICUTIMEZONENAMES_ZONESTRINGSCACHE_H



#import "LibcoreUtilBasicLruCache.h"
#import "JavaUtilHashMap.h"

@interface LibcoreIcuTimeZoneNames_ZoneStringsCache : LibcoreUtilBasicLruCache {
    JavaUtilHashMap *internTable_;
}




-(id)init;
-(id)createWithId:(id)arg0 ;
-(void)internStringsWithNSStringArray2:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif