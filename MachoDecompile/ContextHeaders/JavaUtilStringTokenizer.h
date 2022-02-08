// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILSTRINGTOKENIZER_H
#define JAVAUTILSTRINGTOKENIZER_H


#import <Foundation/Foundation.h>

#import "JavaUtilEnumeration-Protocol.h"

@interface JavaUtilStringTokenizer : NSObject <JavaUtilEnumeration>

 {
    NSString *string_;
    NSString *delimiters_;
    BOOL returnDelimiters_;
    int position_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withBoolean:(BOOL)arg2 ;
-(int)countTokens;
-(BOOL)hasMoreElements;
-(BOOL)hasMoreTokens;
-(id)nextElement;
-(id)nextToken;
-(id)nextTokenWithNSString:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif