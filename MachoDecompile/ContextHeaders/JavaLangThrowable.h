// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTHROWABLE_H
#define JAVALANGTHROWABLE_H


#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "JavaLangThrowable.h"
#import "IOSObjectArray.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaObject-Protocol.h"

@interface JavaLangThrowable : NSException <JavaIoSerializable, JavaObject>

 {
    JavaLangThrowable *cause;
    NSString *detailMessage;
    IOSObjectArray *stackTrace;
    IOSObjectArray *suppressedExceptions;
    **void rawCallStack;
    unsigned int rawFrameCount;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
-(id)initWithJavaLangThrowable:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 ;
-(id)filterStackTrace;
-(id)fillInStackTrace;
-(id)getCause;
-(id)getLocalizedMessage;
-(id)getMessage;
-(id)getStackTrace;
-(id)initCauseWithJavaLangThrowable:(id)arg0 ;
-(void)printStackTrace;
-(void)printStackTraceWithJavaIoPrintWriter:(id)arg0 ;
-(void)printStackTraceWithJavaIoPrintStream:(id)arg0 ;
-(void)setStackTraceWithJavaLangStackTraceElementArray:(id)arg0 ;
-(void)addSuppressedWithJavaLangThrowable:(id)arg0 ;
-(id)getSuppressed;
-(void)maybeFreeRawCallStack;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif