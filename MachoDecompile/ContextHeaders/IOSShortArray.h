// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSSHORTARRAY_H
#define IOSSHORTARRAY_H



#import "IOSArray.h"

@interface IOSShortArray : IOSArray {
    short buffer_;
}




-(short)shortAtIndex:(NSUInteger)arg0 ;
-(*short)shortRefAtIndex:(NSUInteger)arg0 ;
-(short)replaceShortAtIndex:(NSUInteger)arg0 withShort:(short)arg1 ;
-(void)getShorts:(*short)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithShorts:(*short)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithShorts:(*short)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;


@end


#endif