// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOGGINGERRORMANAGER_H
#define JAVAUTILLOGGINGERRORMANAGER_H


#import <Foundation/Foundation.h>


@interface JavaUtilLoggingErrorManager : NSObject {
    BOOL called_;
}




-(id)init;
-(void)errorWithNSString:(id)arg0 withJavaLangException:(id)arg1 withInt:(int)arg2 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif