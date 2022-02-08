// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOGGINGLOGRECORD_H
#define JAVAUTILLOGGINGLOGRECORD_H


#import <Foundation/Foundation.h>

#import "JavaUtilLoggingLevel.h"
#import "JavaLangThrowable.h"
#import "JavaUtilResourceBundle.h"
#import "IOSObjectArray.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilLoggingLogRecord : NSObject <JavaIoSerializable>

 {
    JavaUtilLoggingLevel *level_;
    NSInteger sequenceNumber_;
    NSString *sourceClassName_;
    NSString *sourceMethodName_;
    NSString *message_;
    int threadID_;
    NSInteger millis_;
    JavaLangThrowable *thrown_;
    NSString *loggerName_;
    NSString *resourceBundleName_;
    JavaUtilResourceBundle *resourceBundle_;
    IOSObjectArray *parameters_;
    BOOL sourceInitialized_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilLoggingLevel:(id)arg0 withNSString:(id)arg1 ;
-(id)getLevel;
-(void)setLevelWithJavaUtilLoggingLevel:(id)arg0 ;
-(id)getLoggerName;
-(void)setLoggerNameWithNSString:(id)arg0 ;
-(id)getMessage;
-(void)setMessageWithNSString:(id)arg0 ;
-(NSInteger)getMillis;
-(void)setMillisWithLong:(NSInteger)arg0 ;
-(id)getParameters;
-(void)setParametersWithNSObjectArray:(id)arg0 ;
-(id)getResourceBundle;
-(void)setResourceBundleWithJavaUtilResourceBundle:(id)arg0 ;
-(id)getResourceBundleName;
-(void)setResourceBundleNameWithNSString:(id)arg0 ;
-(NSInteger)getSequenceNumber;
-(void)setSequenceNumberWithLong:(NSInteger)arg0 ;
-(id)getSourceClassName;
-(void)initSource;
-(void)setSourceClassNameWithNSString:(id)arg0 ;
-(id)getSourceMethodName;
-(void)setSourceMethodNameWithNSString:(id)arg0 ;
-(int)getThreadID;
-(void)setThreadIDWithInt:(int)arg0 ;
-(id)getThrown;
-(void)setThrownWithJavaLangThrowable:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif