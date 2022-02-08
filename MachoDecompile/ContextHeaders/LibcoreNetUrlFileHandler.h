// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCORENETURLFILEHANDLER_H
#define LIBCORENETURLFILEHANDLER_H



#import "JavaNetURLStreamHandler.h"

@interface LibcoreNetUrlFileHandler : JavaNetURLStreamHandler



-(id)openConnectionWithJavaNetURL:(id)arg0 ;
-(id)openConnectionWithJavaNetURL:(id)arg0 withJavaNetProxy:(id)arg1 ;
-(void)parseURLWithJavaNetURL:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif