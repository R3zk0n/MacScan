// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPAGEDBYTES_H
#define ORGAPACHELUCENEUTILPAGEDBYTES_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilPagedBytes : NSObject <OrgApacheLuceneUtilAccountable>

 {
    IOSObjectArray *blocks_;
    int numBlocks_;
    int blockSize_;
    int blockBits_;
    int blockMask_;
    BOOL didSkipBytes_;
    BOOL frozen_;
    int upto_;
    IOSByteArray *currentBlock_;
    NSInteger bytesUsedPerBlock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(void)addBlockWithByteArray:(id)arg0 ;
-(void)copy__WithOrgApacheLuceneStoreIndexInput:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)copy__WithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(id)freezeWithBoolean:(BOOL)arg0 ;
-(NSInteger)getPointer;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(NSInteger)copyUsingLengthPrefixWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)getDataInput;
-(id)getDataOutput;
-(void)dealloc;
+(void)initialize;


@end


#endif