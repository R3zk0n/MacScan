// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGLONG_H
#define JAVALANGLONG_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface JavaLangLong : NSNumber <JavaLangComparable>

 {
    NSInteger value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLong:(NSInteger)arg0 ;
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
+(int)compareWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
+(id)invalidLongWithNSString:(id)arg0 ;
+(id)decodeWithNSString:(id)arg0 ;
+(id)getLongWithNSString:(id)arg0 ;
+(id)getLongWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
+(id)getLongWithNSString:(id)arg0 withJavaLangLong:(id)arg1 ;
+(NSInteger)parseLongWithNSString:(id)arg0 ;
+(NSInteger)parseLongWithNSString:(id)arg0 withInt:(int)arg1 ;
+(NSInteger)parseWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
+(NSInteger)parsePositiveLongWithNSString:(id)arg0 ;
+(NSInteger)parsePositiveLongWithNSString:(id)arg0 withInt:(int)arg1 ;
+(id)toBinaryStringWithLong:(NSInteger)arg0 ;
+(id)toHexStringWithLong:(NSInteger)arg0 ;
+(id)toOctalStringWithLong:(NSInteger)arg0 ;
+(id)toStringWithLong:(NSInteger)arg0 ;
+(id)toStringWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(id)valueOfWithNSString:(id)arg0 ;
+(id)valueOfWithNSString:(id)arg0 withInt:(int)arg1 ;
+(NSInteger)highestOneBitWithLong:(NSInteger)arg0 ;
+(NSInteger)lowestOneBitWithLong:(NSInteger)arg0 ;
+(int)numberOfLeadingZerosWithLong:(NSInteger)arg0 ;
+(int)numberOfTrailingZerosWithLong:(NSInteger)arg0 ;
+(int)bitCountWithLong:(NSInteger)arg0 ;
+(NSInteger)rotateLeftWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(NSInteger)rotateRightWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(NSInteger)reverseBytesWithLong:(NSInteger)arg0 ;
+(NSInteger)reverseWithLong:(NSInteger)arg0 ;
+(int)signumWithLong:(NSInteger)arg0 ;
+(id)valueOfWithLong:(NSInteger)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif