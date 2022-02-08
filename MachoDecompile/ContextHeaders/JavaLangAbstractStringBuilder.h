// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGABSTRACTSTRINGBUILDER_H
#define JAVALANGABSTRACTSTRINGBUILDER_H


#import <Foundation/Foundation.h>


@interface JavaLangAbstractStringBuilder : NSObject {
    JreStringBuilder delegate_;
}




-(id)getValue;
-(void)setWithCharArray:(id)arg0 withInt:(int)arg1 ;
-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(int)capacity;
-(unsigned short)charAtWithInt:(int)arg0 ;
-(void)ensureCapacityWithInt:(int)arg0 ;
-(void)getCharsWithInt:(int)arg0 withInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3 ;
-(int)length;
-(void)setCharAtWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(void)setLengthWithInt:(int)arg0 ;
-(id)substringWithInt:(int)arg0 ;
-(id)substringWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)description;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(int)indexOfWithNSString:(id)arg0 ;
-(int)indexOfWithNSString:(id)arg0 withInt:(int)arg1 ;
-(int)lastIndexOfWithNSString:(id)arg0 ;
-(int)lastIndexOfWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)trimToSize;
-(int)codePointAtWithInt:(int)arg0 ;
-(int)codePointBeforeWithInt:(int)arg0 ;
-(int)codePointCountWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)offsetByCodePointsWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif