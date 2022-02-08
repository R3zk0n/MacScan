// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGBYTE_H
#define JAVALANGBYTE_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface JavaLangByte : NSNumber <JavaLangComparable>

 {
    char value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithByte:(char)arg0 ;
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
+(int)compareWithByte:(char)arg0 withByte:(char)arg1 ;
+(id)decodeWithNSString:(id)arg0 ;
+(char)parseByteWithNSString:(id)arg0 ;
+(char)parseByteWithNSString:(id)arg0 withInt:(int)arg1 ;
+(id)toHexStringWithByte:(char)arg0 withBoolean:(BOOL)arg1 ;
+(id)toStringWithByte:(char)arg0 ;
+(id)valueOfWithNSString:(id)arg0 ;
+(id)valueOfWithNSString:(id)arg0 withInt:(int)arg1 ;
+(id)valueOfWithByte:(char)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif