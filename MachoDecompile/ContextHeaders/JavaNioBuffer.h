// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBUFFER_H
#define JAVANIOBUFFER_H


#import <Foundation/Foundation.h>


@interface JavaNioBuffer : NSObject {
    int capacity_;
    int limit_;
    int mark_;
    int position_;
    int _elementSizeShift_;
    NSInteger effectiveDirectAddress_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(id)array;
-(int)arrayOffset;
-(int)capacity;
-(void)checkIndexWithInt:(int)arg0 ;
-(void)checkIndexWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)checkGetBoundsWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)checkPutBoundsWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)checkStartEndRemainingWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)clear;
-(id)flip;
-(BOOL)hasArray;
-(BOOL)hasRemaining;
-(BOOL)isDirect;
-(BOOL)isReadOnly;
-(void)checkWritable;
-(int)limit;
-(id)limitWithInt:(int)arg0 ;
-(id)mark;
-(int)position;
-(id)positionWithInt:(int)arg0 ;
-(void)positionImplWithInt:(int)arg0 ;
-(int)remaining;
-(id)reset;
-(id)rewind;
-(id)description;
-(int)getElementSizeShift;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif