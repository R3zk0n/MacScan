// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSINDEXREADER_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSINDEXREADER_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "IOSLongArray.h"
#import "IOSObjectArray.h"
#import "NSCopying-Protocol.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneCodecsCompressingCompressingStoredFieldsIndexReader : NSObject <NSCopying, OrgApacheLuceneUtilAccountable>

 {
    int maxDoc_;
    IOSIntArray *docBases_;
    IOSLongArray *startPointers_;
    IOSIntArray *avgChunkDocs_;
    IOSLongArray *avgChunkSizes_;
    IOSObjectArray *docBasesDeltas_;
    IOSObjectArray *startPointersDeltas_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 ;
-(int)blockWithInt:(int)arg0 ;
-(int)relativeDocBaseWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSInteger)relativeStartPointerWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)relativeChunkWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSInteger)getStartPointerWithInt:(int)arg0 ;
-(id)clone;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;


@end


#endif