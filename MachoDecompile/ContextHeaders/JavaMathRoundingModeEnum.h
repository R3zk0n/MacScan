// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMATHROUNDINGMODEENUM_H
#define JAVAMATHROUNDINGMODEENUM_H



#import "JavaLangEnum.h"
#import "NSCopying-Protocol.h"

@interface JavaMathRoundingModeEnum : JavaLangEnum <NSCopying>

 {
    int bigDecimalRM_;
}




-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)valueOfWithInt:(int)arg0 ;
+(id)values;
+(id)valueOfWithNSString:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif