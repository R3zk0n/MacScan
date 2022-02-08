// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILFORMATTER_FORMATTOKEN_H
#define JAVAUTILFORMATTER_FORMATTOKEN_H


#import <Foundation/Foundation.h>

#import "JavaLangStringBuilder.h"

@interface JavaUtilFormatter_FormatToken : NSObject {
    int argIndex_;
    BOOL flagComma_;
    BOOL flagMinus_;
    BOOL flagParenthesis_;
    BOOL flagPlus_;
    BOOL flagSharp_;
    BOOL flagSpace_;
    BOOL flagZero_;
    unsigned short conversionType_;
    unsigned short dateSuffix_;
    int precision_;
    int width_;
    JavaLangStringBuilder *strFlags_;
}




-(BOOL)isDefault;
-(BOOL)isPrecisionSet;
-(int)getArgIndex;
-(void)setArgIndexWithInt:(int)arg0 ;
-(int)getWidth;
-(void)setWidthWithInt:(int)arg0 ;
-(int)getPrecision;
-(void)setPrecisionWithInt:(int)arg0 ;
-(id)getStrFlags;
-(BOOL)setFlagWithInt:(int)arg0 ;
-(unsigned short)getConversionType;
-(void)setConversionTypeWithChar:(unsigned short)arg0 ;
-(unsigned short)getDateSuffix;
-(void)setDateSuffixWithChar:(unsigned short)arg0 ;
-(BOOL)requireArgument;
-(void)checkFlagsWithId:(id)arg0 ;
-(id)unknownFormatConversionException;
-(id)init;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif