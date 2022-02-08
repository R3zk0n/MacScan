// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOGGINGHANDLER_H
#define JAVAUTILLOGGINGHANDLER_H


#import <Foundation/Foundation.h>

#import "JavaUtilLoggingErrorManager.h"
#import "JavaUtilLoggingLevel.h"
#import "JavaUtilLoggingFormatter.h"
#import "JavaUtilLoggingFilter-Protocol.h"

@interface JavaUtilLoggingHandler : NSObject {
    JavaUtilLoggingErrorManager *errorMan_;
    NSString *encoding_;
    JavaUtilLoggingLevel *level_;
    JavaUtilLoggingFormatter *formatter_;
    id<JavaUtilLoggingFilter> *filter_;
    NSString *prefix_;
}




-(id)init;
-(id)getDefaultInstanceWithNSString:(id)arg0 ;
-(id)getCustomizeInstanceWithNSString:(id)arg0 ;
-(void)printInvalidPropMessageWithNSString:(id)arg0 withNSString:(id)arg1 withJavaLangException:(id)arg2 ;
-(void)initPropertiesWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 ;
-(void)close;
-(void)flush;
-(void)publishWithJavaUtilLoggingLogRecord:(id)arg0 ;
-(id)getEncoding;
-(id)getErrorManager;
-(id)getFilter;
-(id)getFormatter;
-(id)getLevel;
-(BOOL)isLoggableWithJavaUtilLoggingLogRecord:(id)arg0 ;
-(void)reportErrorWithNSString:(id)arg0 withJavaLangException:(id)arg1 withInt:(int)arg2 ;
-(void)internalSetEncodingWithNSString:(id)arg0 ;
-(void)setEncodingWithNSString:(id)arg0 ;
-(void)setErrorManagerWithJavaUtilLoggingErrorManager:(id)arg0 ;
-(void)setFilterWithJavaUtilLoggingFilter:(id)arg0 ;
-(void)internalSetFormatterWithJavaUtilLoggingFormatter:(id)arg0 ;
-(void)setFormatterWithJavaUtilLoggingFormatter:(id)arg0 ;
-(void)setLevelWithJavaUtilLoggingLevel:(id)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif