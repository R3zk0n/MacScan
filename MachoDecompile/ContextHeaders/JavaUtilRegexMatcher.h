// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILREGEXMATCHER_H
#define JAVAUTILREGEXMATCHER_H


#import <Foundation/Foundation.h>

#import "JavaUtilRegexPattern.h"
#import "IOSCharArray.h"
#import "IOSIntArray.h"
#import "JavaUtilRegexMatchResult-Protocol.h"

@interface JavaUtilRegexMatcher : NSObject <JavaUtilRegexMatchResult>

 {
    JavaUtilRegexPattern *pattern_;
    NSInteger address_;
    NSString *input_;
    IOSCharArray *inputChars_;
    int regionStart_;
    int regionEnd_;
    int appendPos_;
    BOOL matchFound_;
    IOSIntArray *matchOffsets_;
    BOOL anchoringBounds_;
    BOOL transparentBounds_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilRegexPattern:(id)arg0 withJavaLangCharSequence:(id)arg1 ;
-(id)appendReplacementWithJavaLangStringBuffer:(id)arg0 withNSString:(id)arg1 ;
-(void)appendEvaluatedWithJavaLangStringBuffer:(id)arg0 withNSString:(id)arg1 ;
-(id)reset;
-(id)resetWithJavaLangCharSequence:(id)arg0 ;
-(id)resetWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)usePatternWithJavaUtilRegexPattern:(id)arg0 ;
-(void)resetForInput;
-(id)regionWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)appendTailWithJavaLangStringBuffer:(id)arg0 ;
-(id)replaceFirstWithNSString:(id)arg0 ;
-(id)replaceAllWithNSString:(id)arg0 ;
-(id)pattern;
-(BOOL)findWithInt:(int)arg0 ;
-(BOOL)find;
-(BOOL)lookingAt;
-(BOOL)matches;
-(id)toMatchResult;
-(id)useAnchoringBoundsWithBoolean:(BOOL)arg0 ;
-(BOOL)hasAnchoringBounds;
-(id)useTransparentBoundsWithBoolean:(BOOL)arg0 ;
-(void)ensureMatch;
-(BOOL)hasTransparentBounds;
-(int)regionStart;
-(int)regionEnd;
-(BOOL)requireEnd;
-(BOOL)hitEnd;
-(void)dealloc;
-(int)end;
-(int)endWithInt:(int)arg0 ;
-(id)group;
-(id)groupWithInt:(int)arg0 ;
-(int)groupCount;
-(int)start;
-(int)startWithInt:(int)arg0 ;
+(id)quoteReplacementWithNSString:(id)arg0 ;
+(void)closeImplWithLong:(NSInteger)arg0 ;
+(BOOL)findImplWithLong:(NSInteger)arg0 withInt:(int)arg1 withIntArray:(id)arg2 ;
+(BOOL)findNextImplWithLong:(NSInteger)arg0 withIntArray:(id)arg1 ;
+(int)groupCountImplWithLong:(NSInteger)arg0 ;
+(BOOL)hitEndImplWithLong:(NSInteger)arg0 ;
+(BOOL)lookingAtImplWithLong:(NSInteger)arg0 withIntArray:(id)arg1 ;
+(BOOL)matchesImplWithLong:(NSInteger)arg0 withIntArray:(id)arg1 ;
+(NSInteger)openImplWithLong:(NSInteger)arg0 ;
+(BOOL)requireEndImplWithLong:(NSInteger)arg0 ;
+(void)setInputImplWithLong:(NSInteger)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)useAnchoringBoundsImplWithLong:(NSInteger)arg0 withBoolean:(BOOL)arg1 ;
+(void)useTransparentBoundsImplWithLong:(NSInteger)arg0 withBoolean:(BOOL)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif