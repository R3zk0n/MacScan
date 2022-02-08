// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILFORMATTER_FORMATSPECIFIERPARSER_H
#define JAVAUTILFORMATTER_FORMATSPECIFIERPARSER_H


#import <Foundation/Foundation.h>


@interface JavaUtilFormatter_FormatSpecifierParser : NSObject {
    NSString *format_;
    int length_;
    int startIndex_;
    int i_;
}




-(id)initWithNSString:(id)arg0 ;
-(id)parseFormatTokenWithInt:(int)arg0 ;
-(id)getFormatSpecifierText;
-(int)peek;
-(unsigned short)advance;
-(id)unknownFormatConversionException;
-(id)parseArgumentIndexAndFlagsWithJavaUtilFormatter_FormatToken:(id)arg0 ;
-(id)parseWidthWithJavaUtilFormatter_FormatToken:(id)arg0 withInt:(int)arg1 ;
-(id)parsePrecisionWithJavaUtilFormatter_FormatToken:(id)arg0 ;
-(id)parseConversionTypeWithJavaUtilFormatter_FormatToken:(id)arg0 ;
-(int)nextInt;
-(int)failNextInt;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif