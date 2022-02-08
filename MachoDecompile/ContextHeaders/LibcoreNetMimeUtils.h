// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCORENETMIMEUTILS_H
#define LIBCORENETMIMEUTILS_H


#import <Foundation/Foundation.h>


@interface LibcoreNetMimeUtils : NSObject



-(id)init;
+(void)addWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)getContentTypesPropertiesStream;
+(void)applyOverrides;
+(BOOL)hasMimeTypeWithNSString:(id)arg0 ;
+(id)guessMimeTypeFromExtensionWithNSString:(id)arg0 ;
+(BOOL)hasExtensionWithNSString:(id)arg0 ;
+(id)guessExtensionFromMimeTypeWithNSString:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif