// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSBOOLEANARRAY_H
#define IOSBOOLEANARRAY_H



#import "IOSArray.h"

@interface IOSBooleanArray : IOSArray {
    BOOL buffer_;
}




-(BOOL)booleanAtIndex:(NSUInteger)arg0 ;
-(*BOOL)booleanRefAtIndex:(NSUInteger)arg0 ;
-(BOOL)replaceBooleanAtIndex:(NSUInteger)arg0 withBoolean:(BOOL)arg1 ;
-(void)getBooleans:(*BOOL)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithBooleans:(*BOOL)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithBooleans:(*BOOL)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;


@end


#endif