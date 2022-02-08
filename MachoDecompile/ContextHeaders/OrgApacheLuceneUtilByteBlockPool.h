// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBYTEBLOCKPOOL_H
#define ORGAPACHELUCENEUTILBYTEBLOCKPOOL_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilByteBlockPool_Allocator.h"

@interface OrgApacheLuceneUtilByteBlockPool : NSObject {
    IOSObjectArray *buffers_;
    int byteUpto_;
    IOSByteArray *buffer_;
    int byteOffset_;
    int bufferUpto_;
    OrgApacheLuceneUtilByteBlockPool_Allocator *allocator_;
}




-(id)initWithOrgApacheLuceneUtilByteBlockPool_Allocator:(id)arg0 ;
-(void)reset;
-(void)resetWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(void)nextBuffer;
-(int)newSliceWithInt:(int)arg0 ;
-(int)allocSliceWithByteArray:(id)arg0 withInt:(int)arg1 ;
-(void)setBytesRefWithOrgApacheLuceneUtilBytesRef:(id)arg0 withInt:(int)arg1 ;
-(void)appendWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)readBytesWithLong:(NSInteger)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)dealloc;
+(void)initialize;


@end


#endif