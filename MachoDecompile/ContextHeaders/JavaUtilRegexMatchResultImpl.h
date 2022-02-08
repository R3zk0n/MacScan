// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILREGEXMATCHRESULTIMPL_H
#define JAVAUTILREGEXMATCHRESULTIMPL_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "JavaUtilRegexMatchResult-Protocol.h"

@interface JavaUtilRegexMatchResultImpl : NSObject <JavaUtilRegexMatchResult>

 {
    NSString *text_;
    IOSIntArray *offsets_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withIntArray:(id)arg1 ;
-(int)end;
-(int)endWithInt:(int)arg0 ;
-(id)group;
-(id)groupWithInt:(int)arg0 ;
-(int)groupCount;
-(int)start;
-(int)startWithInt:(int)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif