// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGDOUBLE_H
#define JAVALANGDOUBLE_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface JavaLangDouble : NSNumber <JavaLangComparable>

 {
    CGFloat value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(char)charValue;
-(CGFloat)doubleValue;
-(BOOL)isEqual:(id)arg0 ;
-(float)floatValue;
-(int)intValue;
-(BOOL)isInfinite;
-(BOOL)isNaN;
-(NSInteger)longLongValue;
-(short)shortValue;
-(char *)objCType;
-(void)getValue:(*void)arg0 ;
+(NSInteger)doubleToLongBitsWithDouble:(CGFloat)arg0 ;
+(NSInteger)doubleToRawLongBitsWithDouble:(CGFloat)arg0 ;
+(BOOL)isInfiniteWithDouble:(CGFloat)arg0 ;
+(BOOL)isNaNWithDouble:(CGFloat)arg0 ;
+(CGFloat)longBitsToDoubleWithLong:(NSInteger)arg0 ;
+(CGFloat)parseDoubleWithNSString:(id)arg0 ;
+(id)toStringWithDouble:(CGFloat)arg0 ;
+(id)valueOfWithNSString:(id)arg0 ;
+(int)compareWithDouble:(CGFloat)arg0 withDouble:(CGFloat)arg1 ;
+(id)valueOfWithDouble:(CGFloat)arg0 ;
+(id)toHexStringWithDouble:(CGFloat)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif