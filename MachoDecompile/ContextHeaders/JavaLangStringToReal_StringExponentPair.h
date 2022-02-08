// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSTRINGTOREAL_STRINGEXPONENTPAIR_H
#define JAVALANGSTRINGTOREAL_STRINGEXPONENTPAIR_H


#import <Foundation/Foundation.h>


@interface JavaLangStringToReal_StringExponentPair : NSObject {
    NSString *s_;
    NSInteger e_;
    BOOL negative_;
    BOOL infinity_;
    BOOL zero_;
}




-(float)specialValue;
-(id)init;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif