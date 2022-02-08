// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIODOUBLEBUFFER_H
#define JAVANIODOUBLEBUFFER_H


#import <Foundation/Foundation.h>

#import "JavaNioBuffer.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaNioDoubleBuffer : JavaNioBuffer <JavaLangComparable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)array;
-(int)arrayOffset;
-(id)asReadOnlyBuffer;
-(id)compact;
-(int)compareToWithId:(id)arg0 ;
-(id)duplicate;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)get;
-(id)getWithDoubleArray:(id)arg0 ;
-(id)getWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(CGFloat)getWithInt:(int)arg0 ;
-(BOOL)hasArray;
-(BOOL)isDirect;
-(id)order;
-(id)protectedArray;
-(int)protectedArrayOffset;
-(BOOL)protectedHasArray;
-(id)putWithDouble:(CGFloat)arg0 ;
-(id)putWithDoubleArray:(id)arg0 ;
-(id)putWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)putWithJavaNioDoubleBuffer:(id)arg0 ;
-(id)putWithInt:(int)arg0 withDouble:(CGFloat)arg1 ;
-(id)slice;
+(id)allocateWithInt:(int)arg0 ;
+(id)wrapWithDoubleArray:(id)arg0 ;
+(id)wrapWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif