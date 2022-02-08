// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETADDRESSCACHE_H
#define JAVANETADDRESSCACHE_H


#import <Foundation/Foundation.h>

#import "LibcoreUtilBasicLruCache.h"

@interface JavaNetAddressCache : NSObject {
    LibcoreUtilBasicLruCache *cache_;
}




-(void)clear;
-(id)getWithNSString:(id)arg0 ;
-(void)putWithNSString:(id)arg0 withJavaNetInetAddressArray:(id)arg1 ;
-(void)putUnknownHostWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)init;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif