// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOIOVEC_H
#define JAVANIOIOVEC_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSIntArray.h"
#import "JavaNioIoVec_DirectionEnum.h"

@interface JavaNioIoVec : NSObject {
    IOSObjectArray *byteBuffers_;
    int offset_;
    int bufferCount_;
    IOSObjectArray *ioBuffers_;
    IOSIntArray *offsets_;
    IOSIntArray *byteCounts_;
    JavaNioIoVec_DirectionEnum *direction_;
}




-(id)initWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaNioIoVec_DirectionEnum:(id)arg3 ;
-(int)init__;
-(int)doTransferWithJavaIoFileDescriptor:(id)arg0 ;
-(void)didTransferWithInt:(int)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif