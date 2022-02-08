// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCORENETURLURLUTILS_H
#define LIBCORENETURLURLUTILS_H


#import <Foundation/Foundation.h>


@interface LibcoreNetUrlUrlUtils : NSObject



-(id)init;
+(id)canonicalizePathWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
+(id)authoritySafePathWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)getSchemePrefixWithNSString:(id)arg0 ;
+(BOOL)isValidSchemeCharWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
+(int)findFirstOfWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif