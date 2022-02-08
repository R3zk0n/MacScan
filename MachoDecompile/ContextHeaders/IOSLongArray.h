// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSLONGARRAY_H
#define IOSLONGARRAY_H



#import "IOSArray.h"

@interface IOSLongArray : IOSArray {
    NSInteger buffer_;
}




-(NSInteger)longAtIndex:(NSUInteger)arg0 ;
-(*NSInteger)longRefAtIndex:(NSUInteger)arg0 ;
-(NSInteger)replaceLongAtIndex:(NSUInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)getLongs:(*NSInteger)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithLongs:(*NSInteger)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithLongs:(*NSInteger)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;


@end


#endif