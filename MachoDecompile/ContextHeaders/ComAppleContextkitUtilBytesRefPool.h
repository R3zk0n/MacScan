// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILBYTESREFPOOL_H
#define COMAPPLECONTEXTKITUTILBYTESREFPOOL_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSByteArray.h"
#import "ComAppleContextkitUtilBytesRefPool_Allocator.h"

@interface ComAppleContextkitUtilBytesRefPool : NSObject {
    IOSObjectArray *buffers_;
    int bufferUpto_;
    int byteUpto_;
    IOSByteArray *buffer_;
    int byteOffset_;
    ComAppleContextkitUtilBytesRefPool_Allocator *allocator_;
    int blockSize_;
}




-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithComAppleContextkitUtilBytesRefPool_Allocator:(id)arg0 ;
-(void)reset;
-(void)resetWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(void)nextBuffer;
-(id)tryAppendWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)tryAppendWithJavaLangCharSequence:(id)arg0 ;
-(id)tryAppendWithJavaLangCharSequence:(id)arg0 withChar:(unsigned short)arg1 withJavaLangCharSequence:(id)arg2 ;
-(BOOL)reclaimSpaceWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(NSInteger)numBytesStored;
-(void)dealloc;
+(void)initialize;


@end


#endif