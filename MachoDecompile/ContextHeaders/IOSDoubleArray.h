// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSDOUBLEARRAY_H
#define IOSDOUBLEARRAY_H



#import "IOSArray.h"

@interface IOSDoubleArray : IOSArray {
    CGFloat buffer_;
}




-(CGFloat)doubleAtIndex:(NSUInteger)arg0 ;
-(*CGFloat)doubleRefAtIndex:(NSUInteger)arg0 ;
-(CGFloat)replaceDoubleAtIndex:(NSUInteger)arg0 withDouble:(CGFloat)arg1 ;
-(void)getDoubles:(*CGFloat)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithDoubles:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithDoubles:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;


@end


#endif