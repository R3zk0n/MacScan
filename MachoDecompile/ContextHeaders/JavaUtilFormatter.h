// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILFORMATTER_H
#define JAVAUTILFORMATTER_H


#import <Foundation/Foundation.h>

#import "JavaUtilLocale.h"
#import "JavaUtilFormatter_FormatToken.h"
#import "JavaIoIOException.h"
#import "LibcoreIcuLocaleData.h"
#import "JavaIoCloseable-Protocol.h"
#import "JavaIoFlushable-Protocol.h"
#import "JavaLangAppendable-Protocol.h"

@interface JavaUtilFormatter : NSObject <JavaIoCloseable, JavaIoFlushable>

 {
    id<JavaLangAppendable> *out_;
    JavaUtilLocale *locale_;
    id *arg_;
    BOOL closed_;
    JavaUtilFormatter_FormatToken *formatToken_;
    JavaIoIOException *lastIOException_;
    LibcoreIcuLocaleData *localeData_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)getDecimalFormatWithNSString:(id)arg0 ;
-(id)init;
-(id)initWithJavaLangAppendable:(id)arg0 ;
-(id)initWithJavaUtilLocale:(id)arg0 ;
-(id)initWithJavaLangAppendable:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withJavaUtilLocale:(id)arg2 ;
-(id)initWithJavaIoFile:(id)arg0 ;
-(id)initWithJavaIoFile:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaIoFile:(id)arg0 withNSString:(id)arg1 withJavaUtilLocale:(id)arg2 ;
-(id)initWithJavaIoOutputStream:(id)arg0 ;
-(id)initWithJavaIoOutputStream:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaIoOutputStream:(id)arg0 withNSString:(id)arg1 withJavaUtilLocale:(id)arg2 ;
-(id)initWithJavaIoPrintStream:(id)arg0 ;
-(void)checkNotClosed;
-(id)locale;
-(id)out;
-(void)flush;
-(void)close;
-(id)ioException;
-(id)formatWithNSString:(id)arg0 withNSObjectArray:(id)arg1 ;
-(id)formatWithJavaUtilLocale:(id)arg0 withNSString:(id)arg1 withNSObjectArray:(id)arg2 ;
-(void)doFormatWithNSString:(id)arg0 withNSObjectArray:(id)arg1 ;
-(void)outputCharSequenceWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getArgumentWithNSObjectArray:(id)arg0 withInt:(int)arg1 withJavaUtilFormatter_FormatSpecifierParser:(id)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4 ;
-(id)transformWithJavaUtilFormatter_FormatToken:(id)arg0 withId:(id)arg1 ;
-(id)badArgumentType;
-(id)localizeDigitsWithJavaLangCharSequence:(id)arg0 ;
-(id)insertGroupingWithJavaLangCharSequence:(id)arg0 ;
-(id)transformFromBoolean;
-(id)transformFromHashCode;
-(id)transformFromString;
-(id)transformFromCharacter;
-(id)transformFromPercent;
-(id)paddingWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 ;
-(id)toStringBuilderWithJavaLangCharSequence:(id)arg0 ;
-(id)wrapParenthesesWithJavaLangStringBuilder:(id)arg0 ;
-(id)transformFromInteger;
-(id)transformFromNull;
-(id)transformFromBigInteger;
-(id)transformFromDateTime;
-(BOOL)appendTWithJavaLangStringBuilder:(id)arg0 withChar:(unsigned short)arg1 withJavaUtilCalendar:(id)arg2 ;
-(int)to12HourWithInt:(int)arg0 ;
-(void)appendLocalizedWithJavaLangStringBuilder:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(id)transformFromSpecialNumberWithDouble:(CGFloat)arg0 ;
-(id)transformFromFloat;
-(void)transformEWithJavaLangStringBuilder:(id)arg0 ;
-(void)transformGWithJavaLangStringBuilder:(id)arg0 ;
-(void)transformFWithJavaLangStringBuilder:(id)arg0 ;
-(void)transformAWithJavaLangStringBuilder:(id)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif