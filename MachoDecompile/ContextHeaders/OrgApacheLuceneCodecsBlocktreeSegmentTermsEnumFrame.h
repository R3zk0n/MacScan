// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTREESEGMENTTERMSENUMFRAME_H
#define ORGAPACHELUCENECODECSBLOCKTREESEGMENTTERMSENUMFRAME_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilFstFST_Arc.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneStoreByteArrayDataInput.h"
#import "OrgApacheLuceneCodecsBlockTermState.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneCodecsBlocktreeSegmentTermsEnum.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneCodecsBlocktreeSegmentTermsEnumFrame : NSObject <AutoreleaseLiteSupport>

 {
    int ord_;
    BOOL hasTerms_;
    BOOL hasTermsOrig_;
    BOOL isFloor_;
    OrgApacheLuceneUtilFstFST_Arc *arc_;
    BOOL versionAutoPrefix_;
    NSInteger fp_;
    NSInteger fpOrig_;
    NSInteger fpEnd_;
    IOSByteArray *suffixBytes_;
    OrgApacheLuceneStoreByteArrayDataInput *suffixesReader_;
    IOSByteArray *statBytes_;
    OrgApacheLuceneStoreByteArrayDataInput *statsReader_;
    IOSByteArray *floorData_;
    OrgApacheLuceneStoreByteArrayDataInput *floorDataReader_;
    int prefix_;
    int entCount_;
    int nextEnt_;
    BOOL isLastInFloor_;
    BOOL isLeafBlock_;
    NSInteger lastSubFP_;
    int nextFloorLabel_;
    int numFollowFloorBlocks_;
    int metaDataUpto_;
    OrgApacheLuceneCodecsBlockTermState *state_;
    IOSLongArray *longs_;
    IOSByteArray *bytes_;
    OrgApacheLuceneStoreByteArrayDataInput *bytesReader_;
    uint8_t _autoreleaseLiteLastPoolId;
    OrgApacheLuceneCodecsBlocktreeSegmentTermsEnum *ste_;
    int startBytePos_;
    int suffix_;
    NSInteger subCode_;
}




-(id)autorelease;
-(id)initWithOrgApacheLuceneCodecsBlocktreeSegmentTermsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)setFloorDataWithOrgApacheLuceneStoreByteArrayDataInput:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(int)getTermBlockOrd;
-(void)loadNextFloorBlock;
-(void)loadBlock;
-(void)rewind;
-(BOOL)next;
-(void)nextLeaf;
-(BOOL)nextNonLeaf;
-(void)scanToFloorFrameWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)decodeMetaData;
-(BOOL)prefixMatchesWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)scanToSubBlockWithLong:(NSInteger)arg0 ;
-(id)scanToTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)scanToTermLeafWithOrgApacheLuceneUtilBytesRef:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)scanToTermNonLeafWithOrgApacheLuceneUtilBytesRef:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)fillTerm;
-(void)dealloc;
-(void)__javaClone;
+(void)initialize;


@end


#endif