// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTCHOICEFORMAT_H
#define JAVATEXTCHOICEFORMAT_H



#import "JavaTextNumberFormat.h"
#import "IOSDoubleArray.h"
#import "IOSObjectArray.h"

@interface JavaTextChoiceFormat : JavaTextNumberFormat {
    IOSDoubleArray *choiceLimits_;
    IOSObjectArray *choiceFormats_;
}




-(id)initWithDoubleArray:(id)arg0 withNSStringArray:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(void)applyPatternWithNSString:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)formatWithDouble:(CGFloat)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatWithLong:(NSInteger)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)getFormats;
-(id)getLimits;
-(NSUInteger)hash;
-(id)parseWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(void)setChoicesWithDoubleArray:(id)arg0 withNSStringArray:(id)arg1 ;
-(int)skipWhitespaceWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)toPattern;
-(void)dealloc;
+(CGFloat)nextDoubleWithDouble:(CGFloat)arg0 ;
+(CGFloat)nextDoubleWithDouble:(CGFloat)arg0 withBoolean:(BOOL)arg1 ;
+(CGFloat)previousDoubleWithDouble:(CGFloat)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif