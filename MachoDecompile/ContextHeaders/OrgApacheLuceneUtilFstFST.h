// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTFST_H
#define ORGAPACHELUCENEUTILFSTFST_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilFstFST_INPUT_TYPEEnum.h"
#import "OrgApacheLuceneUtilFstBytesStore.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilFstOutputs.h"
#import "OrgApacheLuceneUtilPackedPackedInts_Reader.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilPackedGrowableWriter.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilFstFST : NSObject <OrgApacheLuceneUtilAccountable>

 {
    OrgApacheLuceneUtilFstFST_INPUT_TYPEEnum *inputType_;
    id *emptyOutput_;
    OrgApacheLuceneUtilFstBytesStore *bytes_;
    IOSByteArray *bytesArray_;
    OrgApacheLuceneUtilFstOutputs *outputs_;
    NSInteger startNode_;
    BOOL packed_;
    OrgApacheLuceneUtilPackedPackedInts_Reader *nodeRefToAddress_;
    IOSObjectArray *cachedRootArcs_;
    OrgApacheLuceneUtilPackedGrowableWriter *nodeAddress_;
    OrgApacheLuceneUtilPackedGrowableWriter *inCounts_;
    int version__;
    int cachedArcsBytesUsed_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneUtilFstFST_INPUT_TYPEEnum:(id)arg0 withOrgApacheLuceneUtilFstOutputs:(id)arg1 withBoolean:(BOOL)arg2 withFloat:(float)arg3 withInt:(int)arg4 ;
-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withOrgApacheLuceneUtilFstOutputs:(id)arg1 ;
-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withOrgApacheLuceneUtilFstOutputs:(id)arg1 withInt:(int)arg2 ;
-(id)getInputType;
-(NSInteger)ramBytesUsedWithOrgApacheLuceneUtilFstFST_ArcArray:(id)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)finishWithLong:(NSInteger)arg0 ;
-(NSInteger)getNodeAddressWithLong:(NSInteger)arg0 ;
-(void)cacheRootArcs;
-(id)getEmptyOutput;
-(void)setEmptyOutputWithId:(id)arg0 ;
-(void)saveWithOrgApacheLuceneStoreDataOutput:(id)arg0 ;
-(void)saveWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
-(void)writeLabelWithOrgApacheLuceneStoreDataOutput:(id)arg0 withInt:(int)arg1 ;
-(int)readLabelWithOrgApacheLuceneStoreDataInput:(id)arg0 ;
-(NSInteger)addNodeWithOrgApacheLuceneUtilFstBuilder:(id)arg0 withOrgApacheLuceneUtilFstBuilder_UnCompiledNode:(id)arg1 ;
-(id)getFirstArcWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 ;
-(id)readLastTargetArcWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg2 ;
-(NSInteger)readUnpackedNodeTargetWithOrgApacheLuceneUtilFstFST_BytesReader:(id)arg0 ;
-(id)readFirstTargetArcWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg2 ;
-(id)readFirstRealTargetArcWithLong:(NSInteger)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg2 ;
-(BOOL)isExpandedTargetWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg1 ;
-(id)readNextArcWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg1 ;
-(int)readNextArcLabelWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg1 ;
-(id)readNextRealArcWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg1 ;
-(BOOL)assertRootCachedArcWithInt:(int)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 ;
-(id)findTargetArcWithInt:(int)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 withOrgApacheLuceneUtilFstFST_Arc:(id)arg2 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg3 ;
-(id)findTargetArcWithInt:(int)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 withOrgApacheLuceneUtilFstFST_Arc:(id)arg2 withOrgApacheLuceneUtilFstFST_BytesReader:(id)arg3 withBoolean:(BOOL)arg4 ;
-(void)seekToNextNodeWithOrgApacheLuceneUtilFstFST_BytesReader:(id)arg0 ;
-(BOOL)shouldExpandWithOrgApacheLuceneUtilFstBuilder:(id)arg0 withOrgApacheLuceneUtilFstBuilder_UnCompiledNode:(id)arg1 ;
-(id)getBytesReader;
-(id)initWithOrgApacheLuceneUtilFstFST_INPUT_TYPEEnum:(id)arg0 withOrgApacheLuceneUtilFstOutputs:(id)arg1 withInt:(int)arg2 ;
-(id)packWithOrgApacheLuceneUtilFstBuilder:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
-(void)dealloc;
+(id)readWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgApacheLuceneUtilFstOutputs:(id)arg1 ;
+(BOOL)targetHasArcsWithOrgApacheLuceneUtilFstFST_Arc:(id)arg0 ;
+(void)initialize;


@end


#endif