// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTREEINTERSECTTERMSENUMFRAME_H
#define ORGAPACHELUCENECODECSBLOCKTREEINTERSECTTERMSENUMFRAME_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "OrgApacheLuceneStoreByteArrayDataInput.h"
#import "OrgApacheLuceneUtilAutomatonTransition.h"
#import "OrgApacheLuceneUtilFstFST_Arc.h"
#import "OrgApacheLuceneCodecsBlockTermState.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneCodecsBlocktreeIntersectTermsEnum.h"

@interface OrgApacheLuceneCodecsBlocktreeIntersectTermsEnumFrame : NSObject {
    int ord_;
    NSInteger fp_;
    NSInteger fpOrig_;
    NSInteger fpEnd_;
    NSInteger lastSubFP_;
    int state_;
    int lastState_;
    int metaDataUpto_;
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
    int numFollowFloorBlocks_;
    int nextFloorLabel_;
    OrgApacheLuceneUtilAutomatonTransition *transition_;
    int transitionIndex_;
    int transitionCount_;
    BOOL versionAutoPrefix_;
    OrgApacheLuceneUtilFstFST_Arc *arc_;
    OrgApacheLuceneCodecsBlockTermState *termState_;
    IOSLongArray *longs_;
    IOSByteArray *bytes_;
    OrgApacheLuceneStoreByteArrayDataInput *bytesReader_;
    OrgApacheLuceneUtilBytesRef *outputPrefix_;
    int startBytePos_;
    int suffix_;
    int floorSuffixLeadStart_;
    int floorSuffixLeadEnd_;
    BOOL isAutoPrefixTerm_;
    OrgApacheLuceneCodecsBlocktreeIntersectTermsEnum *ite_;
}




-(id)initWithOrgApacheLuceneCodecsBlocktreeIntersectTermsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)loadNextFloorBlock;
-(void)setStateWithInt:(int)arg0 ;
-(void)load__WithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(BOOL)next;
-(void)nextLeaf;
-(BOOL)nextNonLeaf;
-(int)getTermBlockOrd;
-(void)decodeMetaData;
-(void)dealloc;
-(void)__javaClone;


@end


#endif