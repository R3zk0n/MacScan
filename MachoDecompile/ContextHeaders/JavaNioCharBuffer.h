// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARBUFFER_H
#define JAVANIOCHARBUFFER_H


#import <Foundation/Foundation.h>

#import "JavaNioBuffer.h"
#import "JavaLangComparable-Protocol.h"
#import "JavaLangCharSequence-Protocol.h"
#import "JavaLangAppendable-Protocol.h"
#import "JavaLangReadable-Protocol.h"

@interface JavaNioCharBuffer : JavaNioBuffer <JavaLangComparable, JavaLangCharSequence, JavaLangAppendable, JavaLangReadable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)array;
-(int)arrayOffset;
-(id)asReadOnlyBuffer;
-(unsigned short)charAtWithInt:(int)arg0 ;
-(id)compact;
-(int)compareToWithId:(id)arg0 ;
-(id)duplicate;
-(BOOL)isEqual:(id)arg0 ;
-(unsigned short)get;
-(id)getWithCharArray:(id)arg0 ;
-(id)getWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(unsigned short)getWithInt:(int)arg0 ;
-(BOOL)hasArray;
-(BOOL)isDirect;
-(int)length;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithChar:(unsigned short)arg0 ;
-(id)putWithCharArray:(id)arg0 ;
-(id)putWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)putWithJavaNioCharBuffer:(id)arg0 ;
-(id)putWithInt:(int)arg0 withChar:(unsigned short)arg1 ;
-(id)putWithNSString:(id)arg0 ;
-(id)putWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)slice;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(id)appendWithChar:(unsigned short)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)readWithJavaNioCharBuffer:(id)arg0 ;
+(id)allocateWithInt:(int)arg0 ;
+(id)wrapWithCharArray:(id)arg0 ;
+(id)wrapWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)wrapWithJavaLangCharSequence:(id)arg0 ;
+(id)wrapWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif