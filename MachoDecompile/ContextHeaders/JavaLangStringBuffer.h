// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSTRINGBUFFER_H
#define JAVALANGSTRINGBUFFER_H


#import <Foundation/Foundation.h>

#import "JavaLangAbstractStringBuilder.h"
#import "JavaLangAppendable-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaLangCharSequence-Protocol.h"

@interface JavaLangStringBuffer : JavaLangAbstractStringBuilder <JavaLangAppendable, JavaIoSerializable, JavaLangCharSequence>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithBoolean:(BOOL)arg0 ;
-(id)appendWithChar:(unsigned short)arg0 ;
-(id)appendWithDouble:(CGFloat)arg0 ;
-(id)appendWithFloat:(float)arg0 ;
-(id)appendWithInt:(int)arg0 ;
-(id)appendWithLong:(NSInteger)arg0 ;
-(id)appendWithId:(id)arg0 ;
-(id)appendWithNSString:(id)arg0 ;
-(id)appendWithJavaLangStringBuffer:(id)arg0 ;
-(id)appendWithCharArray:(id)arg0 ;
-(id)appendWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendCodePointWithInt:(int)arg0 ;
-(unsigned short)charAtWithInt:(int)arg0 ;
-(int)codePointAtWithInt:(int)arg0 ;
-(int)codePointBeforeWithInt:(int)arg0 ;
-(int)codePointCountWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)delete__WithInt:(int)arg0 withInt:(int)arg1 ;
-(id)deleteCharAtWithInt:(int)arg0 ;
-(void)ensureCapacityWithInt:(int)arg0 ;
-(void)getCharsWithInt:(int)arg0 withInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3 ;
-(int)indexOfWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)insertWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(id)insertWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(id)insertWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)insertWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)insertWithInt:(int)arg0 withDouble:(CGFloat)arg1 ;
-(id)insertWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)insertWithInt:(int)arg0 withId:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withNSString:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withCharArray:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)insertWithInt:(int)arg0 withJavaLangCharSequence:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)lastIndexOfWithNSString:(id)arg0 withInt:(int)arg1 ;
-(int)length;
-(int)offsetByCodePointsWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)replaceWithInt:(int)arg0 withInt:(int)arg1 withNSString:(id)arg2 ;
-(id)reverse;
-(void)setCharAtWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(void)setLengthWithInt:(int)arg0 ;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(id)substringWithInt:(int)arg0 ;
-(id)substringWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)trimToSize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif