// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTLINGER_H
#define LIBCOREIOSTRUCTLINGER_H


#import <Foundation/Foundation.h>


@interface LibcoreIoStructLinger : NSObject {
    int l_onoff_;
    int l_linger_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(BOOL)isOn;
-(id)description;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif