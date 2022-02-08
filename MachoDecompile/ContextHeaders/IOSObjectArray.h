// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSOBJECTARRAY_H
#define IOSOBJECTARRAY_H



#import "IOSArray.h"
#import "IOSClass.h"
#import "NSFastEnumeration-Protocol.h"

@interface IOSObjectArray : IOSArray <NSFastEnumeration>

 {
    BOOL isRetained_;
    id buffer_;
}


@property (readonly) IOSClass *elementType; // ivar: elementType_


-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)getObjects:(*id)arg0 length:(NSUInteger)arg1 ;
-(void)arraycopy:(int)arg0 destination:(id)arg1 dstOffset:(int)arg2 length:(int)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfElementAtIndex:(int)arg0 ;
-(id)retain;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(*void)buffer;
+(id)newArrayWithLength:(NSUInteger)arg0 type:(id)arg1 ;
+(id)arrayWithLength:(NSUInteger)arg0 type:(id)arg1 ;
+(id)newArrayWithObjects:(*id)arg0 count:(NSUInteger)arg1 type:(id)arg2 ;
+(id)arrayWithObjects:(*id)arg0 count:(NSUInteger)arg1 type:(id)arg2 ;
+(id)arrayWithArray:(id)arg0 ;
+(id)arrayWithNSArray:(id)arg0 type:(id)arg1 ;
+(id)arrayWithDimensions:(NSUInteger)arg0 lengths:(*int)arg1 type:(id)arg2 ;
+(id)newArrayWithDimensions:(NSUInteger)arg0 lengths:(*int)arg1 type:(id)arg2 ;


@end


#endif