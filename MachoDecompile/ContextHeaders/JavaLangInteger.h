// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGINTEGER_H
#define JAVALANGINTEGER_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface JavaLangInteger : NSNumber <JavaLangComparable>

 {
    int value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(char)charValue;
-(int)compareToWithId:(id)arg0 ;
-(CGFloat)doubleValue;
-(BOOL)isEqual:(id)arg0 ;
-(float)floatValue;
-(int)intValue;
-(NSInteger)longLongValue;
-(short)shortValue;
-(char *)objCType;
-(void)getValue:(*void)arg0 ;
+(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
+(id)invalidIntWithNSString:(id)arg0 ;
+(id)decodeWithNSString:(id)arg0 ;
+(id)getIntegerWithNSString:(id)arg0 ;
+(id)getIntegerWithNSString:(id)arg0 withInt:(int)arg1 ;
+(id)getIntegerWithNSString:(id)arg0 withJavaLangInteger:(id)arg1 ;
+(int)parseIntWithNSString:(id)arg0 ;
+(int)parseIntWithNSString:(id)arg0 withInt:(int)arg1 ;
+(int)parseWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
+(id)toBinaryStringWithInt:(int)arg0 ;
+(id)toHexStringWithInt:(int)arg0 ;
+(id)toOctalStringWithInt:(int)arg0 ;
+(id)toStringWithInt:(int)arg0 ;
+(id)toStringWithInt:(int)arg0 withInt:(int)arg1 ;
+(id)valueOfWithNSString:(id)arg0 ;
+(id)valueOfWithNSString:(id)arg0 withInt:(int)arg1 ;
+(int)highestOneBitWithInt:(int)arg0 ;
+(int)lowestOneBitWithInt:(int)arg0 ;
+(int)numberOfLeadingZerosWithInt:(int)arg0 ;
+(int)numberOfTrailingZerosWithInt:(int)arg0 ;
+(int)bitCountWithInt:(int)arg0 ;
+(int)rotateLeftWithInt:(int)arg0 withInt:(int)arg1 ;
+(int)rotateRightWithInt:(int)arg0 withInt:(int)arg1 ;
+(int)reverseBytesWithInt:(int)arg0 ;
+(int)reverseWithInt:(int)arg0 ;
+(int)signumWithInt:(int)arg0 ;
+(id)valueOfWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif