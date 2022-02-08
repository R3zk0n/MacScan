// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSTACKTRACEELEMENT_H
#define JAVALANGSTACKTRACEELEMENT_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaLangStackTraceElement : NSObject <JavaIoSerializable>

 {
    NSString *declaringClass_;
    NSString *methodName_;
    NSString *fileName_;
    int lineNumber_;
    NSInteger address_;
    NSString *hexAddress_;
    NSString *offset_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)getClassName;
-(id)getMethodName;
-(id)getFileName;
-(int)getLineNumber;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 ;
-(id)initWithLong:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)initializeFromAddress;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif