// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSFLOATARRAY_H
#define IOSFLOATARRAY_H



#import "IOSArray.h"

@interface IOSFloatArray : IOSArray {
    float buffer_;
}




-(float)floatAtIndex:(NSUInteger)arg0 ;
-(*float)floatRefAtIndex:(NSUInteger)arg0 ;
-(float)replaceFloatAtIndex:(NSUInteger)arg0 withFloat:(float)arg1 ;
-(void)getFloats:(*float)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithFloats:(*float)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithFloats:(*float)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;


@end


#endif