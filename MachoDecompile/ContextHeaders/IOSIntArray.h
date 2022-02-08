// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSINTARRAY_H
#define IOSINTARRAY_H



#import "IOSArray.h"

@interface IOSIntArray : IOSArray {
    int buffer_;
}




-(int)intAtIndex:(NSUInteger)arg0 ;
-(*int)intRefAtIndex:(NSUInteger)arg0 ;
-(int)replaceIntAtIndex:(NSUInteger)arg0 withInt:(int)arg1 ;
-(void)getInts:(*int)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithInts:(*int)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithInts:(*int)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;


@end


#endif