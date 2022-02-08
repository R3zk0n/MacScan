// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILBYTESREFPOOL_ALLOCATOR_H
#define COMAPPLECONTEXTKITUTILBYTESREFPOOL_ALLOCATOR_H


#import <Foundation/Foundation.h>


@interface ComAppleContextkitUtilBytesRefPool_Allocator : NSObject {
    int blockSize_;
}




-(id)initWithInt:(int)arg0 ;
-(int)getBlockSize;
-(void)recycleByteBlocksWithJavaUtilList:(id)arg0 ;
-(id)getByteBlock;


@end


#endif