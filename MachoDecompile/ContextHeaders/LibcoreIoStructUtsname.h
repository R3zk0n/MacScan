// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTUTSNAME_H
#define LIBCOREIOSTRUCTUTSNAME_H


#import <Foundation/Foundation.h>


@interface LibcoreIoStructUtsname : NSObject {
    NSString *sysname_;
    NSString *nodename_;
    NSString *release__;
    NSString *version__;
    NSString *machine_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif