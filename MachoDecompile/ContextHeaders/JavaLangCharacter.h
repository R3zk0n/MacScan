// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGCHARACTER_H
#define JAVALANGCHARACTER_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaLangCharacter : NSObject <JavaIoSerializable, JavaLangComparable>

 {
    unsigned short value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithChar:(unsigned short)arg0 ;
-(unsigned short)charValue;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
+(void)checkValidCodePointWithInt:(int)arg0 ;
+(int)compareWithChar:(unsigned short)arg0 withChar:(unsigned short)arg1 ;
+(id)valueOfWithChar:(unsigned short)arg0 ;
+(id)smallValueOfWithChar:(unsigned short)arg0 ;
+(BOOL)isValidCodePointWithInt:(int)arg0 ;
+(BOOL)isSupplementaryCodePointWithInt:(int)arg0 ;
+(BOOL)isHighSurrogateWithChar:(unsigned short)arg0 ;
+(BOOL)isLowSurrogateWithChar:(unsigned short)arg0 ;
+(BOOL)isSurrogateWithChar:(unsigned short)arg0 ;
+(BOOL)isSurrogatePairWithChar:(unsigned short)arg0 withChar:(unsigned short)arg1 ;
+(int)charCountWithInt:(int)arg0 ;
+(int)toCodePointWithChar:(unsigned short)arg0 withChar:(unsigned short)arg1 ;
+(int)codePointAtWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 ;
+(int)codePointAtWithCharArray:(id)arg0 withInt:(int)arg1 ;
+(int)codePointAtWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)codePointBeforeWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 ;
+(int)codePointBeforeWithCharArray:(id)arg0 withInt:(int)arg1 ;
+(int)codePointBeforeWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)toCharsWithInt:(int)arg0 withCharArray:(id)arg1 withInt:(int)arg2 ;
+(id)toCharsWithInt:(int)arg0 ;
+(int)codePointCountWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)codePointCountWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)offsetByCodePointsWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)offsetByCodePointsWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(int)digitWithChar:(unsigned short)arg0 withInt:(int)arg1 ;
+(int)digitWithInt:(int)arg0 withInt:(int)arg1 ;
+(unsigned short)forDigitWithInt:(int)arg0 withInt:(int)arg1 ;
+(id)getNameWithInt:(int)arg0 ;
+(id)getNameImplWithInt:(int)arg0 ;
+(int)getNumericValueWithChar:(unsigned short)arg0 ;
+(int)getNumericValueWithInt:(int)arg0 ;
+(int)getTypeWithChar:(unsigned short)arg0 ;
+(int)getTypeWithInt:(int)arg0 ;
+(char)getDirectionalityWithChar:(unsigned short)arg0 ;
+(char)getDirectionalityWithInt:(int)arg0 ;
+(BOOL)isMirroredWithChar:(unsigned short)arg0 ;
+(BOOL)isMirroredWithInt:(int)arg0 ;
+(unsigned short)highSurrogateWithInt:(int)arg0 ;
+(unsigned short)lowSurrogateWithInt:(int)arg0 ;
+(BOOL)isAlphabeticWithInt:(int)arg0 ;
+(BOOL)isBmpCodePointWithInt:(int)arg0 ;
+(BOOL)isDefinedWithChar:(unsigned short)arg0 ;
+(BOOL)isDefinedWithInt:(int)arg0 ;
+(BOOL)isDigitWithChar:(unsigned short)arg0 ;
+(BOOL)isDigitWithInt:(int)arg0 ;
+(BOOL)isIdentifierIgnorableWithChar:(unsigned short)arg0 ;
+(BOOL)isIdeographicWithInt:(int)arg0 ;
+(BOOL)isIdentifierIgnorableWithInt:(int)arg0 ;
+(BOOL)isISOControlWithChar:(unsigned short)arg0 ;
+(BOOL)isISOControlWithInt:(int)arg0 ;
+(BOOL)isJavaIdentifierPartWithChar:(unsigned short)arg0 ;
+(BOOL)isJavaIdentifierPartWithInt:(int)arg0 ;
+(BOOL)isJavaIdentifierStartWithChar:(unsigned short)arg0 ;
+(BOOL)isJavaIdentifierStartWithInt:(int)arg0 ;
+(BOOL)isJavaLetterWithChar:(unsigned short)arg0 ;
+(BOOL)isJavaLetterOrDigitWithChar:(unsigned short)arg0 ;
+(BOOL)isLetterWithChar:(unsigned short)arg0 ;
+(BOOL)isLetterWithInt:(int)arg0 ;
+(BOOL)isLetterOrDigitWithChar:(unsigned short)arg0 ;
+(BOOL)isLetterOrDigitWithInt:(int)arg0 ;
+(BOOL)isLowerCaseWithChar:(unsigned short)arg0 ;
+(BOOL)isLowerCaseWithInt:(int)arg0 ;
+(BOOL)isSpaceWithChar:(unsigned short)arg0 ;
+(BOOL)isSpaceCharWithChar:(unsigned short)arg0 ;
+(BOOL)isSpaceCharWithInt:(int)arg0 ;
+(BOOL)isTitleCaseWithChar:(unsigned short)arg0 ;
+(BOOL)isTitleCaseWithInt:(int)arg0 ;
+(BOOL)isUnicodeIdentifierPartWithChar:(unsigned short)arg0 ;
+(BOOL)isUnicodeIdentifierPartWithInt:(int)arg0 ;
+(BOOL)isUnicodeIdentifierStartWithChar:(unsigned short)arg0 ;
+(BOOL)isUnicodeIdentifierStartWithInt:(int)arg0 ;
+(BOOL)isUpperCaseWithChar:(unsigned short)arg0 ;
+(BOOL)isUpperCaseWithInt:(int)arg0 ;
+(BOOL)isWhitespaceWithChar:(unsigned short)arg0 ;
+(BOOL)isWhitespaceWithInt:(int)arg0 ;
+(unsigned short)reverseBytesWithChar:(unsigned short)arg0 ;
+(unsigned short)toLowerCaseWithChar:(unsigned short)arg0 ;
+(int)toLowerCaseWithInt:(int)arg0 ;
+(id)toStringWithChar:(unsigned short)arg0 ;
+(unsigned short)toTitleCaseWithChar:(unsigned short)arg0 ;
+(int)toTitleCaseWithInt:(int)arg0 ;
+(unsigned short)toUpperCaseWithChar:(unsigned short)arg0 ;
+(int)toUpperCaseWithInt:(int)arg0 ;
+(int)binarySearchRangeWithIntArray:(id)arg0 withInt:(int)arg1 ;
+(void)initialize;
+(id)__annotations_isJavaLetterWithChar_;
+(id)__annotations_isJavaLetterOrDigitWithChar_;
+(id)__annotations_isSpaceWithChar_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif