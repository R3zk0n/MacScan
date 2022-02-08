// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSTRINGBUILDER_H
#define JAVALANGSTRINGBUILDER_H


#import <Foundation/Foundation.h>

#import "JavaLangAbstractStringBuilder.h"
#import "JavaLangAppendable-Protocol.h"
#import "JavaLangCharSequence-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaLangStringBuilder : JavaLangAbstractStringBuilder <JavaLangAppendable, JavaLangCharSequence, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithJavaLangCharSequence:(id)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(id)appendWithBoolean:(BOOL)arg0 ;
-(id)appendWithChar:(unsigned short)arg0 ;
-(id)appendWithInt:(int)arg0 ;
-(id)appendWithLong:(NSInteger)arg0 ;
-(id)appendWithFloat:(float)arg0 ;
-(id)appendWithDouble:(CGFloat)arg0 ;
-(id)appendWithId:(id)arg0 ;
-(id)appendWithNSString:(id)arg0 ;
-(id)appendWithJavaLangStringBuffer:(id)arg0 ;
-(id)appendWithCharArray:(id)arg0 ;
-(id)appendWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendCodePointWithInt:(int)arg0 ;
-(id)delete__WithInt:(int)arg0 withInt:(int)arg1 ;
-(id)deleteCharAtWithInt:(int)arg0 ;
-(id)insertWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(id)insertWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(id)insertWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)insertWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)insertWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)insertWithInt:(int)arg0 withDouble:(CGFloat)arg1 ;
-(id)insertWithInt:(int)arg0 withId:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withNSString:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withCharArray:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)insertWithInt:(int)arg0 withJavaLangCharSequence:(id)arg1 ;
-(id)insertWithInt:(int)arg0 withJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)replaceWithInt:(int)arg0 withInt:(int)arg1 withNSString:(id)arg2 ;
-(id)reverse;
-(int)length;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif