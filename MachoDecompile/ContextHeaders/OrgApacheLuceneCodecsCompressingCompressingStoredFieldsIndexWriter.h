// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSINDEXWRITER_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSINDEXWRITER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexOutput.h"
#import "IOSIntArray.h"
#import "IOSLongArray.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexWriter : NSObject <JavaIoCloseable>

 {
    OrgApacheLuceneStoreIndexOutput *fieldsIndexOut_;
    int blockSize_;
    int totalDocs_;
    int blockDocs_;
    int blockChunks_;
    NSInteger firstStartPointer_;
    NSInteger maxStartPointer_;
    IOSIntArray *docBaseDeltas_;
    IOSLongArray *startPointerDeltas_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneStoreIndexOutput:(id)arg0 withInt:(int)arg1 ;
-(void)reset;
-(void)writeBlock;
-(void)writeIndexWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(void)finishWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(void)close;
-(void)dealloc;


@end


#endif