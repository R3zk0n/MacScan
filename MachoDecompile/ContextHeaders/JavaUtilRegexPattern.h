// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILREGEXPATTERN_H
#define JAVAUTILREGEXPATTERN_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilRegexPattern : NSObject <JavaIoSerializable>

 {
    NSInteger address_;
    NSString *pattern_;
    int flags_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)matcherWithJavaLangCharSequence:(id)arg0 ;
-(id)splitWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 ;
-(id)splitWithJavaLangCharSequence:(id)arg0 ;
-(id)pattern;
-(int)flags;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)compile;
-(void)dealloc;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
+(id)compileWithNSString:(id)arg0 withInt:(int)arg1 ;
+(id)compileWithNSString:(id)arg0 ;
+(BOOL)matchesWithNSString:(id)arg0 withJavaLangCharSequence:(id)arg1 ;
+(id)quoteWithNSString:(id)arg0 ;
+(void)closeImplWithLong:(NSInteger)arg0 ;
+(NSInteger)compileImplWithNSString:(id)arg0 withInt:(int)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif