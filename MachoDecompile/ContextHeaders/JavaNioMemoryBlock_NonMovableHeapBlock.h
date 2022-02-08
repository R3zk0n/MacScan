// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOMEMORYBLOCK_NONMOVABLEHEAPBLOCK_H
#define JAVANIOMEMORYBLOCK_NONMOVABLEHEAPBLOCK_H



#import "JavaNioMemoryBlock.h"
#import "IOSByteArray.h"

@interface JavaNioMemoryBlock_NonMovableHeapBlock : JavaNioMemoryBlock {
    IOSByteArray *array_;
}




-(id)initWithByteArray:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)array;
-(void)free;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif