// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGFLOAT_H
#define JAVALANGFLOAT_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface JavaLangFloat : NSNumber <JavaLangComparable>

 {
    float value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithFloat:(float)arg0 ;
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
+(int)floatToIntBitsWithFloat:(float)arg0 ;
+(int)floatToRawIntBitsWithFloat:(float)arg0 ;
+(float)intBitsToFloatWithInt:(int)arg0 ;
+(BOOL)isInfiniteWithFloat:(float)arg0 ;
+(BOOL)isNaNWithFloat:(float)arg0 ;
+(float)parseFloatWithNSString:(id)arg0 ;
+(id)toStringWithFloat:(float)arg0 ;
+(id)valueOfWithNSString:(id)arg0 ;
+(int)compareWithFloat:(float)arg0 withFloat:(float)arg1 ;
+(id)valueOfWithFloat:(float)arg0 ;
+(id)toHexStringWithFloat:(float)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif