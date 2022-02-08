// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSCHARARRAY_H
#define IOSCHARARRAY_H



#import "IOSArray.h"

@interface IOSCharArray : IOSArray {
    unsigned short buffer_;
}




-(unsigned short)charAtIndex:(NSUInteger)arg0 ;
-(*unsigned short)charRefAtIndex:(NSUInteger)arg0 ;
-(unsigned short)replaceCharAtIndex:(NSUInteger)arg0 withChar:(unsigned short)arg1 ;
-(void)getChars:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithChars:(*unsigned short)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithChars:(*unsigned short)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;
+(id)arrayWithNSString:(id)arg0 ;


@end


#endif