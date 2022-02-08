// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSHORT_H
#define JAVALANGSHORT_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface JavaLangShort : NSNumber <JavaLangComparable>

 {
    short value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)initWithShort:(short)arg0 ;
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
+(int)compareWithShort:(short)arg0 withShort:(short)arg1 ;
+(id)decodeWithNSString:(id)arg0 ;
+(short)parseShortWithNSString:(id)arg0 ;
+(short)parseShortWithNSString:(id)arg0 withInt:(int)arg1 ;
+(id)toStringWithShort:(short)arg0 ;
+(id)valueOfWithNSString:(id)arg0 ;
+(id)valueOfWithNSString:(id)arg0 withInt:(int)arg1 ;
+(short)reverseBytesWithShort:(short)arg0 ;
+(id)valueOfWithShort:(short)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif