// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSBYTEARRAY_H
#define IOSBYTEARRAY_H



#import "IOSArray.h"

@interface IOSByteArray : IOSArray {
    char buffer_;
}




-(char)byteAtIndex:(NSUInteger)arg0 ;
-(char *)byteRefAtIndex:(NSUInteger)arg0 ;
-(char)replaceByteAtIndex:(NSUInteger)arg0 withByte:(char)arg1 ;
-(void)getBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(*void)buffer;
-(id)elementType;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)getBytes:(char *)arg0 offset:(int)arg1 length:(int)arg2 ;
-(void)replaceBytes:(char *)arg0 length:(int)arg1 offset:(int)arg2 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
-(id)toNSData;
+(id)newArrayWithLength:(NSUInteger)arg0 ;
+(id)arrayWithLength:(NSUInteger)arg0 ;
+(id)newArrayWithBytes:(char *)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithBytes:(char *)arg0 count:(NSUInteger)arg1 ;
+(id)iosClass;
+(id)arrayWithNSData:(id)arg0 ;


@end


#endif