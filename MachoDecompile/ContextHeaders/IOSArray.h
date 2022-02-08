// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSARRAY_H
#define IOSARRAY_H


#import <Foundation/Foundation.h>

#import "AutoreleaseLiteSupport-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IOSArray : NSObject <AutoreleaseLiteSupport, NSCopying>

 {
    int size_;
    uint8_t _autoreleaseLiteLastPoolId;
}




-(id)autorelease;
-(int)length;
-(NSUInteger)count;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
-(id)description;
-(id)getClass;
-(id)elementType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)clone;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(*void)buffer;
+(id)arrayWithDimensions:(NSUInteger)arg0 lengths:(*int)arg1 ;
+(id)newArrayWithDimensions:(NSUInteger)arg0 lengths:(*int)arg1 ;
+(id)iosClass;


@end


#endif